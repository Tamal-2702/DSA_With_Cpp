#include <iostream>
#include <string>

// A simple struct to demonstrate member access operators
struct Data
{
    int value;
};

int main()
{
    // sizeof Operator ##
    // Returns the size of a variable or data type in bytes.
    std::cout << "1. sizeof Operator:" << std::endl;
    std::cout << "   Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "   Size of char: " << sizeof(char) << " bytes" << std::endl;

    // Ternary or Conditional Operator (?:) ##
    // A shorthand for an if-else statement. Syntax: (condition) ? value_if_true : value_if_false;
    std::cout << "\n2. Ternary Operator (?:):" << std::endl;
    int a = 10, b = 20;
    std::string result_str = std::to_string((a > b) ? a:b) + " is greater";
    //std::to_string(20) converts the int 20 into a std::string "20".
    //The expression now becomes: std::string("20") + " is greater".
    std::cout << "   Between " << a << " and " << b << ", " << result_str << std::endl;

    // Comma Operator (,) ##
    // Evaluates multiple expressions, and the result is the value of the last expression.
    std::cout << "\n3. Comma Operator (,):" << std::endl;
    int x = (a = 5, b = 15, a + b); // a becomes 5, b becomes 15, x becomes 20
    std::cout << "   The result of (a=5, b=15, a+b) is: " << x << std::endl;

    // Address-of (&) and Dereference (*) Operators ##
    // & gets the memory address of a variable.
    // * accesses the value at a memory address (pointer).
    std::cout << "\n4. Address (&) and Dereference (*) Operators:" << std::endl;
    int *ptr = &a; // ptr now holds the memory address of 'a'
    std::cout << "   Address of 'a' (&a): " << ptr << std::endl;
    std::cout << "   Value at that address (*ptr): " << *ptr << std::endl;

    // Member Access Operators (. and ->) ##
    // . accesses members of an object.
    // -> accesses members of an object through a pointer.
    std::cout << "\n5. Member Access (. and ->) Operators:" << std::endl;
    Data myData;
    Data *ptrData = &myData;

    myData.value = 99; // Using the dot operator, Object ke member ko seedhe access karo.
    std::cout << "   Using dot operator (myData.value): " << myData.value << std::endl;

    ptrData->value = 101; // Using the arrow operator, Pointer ke zariye object ke member ko access karo.
    // ptrData->value = 101; this is same as (*ptrData).value = 101;
    std::cout << "   Using arrow operator (ptrData->value): " << ptrData->value << std::endl;

    // Other operators used implicitly:
    // :: (Scope Resolution) is used in std::cout
    // () (Function Call) is used for main() and std::cout
    // [] (Subscript) is used to access array elements
    // = (Assignment) is used throughout to assign values

    return 0;
}