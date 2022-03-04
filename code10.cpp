#include <iostream>
using namespace std;
int main(void)
{
    int a = 21, b = 9, n;
    cout << "enter the value of n" << endl;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cout << a << ",";
        cout << b << ",";
        b = b + 2;
    }

    return 0;
}