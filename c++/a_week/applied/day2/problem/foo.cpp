#include "foo.h"
#include "bar.h"
#include <iostream>

using namespace std;

Foo::Foo() {
    m_pBar = new Bar(this);
}

void Foo::hoge() {
    cout << "Foo::hoge()" << endl;
}

void Foo::fuga() {
    m_pBar->func2();
    cout << "Foo::fuga()" << endl;
    m_pBar->func2();
}
