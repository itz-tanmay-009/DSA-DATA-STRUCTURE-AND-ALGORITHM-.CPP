#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int num, i;

    cout << "Enter number to find: ";
    cin >> num;

    for(i = 0; i < 5; i++) {
        if(arr[i] == num) {
            cout << "Number found at index: " << i;
            break;
        }
    }

    if(i == 5) {
        cout << "Number not found";
    }

    return 0;
}
