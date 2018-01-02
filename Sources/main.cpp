#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, double> mapka;
    mapka.insert(std::pair("Element_1",1));
    mapka.insert(std::pair("Element_2",2));
    std::cout << mapka.size() << std::endl;
    std::cout << mapka["Element_1"];
    auto iterator = mapka.begin();
    iterator->second = 12;
    return 0;
}