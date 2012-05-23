#include <iostream>

using namespace std;

class Exception{};

class A
{
public:
    A()
    {
        printf("A-constructor");
    }
    ~A()
    {
        printf("\nA: A-destructor");
    }
};

class B
{
public:
    B()
    {
        printf("B-constructor");
    }
    ~B()
    {
        printf("\nB: B-destructor");
    }
};

int main()
{
    try
    {
        printf("A: ");
        A a;
        printf("\nB: ");
        B b;
        printf("\nException: create");
        throw Exception();
    }
    catch (Exception)
    {
        printf("\nException: catch");
    }
    return 0;
}


