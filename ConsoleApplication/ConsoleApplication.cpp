// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "sizeofclass.h"

int main()
{
    std::cout << "Hello World!\n";

    std::cout << std::endl;
    std::cout << "NullClass Size : " << sizeof(NullClass) << std::endl;
    std::cout << "PtrClass Size : " << sizeof(PtrClass) << std::endl;
    std::cout << "RefClass Size : " << sizeof(RefClass) << std::endl;
    std::cout << "CharClass Size : " << sizeof(CharClass) << std::endl;
    std::cout << "IntClass Size : " << sizeof(IntClass) << std::endl;
    std::cout << "FloatClass Size : " << sizeof(FloatClass) << std::endl;
    std::cout << "DoubleClass Size : " << sizeof(DoubleClass) << std::endl;
    std::cout << "StringClass Size : " << sizeof(StringClass) << std::endl;
    std::cout << "MemoryAlignmentClass Size : " << sizeof(MemoryAlignmentClass) << std::endl;
    std::cout << "DataClass Size : " << sizeof(DataClass) << std::endl;
    std::cout << "FuncClass Size : " << sizeof(FuncClass) << std::endl;
    std::cout << "FuncInlineClass Size : " << sizeof(FuncInlineClass) << std::endl;
    std::cout << "VirtualBassClass Size : " << sizeof(VirtualBassClass) << std::endl;
    std::cout << "VirtualClassA Size : " << sizeof(VirtualClassA) << std::endl;
    std::cout << "VirtualClassB Size : " << sizeof(VirtualClassB) << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
