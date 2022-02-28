#include "db.h"

void db::connectDB(const HttpRequestPtr &req,
                  std::function<void(const HttpResponsePtr &)> &&callback) const {
    LOG_DEBUG << "Accessed: ";

    Json::Value ret;

    ret["message"] = "Hello";

    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
