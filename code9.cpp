#include <iostream>
using namespace std;
int main(void)
{
    int a = 1, b, n;
    cout << "enter the value of n" << endl;
    cin >> n;
    cout << a << "," << a << ",";
    for (int i = 1; i <= (n / 2) - 1; i++)
    {
        b = a + 4;
        a = b;
        cout << b << "," << b << ", ";
    }

    return 0;
}