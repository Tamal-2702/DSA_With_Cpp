#include <iostream>

int main() {
    int num = 10;
    bool condition = false;

    // ## Arithmetic Unary Operators ##
    std::cout << "--- Arithmetic Unary Operators ---" << std::endl;
    // Unary Plus (+): Returns the value of the operand. (Doesn't do much for simple types)
    std::cout << "Original number: " << num << std::endl;
    std::cout << "Unary Plus (+num): " << +num << std::endl;

    // Unary Minus (-): Negates the value of the operand.
    std::cout << "Unary Minus (-num): " << -num << std::endl;

    // ## Increment (++) and Decrement (--) Operators ##
    std::cout << "\n--- Increment/Decrement Operators ---" << std::endl;
    int pre_inc = 5;
    int post_inc = 5;
    
    // Pre-increment (++operand): Increments the value FIRST, then returns the new value.
    std::cout << "Initial pre_inc value:" <<pre_inc<< std::endl;
    std::cout << "Result of pre-increment (++pre_inc): " << ++pre_inc << std::endl; // Value is now 6, prints 6
    std::cout << "Value of pre_inc after: " << pre_inc << std::endl; // Value is 6

    // Post-increment (operand++): Returns the ORIGINAL value, then increments it.
    std::cout << "\nInitial post_inc value:"<<post_inc << std::endl;
    std::cout << "Result of post-increment (post_inc++): " << post_inc++ << std::endl; // Value is 5, prints 5
    std::cout << "Value of post_inc after: " << post_inc << std::endl; // Value is now 6

    std::cout << "The same logic applies to pre-decrement (--) and post-decrement." << std::endl;

    // ## Logical and Bitwise NOT Operators ##
    std::cout << "\n--- Logical and Bitwise NOT ---" << std::endl;
    // Logical NOT (!): Inverts the boolean value.
    std::cout << "Original boolean (condition): " << std::boolalpha << condition << std::endl;
    std::cout << "Logical NOT (!condition): " << !condition << std::endl;

    // Bitwise NOT or Complement (~): Flips all the bits of the operand.
    int bit_num = 10; // Binary: ...00001010
    // Result is -(10 + 1) = -11
    std::cout << "\nOriginal bit_num: " << bit_num << std::endl;
    std::cout << "Bitwise NOT (~bit_num): " << ~bit_num << std::endl; 

    // ## Pointer and Memory Operators ##
    std::cout << "\n--- Pointer and Memory Operators ---" << std::endl;
    int memory_var = 25;
    
    // Address-of (&): Returns the memory address of the operand.
    int* ptr = &memory_var;
    std::cout << "Address-of (&memory_var): " << ptr << std::endl;

    // Dereference (*): Returns the value at the memory address held by a pointer.
    std::cout << "Dereference (*ptr): " << *ptr << std::endl;
    
    // sizeof(): Returns the size of the operand (variable or data type) in bytes.
    std::cout << "sizeof(memory_var): " << sizeof(memory_var) << " bytes" << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << " bytes" << std::endl;

    return 0;
}