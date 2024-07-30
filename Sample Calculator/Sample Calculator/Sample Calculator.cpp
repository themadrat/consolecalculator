// Sample Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int Firstnumber;
int Secondnumber;
int operand;
int result;
std::string theNumber;

static void FirstNumber();
static void SecondNumber(int Firstnumber);
static void DoMath(int Firstnumber, int Secondnumber);

int main()
{
    std::cout << "Welcome to the console based calculator\n" << std::endl;
    FirstNumber();
}

static void FirstNumber()
{
    std::cout << "Please input the first number: " << std::endl;
    std::cin >> Firstnumber;
    std::cout << "You entered the number " + Firstnumber << std::endl;
    SecondNumber(Firstnumber);
}


static void SecondNumber(int Firstnumber)
{
    std::cout << "Please input the second number: " << std::endl;
    std::cin >> Secondnumber;
    std::cout << "You entered the number " + Secondnumber << std::endl;
    DoMath(Firstnumber, Secondnumber);
}


static void DoMath(int Firstnumber, int Secondnumber)
{
    std::cout << "select a mathematic operation" << std::endl;
    std::cin >> operand;
    switch (operand)
    {
    case(1):
        result = Firstnumber + Secondnumber;
        break;
    case(2):
        result = Firstnumber - Secondnumber;
        break;
    case(3):
        result = Firstnumber * Secondnumber;
        break;
    case(4):
        result = Firstnumber / Secondnumber;
        break;
    default:
        std::cout << "You have entered an incorrect selection" << std::endl;
        DoMath(Firstnumber, Secondnumber);
    }
    theNumber = std::to_string(result);
    std::cout << "the answer is " + theNumber << std::endl;
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
