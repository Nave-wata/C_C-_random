  GNU nano 4.8                       testctrl.h
#pragma once

#include <drogon/HttpSimpleController.h>

using namespace drogon;

class testctrl : public drogon::HttpSimpleController<testctrl>
{
  public:
    virtual void asyncHandleHttpRequest(const HttpRequestPtr& req, std::functio>
    PATH_LIST_BEGIN
    // list path definitions here;
    // PATH_ADD("/path", "filter1", "filter2", HttpMethod1, HttpMethod2...);
    PATH_LIST_END
};
