#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, next;

    cout << "Fibonacci series between 0 and 100:" << endl;
    cout << a << " " << b << " ";

    next = a + b;

    while (next <= 100) {
        cout << next << " ";
        a = b;
        b = next;
        next = a + b;
    }

    return 0;
}
