#include "db.h"

void db::connectDB(const HttpRequestPtr &req,
                  std::function<void(const HttpResponsePtr &)> &&callback) {
    Json::Value ret;

    try {
        conn = mysql_init(NULL);
        if (mysql_real_connect(
                conn,
                MY_HOSTNAME, MY_USERNAME,
                MY_PASSWORD, MY_DATABASE,
                MY_PORT_NO, MY_SOCKET, MY_OPT)) {
        } else {
            LOG_DEBUG << mysql_error(conn);
        }

        if (mysql_query(conn, QUERY)) {
            LOG_DEBUG << mysql_error(conn);
        }

        res = mysql_use_result(conn);

        int i = 0;
        while ((row = mysql_fetch_row(res)) != NULL) {}

        mysql_free_result(res);
        mysql_close(conn);
    } catch (char *e) {
        LOG_DEBUG << "[EXCEPTION] " << e;
    }

    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
