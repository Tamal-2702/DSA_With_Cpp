#include <iostream>
int main()
{
    int Num1 = 2, Num2 = 7;
    float Result;

    std::cout << (Result = Num1 + Num2) << std::endl;
    std::cout << (Result = Num1 - Num2) << std::endl;
    std::cout << (Result = Num1 * Num2) << '\n';
    std::cout << (Result = static_cast<float>(Num2) / Num1) << std::endl; // static_cast will convert data type of Num2 frm int to f (i.e 7 -> 7.0f) and since the result is also in f so, C++ will automatically upgrade Num1 to f. So, the operation becomes Result=7.0/2.0
    std::cout << (Result = Num2 % Num1) << std::endl;

    return 0;
}
