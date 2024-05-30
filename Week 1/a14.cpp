#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "enter operator";
    cin >> op;
    cout << "enter two numbers";
    cin >> a >> b;
    switch (op) {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;
    default:
        cout << " operator is not correct";
        break;
    }
    return 0;
}

