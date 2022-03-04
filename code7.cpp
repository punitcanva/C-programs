#include <iostream>
using namespace std;
int main(void)
{
    int n, value1 = 7, value2 = 10;
    cout << "enter the value of n" << endl;
    cin >> n;
    for (int i = 0; i < n / 2; i++)
    {
        cout << value1 << ",";
        value1++;
        cout << value2 << ",";
        value2++;
    }
    return 0;
}