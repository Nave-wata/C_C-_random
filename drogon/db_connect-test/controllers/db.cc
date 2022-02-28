#include "db.h"

void db::connectDB(const HttpRequestPtr &req,
                  std::function<void(const HttpResponsePtr &)> &&callback) {
    LOG_DEBUG << "try connect mariadb";

    try {
        conn = mysql_init(NULL);
        if (mysql_real_connect(
                conn,
                MY_HOSTNAME, MY_USERNAME,
                MY_PASSWORD, MY_DATABASE,
                MY_PORT_NO, MY_SOCKET, MY_OPT)) {
            LOG_DEBUG << "SUCCESS";
        } else {
            LOG_DEBUG << "FAIL";
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
