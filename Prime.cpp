#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter you n value : ";
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "It is a prime : " << n;
            break;
        }
    }
}
