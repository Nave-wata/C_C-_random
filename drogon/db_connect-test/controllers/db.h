#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class db : public drogon::HttpController<db> {
    MYSQL *conn;
    public:
        METHOD_LIST_BEGIN

        METHOD_ADD(db::connectDB, "", Get);

        METHOD_LIST_END

        void connectDB(const HttpRequestPtr &req,
                      std::function<void(const HttpResponsePtr &)> &&callback) const;
};
