#include "demo_v1_User.h"
using namespace demo::v1;

void User::getToken(const HttpRequestPtr &req,
                 std::function<void(const HttpResponsePtr &)> &&callback,
                 std::string userId,
                 const std::string &password) {

    TOKEN = drogon::utils::getUuid();
    Json::Value ret;
    ret["result"] = "ok";
    ret["token"] = TOKEN;
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void User::getInfo(const HttpRequestPtr &req,
                   std::function<void(const HttpResponsePtr &)> &&callback,
                   std::string userId,
                   const std::string &token) {

    Json::Value ret;

    if (TOKEN == token) {
        ret["result"] = "ok";
        ret["user_name"] = "Jack";
        ret["user_id"] = userId;
        ret["token"] = TOKEN;
        ret["gender"] = 1;
    } else {
        ret["result"] = "no";
        LOG_DEBUG << "Not token";
    }

    TOKEN = drogon::utils::getUuid();
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
