/*
 * Example to connect to MariaDB(MySQL)
 */
#include <iostream>
#include <mariadb/mysql.h>
#include <string>

using namespace std;

/*
 * [CLASS] Process
 */
class Proc
{
    const char* MY_HOSTNAME;
    const char* MY_DATABASE;
    const char* MY_USERNAME;
    const char* MY_PASSWORD;
    const char* MY_SOCKET;
    enum {
        MY_PORT_NO = 3306,
        MY_OPT     = 0
    };
    MYSQL     *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

public:
    Proc();           // Constructor
    bool execMain();  // Main Process
};

/*
 * Proc - Constructor
 */
Proc::Proc()
{
    // Initialize constants
    MY_HOSTNAME = "192.168.3.100";
    MY_DATABASE = "mariadb";
    MY_USERNAME = "test";
    MY_PASSWORD = "0000";
    MY_SOCKET   = NULL;
}

/*
 * Main Process
 */
bool Proc::execMain()
{
    try {
        // Format a MySQL object
        conn = mysql_init(NULL);

        // Establish a MySQL connection
        if (!mariadb_real_connect(
                conn,
                MY_HOSTNAME, MY_USERNAME,
                MY_PASSWORD, MY_DATABASE,
                MY_PORT_NO, MY_SOCKET, MY_OPT)) {
            cerr << mariadb_error(conn) << endl;
            return false;
        }

        // Execute a sql statement
        if (mariadb_query(conn, "SHOW TABLES")) {
            cerr << mariadb_error(conn) << endl;
            return false;
        }

        // Get a result set
        res = mariadb_use_result(conn);

        // Fetch a result set
        cout << "* MySQL - SHOW TABLES in `"
             << MY_DATABASE << "`" << endl;
        while ((row = mariadb_fetch_row(res)) != NULL)
            cout << row[0] << endl;

        // Release memories
        mariadb_free_result(res);

        // Close a MySQL connection
        mariadb_close(conn);
    } catch (char *e) {
        cerr << "[EXCEPTION] " << e << endl;
        return false;
    }
    return true;
}

/*
 * Execution
 */
int main(){
    try {
        Proc objMain;
        bool bRet = objMain.execMain();
        if (!bRet) cout << "ERROR!" << endl;
    } catch (char *e) {
        cerr << "[EXCEPTION] " << e << endl;
        return 1;
    }
    return 0;
}
