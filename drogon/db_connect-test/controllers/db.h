#pragma once

#include <drogon/HttpController.h>
#include <mariadb/mysql.h>

using namespace drogon;

class db : public drogon::HttpController<db> {

    const char* MY_HOSTNAME = "192.168.3.100";
    const char* MY_DATABASE = "mariadb";
    const char* MY_USERNAME = "test";
    const char* MY_PASSWORD = "0000";
    const char* MY_SOCKET = NULL;
    enum {
        MY_PORT_NO = 3306,
        MY_OPT     = 0
    };
    MYSQL     *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    public:
        METHOD_LIST_BEGIN

        METHOD_ADD(db::connectDB, "", Get);

        METHOD_LIST_END

        void connectDB(const HttpRequestPtr &req,
                      std::function<void(const HttpResponsePtr &)> &&callback);
};
