#include "db.h"

void db::connectDB(const HttpRequestPtr &req, std::function<void(const HttpRequestPtr &)> && callback, std::string userId) const {
    LOG_DEBUG << "Accessed: " << userId;

    Json::Value ret;

    ret["message"] = "Hello";
    ret["Id"] = userId;

    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
