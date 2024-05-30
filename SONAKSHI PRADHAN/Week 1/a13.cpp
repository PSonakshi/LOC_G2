#include <iostream>
using namespace std;

int main() {
    int a, b = 0;
    cout << "enter a number";
    cin >> a;
    
    do {
        b += a % 10;
        a /= 10;
    } while (a > 0);
    
    cout << "sum is " << b;
    return 0;
}