#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class db : public drogon::HttpController<db> {
  public:
    METHOD_LIST_BEGIN
    // use METHOD_ADD to add your custom processing function here;
    // METHOD_ADD(db::get, "/{2}/{1}", Get); // path is /db/{arg2}/{arg1}
    // METHOD_ADD(db::your_method_name, "/{1}/{2}/list", Get); // path is /db/{>
    // ADD_METHOD_TO(db::your_method_name, "/absolute/path/{1}/{2}/list", Get);>
    METHOD_ADD(db::connectDB, "/test/{userId}", Get);

    METHOD_LIST_END
    // your declaration of processing function maybe like this:
    // void get(const HttpRequestPtr& req, std::function<void (const HttpRespon>
    // void your_method_name(const HttpRequestPtr& req, std::function<void (con>
    void connectDB(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback, std::string  ) const;
};
