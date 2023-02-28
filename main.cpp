#include <iostream>
#include <random>
#include <ranges>
#include <unordered_map>
#include <vector>
#include "HashTable.h"
#include <string>

int main() {
    HashTable<std::string, std::hash<std::string>> t;
    for (int i = 0; i < 200; i++) {
        t.insert(std::to_string(i));
    }
    for(auto i=t.begin();i!=t.end();++i)
    {
        std::cout<<*i<<" ";
    }
    std::cout<<"\n\n";

    t.for_each([](const auto& v) { std::cout << v << " "; });
    std::cout<<"\n\n";
    // std::cout<<"\n\n\n\n";
    // HashTable<std::string, std::hash<std::string>> t2 = t;
    //     t.clear();
    // t2.for_each([](const auto& v) { std::cout << v << " "; });
    
    t.remove("4");
    for(auto i=t.begin();i!=t.end();++i)
    {
        std::cout<<*i<<" ";
    }
    std::cout<<"\n\n";

    auto t1(t);
    t1.remove("6");
    for(auto i=t1.begin();i!=t1.end();++i)
    {
        std::cout<<*i<<" ";
    }
    std::cout<<"\n\n";


    t.clear();
    for(auto i=t.begin();i!=t.end();++i)
    {
        std::cout<<*i<<" ";
    }

    return 0;
}