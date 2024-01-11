#include "Base.hpp"

Base::~Base(void)
{
    //
}

Base* generate() {
    srand(time(NULL));
    int randomValue = rand() % 3;
    switch (randomValue) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p) {
    try {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } 
    catch (const std::bad_cast&)
    {
        try
        {
            dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch (const std::bad_cast&)
        {
            try 
            {
                dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch (const std::bad_cast&) {}
        }
    }
}