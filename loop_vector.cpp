#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vector(5, 6);
    // for (int i : vector)
    // {
    //     cout << i << endl;
    // }
    vector<char> vec = {'a', 'b', 'c'};
    for (char value : vec)
    {
        cout << value << endl;
    }
}
