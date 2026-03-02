#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {20, 36, 12};
    cout << "Size of vector is = " << v.size() << endl; // it return size of vector
    v.push_back(45);                                    // add value at the end
    v.pop_back();                                       // it remove the last element
    v.front();                                          // return first element
    cout << "First element return: " << v.front() << endl;
    v.back(); // return last element
    cout << "Last element return: " << v.back() << endl;
    v.at(2); // to access index value
    cout << "Index value: " << v.at(2) << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
}