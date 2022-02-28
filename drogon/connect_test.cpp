#include <stdio.h>
#include <stdlib.h>
#include <mariadb/mysql.h>

#define DBHOST "192.168.3.100"
#define DBUSER "test"
#define DBPASS "0000"
#define DBNAME "information_schema"

int main()
{

       MYSQL *conn;
       MYSQL_RES *res;
       MYSQL_ROW row;

       // 接続
       conn = mysql_init(NULL);
       if (!mysql_real_connect(conn, DBHOST, DBUSER, DBPASS, DBNAME, 3306, NULL, 0)) {
          fprintf(stderr, "%s\n", mysql_error(conn));
          exit(1);
       }

       // 切断
       mysql_close(conn);

       return 0;
}
