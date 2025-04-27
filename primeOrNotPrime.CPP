#include <iostream>
using namespace std;
int main()
{
    int a, flag = 0;
    cout << "enter a number " << endl;
    cin >> a;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag++;
            break;
        }
    }
    if (flag)
    {
        cout << "given number is not prime" << endl;
    }
    else
    {
        cout << "given number is prime";
    }
}