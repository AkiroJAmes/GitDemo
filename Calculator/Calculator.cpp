#include <iostream>

float Add(float a, float b);

int main()
{
    float a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << a << " + " << b << " = " << Add(a, b);
}

float Add(float a, float b) { 
    return a + b; 
}
