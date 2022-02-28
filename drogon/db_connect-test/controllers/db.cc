#include "db.h"

void db::connectDB(const HttpRequestPtr &req,
                  std::function<void(const HttpResponsePtr &)> &&callback) {
    LOG_DEBUG << "try connect mariadb";

    try {
        conn = mysql_init(NULL);
        if (mysql_real_connect(
            conn,
            "192.168.3.100",
            "test",
            "0000",
            "3306",
            NULL,
            0
        )) {
            LOG_DEBUG << "SUCCESS";
        } else {
            LOG_DEBUG << "FAIL"
        }
    } catch (char *e) {
        LOG_DEBUG << "ERROR";
    }

    Json::Value ret;

    ret["message"] = "Hello";

    auto resp = HttpResponse::newHttpJsonResponse(ret);

    mysql_close(conn);
    callback(resp);
}
