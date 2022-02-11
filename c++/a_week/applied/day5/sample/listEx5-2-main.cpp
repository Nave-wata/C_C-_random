#include <iostream>
#include <string>
#include <set>

int main() {
    std::set<std::string> names;

    names.insert("Tom");
    names.insert("Mike");
    names.insert("Mike");
    names.insert("Bob");

    std::set<std::string>::iterator itr;
    for (itr = names.begin(); itr != names.end(); itr++) {
        std::cout << *itr << std::endl;
    }

    std::string n[] = {"Bob", "Steve"};
    for (int i = 0; i < 2; i++) {
        itr = names.find(n[i]);
        if (itr == names.end()) {
            std::cout << n[i] << "Is not in a set." << std::endl;
        } else {
            std::cout << n[i] << "Is int a set." << std::endl;
        }
    }
    return 0;
}
