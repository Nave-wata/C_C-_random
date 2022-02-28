#include "demo_v1_User.h"
using namespace demo::v1;
// add definition of your processing function here

void User::getInfo(const HttpRequestPtr &req,
                   std::function<void(const HttpResponsePtr &)> &&callback,
                   std::string userId) const {
    // LOG_DEBUGでコンソール上に、ログが表示される
    LOG_DEBUG << "User " << userId << " get his information";

    // ここでトークンを参照したり、データを取得する処理が入ったりする

    Json::Value ret;

    // JSONにデータを格納
    ret["result"] = "ok";
    ret["user_name"] = "Jack";
    ret["user_id"] = userId;
    ret["gender"] = 1;

    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
