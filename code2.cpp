#include <iostream>
using namespace std;
double pow(double num, int pow)
{
    double sum = 1;
    if (pow < 0)
    {
        while (pow < 0)
        {
            sum = (1 / num) * sum;
            pow++;
        }
        return sum;
    }
    else
    {
        while (pow > 0)
        {
            sum = sum * num;
            pow--;
        }
        return sum;
    }
}
int main()
{
    int n, p;
    cout << "enter a number" << endl;
    cin >> n;
    cout << "enter the power" << endl;
    cin >> p;
    cout << pow(n, p);

    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 1, b = 1, n;
//     cout << "enter a number" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << " ";
//         a = a * 2;
//         cout << b << " ";
//         b = b * 3;
//     }

//     return 0;
// }
