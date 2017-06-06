#include <iostream>
using namespace std;

int main() {
    std::cout << "A Simple Calculator" << std::endl;

    std::cout << "Enter first number: " << std::endl;
    int x;
    std::cin >> x;

    std::cout << "Enter second number: " << std::endl;
    int y;
    std::cin >> y;

    std::cout << "Enter operator: " << std::endl;
    char c;
    std::cin >> c;

while (c != "end")
    switch(c) {

        case '+':
            cout << x << " + " << y << " = " << x+y;
            break;
        case '-':
            cout << x << " - " << y << " = " << x-y;
            break;
        case '*':
            cout << x << " * " << y << " = " << x*y;
            break;
        case '/':
            if (y == 0) {
                cout << "Error! Cannot divide by 0";
                break;
            } else {
                cout << x << " / " << y << " = " << x/y;
                break;
            }
        default:
            cout << "Error! Operator is not +, -, *, or /";
    }
    return 0;
}
