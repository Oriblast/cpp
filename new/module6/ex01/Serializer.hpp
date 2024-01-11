#pragma once

#include <iostream>
#include "Serializer.hpp"
#include <cstdint>

struct Data {
    uintptr_t raw2;
    int number;
    std::string str;
};

class Serializer {
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};
