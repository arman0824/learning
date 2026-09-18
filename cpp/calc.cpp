#include <iostream>

int main(){

    int input;
    float number1, number2;

    using namespace std;

    cout << "Choose one of the following operation" << endl;
    cout << "Input choice number" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplication" << endl;
    
    while (true)
    {
        cout << "Enter choice: ";
        cin >> input;
        if (input < 1 || input > 4){
            cout << "Invalid input ";
        }
        else{
            break;
        }
    }
    cout << "Enter two numbers seperated by spaces:";
    cin >> number1 >> number2;

    if (input == 1)
    {
        cout << "Result: " << float(number1 + number2) << endl;
    }
    if (input == 2)
    {
        cout << "Result: " << float(number1 - number2) << endl;
    }
    if (input == 3)
    {
        cout << "Result: " << float(number1 / number2) << endl;
    }
    if (input == 4)
    {
        cout << "Result: " << float(number1 * number2) << endl;
    }
    
}