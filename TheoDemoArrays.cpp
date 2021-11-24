// TheoDemoArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void DoubleTheArrayValues(int* pInteger, int size);
void DoubleTheArrayValues(int* pInteger);
void ChangeVariable(int* integer);

int main()
{
    int number1{ 11 }, number2{ 5 }, number3{ 89 }, number4{ 40 }, number5{ 65 }, number6{ 84 };

    //You can get the size of arrays in the following ways
    const int size{ 6 };
    //sizeof(array)/sizeof(int)
    
    //int numbers[6];
    //int numbers[6]{ };
    int numbers[size]{ number1, number2, number3, number4, number5, number6 };
    //int numbers[]{ 1, 2, 3 };
    int value{ 99 };
    std::cout << size << "\n\n";
    for (int i{}; i < size; ++i) {
        std::cout << numbers[i] << "\n";
    }
    DoubleTheArrayValues(numbers);
    std::cout << numbers << "\n";

    //Pointers
    std::cout << number1 << " The address of number1 is " << &number1 << "\n";
    ChangeVariable(&number1);
    std::cout << number1 << " The address of number1 is " << &number1 << "\n\n";
    DoubleTheArrayValues(numbers, size);
}

void DoubleTheArrayValues(int* pInteger) {
    std::cout << pInteger << "\n";
}

void DoubleTheArrayValues(int* pInteger, int size) {
    for (int i{}; i < size; ++i) {
        std::cout << pInteger[i] << "\n";
    }

    std::cout << "\n" << *(pInteger + 0) << pInteger[0];
    std::cout << "\n" << *(pInteger + 1) << pInteger[1];
    std::cout << "\n" << *(pInteger + 2) << pInteger[2];
}

void ChangeVariable(int* pInteger) {
    *pInteger = (*pInteger) * 2;
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
