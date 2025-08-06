#include <iostream>
int main()
{
    int num = 5;

    num += 7;
    std::cout << num << '\n'; //num=5+7=12 

    num -= 2;
    std::cout << num << '\n'; //num=12-2=10

    float result = static_cast<float>(num); //it'll change the data type of num from int to float and store the value that in result variable at compile time
    result /= 3; //C++ will automatically upgrade 3 -> 3.0 and will give the answer in float.
    std::cout << result << '\n'; //result=(10.0/3.0)=3.333
    num = result; //num=3 (float gets downgrade to int)

    num %= 2; // % is the modulus operator it give the remainder between two numbers
    std::cout << num << '\n'; // num=3%2=1

    num *= 2;
    std::cout << num << '\n'; //num=1*2=2

    return 0;
}