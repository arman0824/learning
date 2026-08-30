#include <iostream>

int main(){

    int input;
    float number1;
    float number2;

    std::cout << "Choose one of the following operation" << std::endl;
    std::cout << "Input choice number" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Division" << std::endl;
    std::cout << "4. Multiplication" << std::endl;
    
    std::cin >> input;
    std::cout << "Enter two numbers seperated by spaces" << std::endl;
    std::cin >> number1 >> number2;

    if (input == 1)
    {
        std::cout << "Result" << float(number1 + number2) << std::endl;
    }
    if (input == 2)
    {
        std::cout << "Result" << float(number1 - number2) << std::endl;
    }
    if (input == 3)
    {
        std::cout << "Result" << float(number1 / number2) << std::endl;
    }
    if (input == 4)
    {
        std::cout << "Result" << float(number1 * number2) << std::endl;
    }

}