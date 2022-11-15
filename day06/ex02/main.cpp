#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

Base *generate(void)
{
    int r = rand() % 3;
    switch (r)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
    }
    return (NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Bad Cast." << std::endl;
}

void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (...)
    {
        try
        {
            (void)dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch (...)
        {
            try
            {
                (void)dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
            }
            catch (...)
            {
                std::cout << "Bad Cast." << std::endl;
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    Base *ptr = generate();
    Base &ref = *ptr;
    identify(ptr);
    identify(ref);
    return (0);
}