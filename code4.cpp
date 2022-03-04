#include <iostream>
using namespace std;
int main(void)
{
    int a = 1, b = 2, c, n;
    cout << "enter the size of the series" << endl;
    cin >> n;
    cout << a << b;
    for (int i = 0; i < n; i++)
    {
        c = a * b;
        cout << c;
        a = b;
        b = c;
    }

    return 0;
}