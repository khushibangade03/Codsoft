#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char op;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    cout << "Enter the operation which you want to perform on given numbers ( / , * , + , -)" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "addition of numbers is " << num1 + num2 << endl;
        break;
    case '-':
        cout << "substraction of numbers is " << num1 - num2 << endl;
        break;
    case '*':
        cout << "multiplication  of numbers is " << num1 * num2 << endl;
        break;
    case '/':
        cout << "division  of numbers is " << num1 / num2 << endl;
        break;
    default:
        cout << "incorrect opeartor" << endl;
        break;
    }
    return 0;
}
