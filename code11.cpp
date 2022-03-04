// 14, 28, 20, 40, 32, 64,
#include <iostream>
using namespace std;
int main(void)
{
    int n, a = 14, b = 28, c;
    cout << "enter the value of n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a = a + 6 * i;
        cout << a << " ";
        b = b + 6 * 2 * i;

        cout << b << " ";
    }//still have doubt

    return 0;
}