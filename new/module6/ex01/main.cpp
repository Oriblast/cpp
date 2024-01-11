#include "Serializer.hpp"
/*
int main()
{
    Data ptr;
    uintptr_t ptr2;
    Data *ptr3;
    uintptr_t ptr4;

    ptr.raw2 = 1000;
    ptr2 = Serializer::serialize(&ptr);
    ptr3 = Serializer::deserialize(ptr4);
}
*/
int main ()
{
    Data my_value = {.number = 1, .str = "Amanda"};
    uintptr_t raw;
    Data *ptr;

    raw = Serializer::serialize(&my_value);
    std::cout << raw << std::endl;
    ptr = Serializer::deserialize(raw);
    std::cout << "the name of raw is -> " << ptr->str << " <- and the number is " << ptr->number << std::endl;
    return (0);
}