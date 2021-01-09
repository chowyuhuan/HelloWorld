// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "sizeofclass.h"
#include "linkedlist.h"

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
    std::cout << "TwoIntClass Size : " << sizeof(TwoIntClass) << std::endl;
    std::cout << "MemoryAlignmentClass Size : " << sizeof(MemoryAlignmentClass) << std::endl;
    std::cout << "DataClass Size : " << sizeof(DataClass) << std::endl;
    std::cout << "FuncClass Size : " << sizeof(FuncClass) << std::endl;
    std::cout << "FuncInlineClass Size : " << sizeof(FuncInlineClass) << std::endl;
    std::cout << "VirtualBassClass Size : " << sizeof(VirtualBassClass) << std::endl;
    std::cout << "VirtualClassA Size : " << sizeof(VirtualClassA) << std::endl;
    std::cout << "VirtualClassB Size : " << sizeof(VirtualClassB) << std::endl;

    DataClass dClass;
    std::cout << &dClass << std::endl;
    std::cout << "s "<< &dClass.sClass << std::endl;
    std::cout << "i "<< &dClass.iClass << std::endl;
    std::cout << "f "<< &dClass.fClass << std::endl;
    std::cout << "d "<< &dClass.dClass << std::endl;
    std::cout << "p "<< &dClass.pClass << std::endl;
    std::cout << "ii "<< &dClass.iiClass << std::endl;

    std::cout << "VirtualBassClass foo " << pointer_cast<void*>(&VirtualBassClass::Foo) << std::endl;
    std::cout << "VirtualClassA foo " << pointer_cast<void*>(&VirtualClassA::Foo) << std::endl;
    std::cout << "VirtualClassB foo " << pointer_cast<void*>(&VirtualClassB::Foo) << std::endl;
    std::cout << "VirtualClassC foo " << pointer_cast<void*>(&VirtualClassC::Foo) << std::endl;
    std::cout << "VirtualBassClass foo1 " << pointer_cast<void*>(&VirtualBassClass::Foo1) << std::endl;
    std::cout << "VirtualClassA foo1 " << pointer_cast<void*>(&VirtualClassA::Foo1) << std::endl;
    std::cout << "VirtualClassB foo1 " << pointer_cast<void*>(&VirtualClassB::Foo1) << std::endl;
    std::cout << "VirtualClassC foo1 " << pointer_cast<void*>(&VirtualClassC::Foo1) << std::endl;

    LinkedList<int> intlist;
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
