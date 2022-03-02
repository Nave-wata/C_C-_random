#pragma once
#include <drogon/HttpController.h>

using namespace drogon;
namespace demo {
namespace v1 {
class User : public drogon::HttpController<User> {
   std::string TOKEN;

   public:

    METHOD_LIST_BEGIN
    METHOD_ADD(User::getToken, "/token?userId={1}&passwd={2}", Get);
    METHOD_ADD(User::getInfo, "/{userId}/info?token={2}", Get);

    METHOD_LIST_END
    void getToken(const HttpRequestPtr &req,
               std::function<void(const HttpResponsePtr &)> &&callback,
               std::string userId,
               const std::string &password);
    void getInfo(const HttpRequestPtr &req,
                 std::function<void(const HttpResponsePtr &)> &&callback,
                 std::string userId,
                 const std::string &token);
};
}  // namespace v1
}  // namespace demo
