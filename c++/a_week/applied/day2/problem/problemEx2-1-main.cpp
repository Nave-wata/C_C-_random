#include <iostream>
#include "bar.h"
#include "foo.h"

using namespace std;

int main() {
    Foo pFoo;

    pFoo.hoge();
    pFoo.fuga();
    pFoo.hoge();

    return 0;
}
