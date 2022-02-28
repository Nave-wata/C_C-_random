#include "db.h"

void db::connectDB(const HttpRequestPtr &req,
                  std::function<void(const HttpResponsePtr &)> &&callback) {
    LOG_DEBUG << "Accessed: ";

    conn = mysql_init(NULL);

    Json::Value ret;

    ret["message"] = "Hello";

    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
