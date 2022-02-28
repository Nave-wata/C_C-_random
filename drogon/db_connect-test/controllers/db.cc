#include "db.h"

void db::connectDB(const HttpRequestPtr&, std::function<void(const HttpRequestPtr &)> && callback) const {
    LOG_DEBUG << "Accessed";

    Json::Value ret;

    ret["message"] = "Hello";

    auto resp = HttpResponse::newHttpResponse(ret);
    callback(resp);
}
