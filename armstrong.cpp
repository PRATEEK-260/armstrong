#include <iostream>
using namespace std;

int pow(int x, int y)
{
    int z = 1;
    for (int i = 1; i <= y; i++)
    {
        z = x * z;
    }
    return z;
}
int isarmstrong(int num)
{
    int onum, d = 0, remainder, result = 0;
    onum = num;
    // counting the digits in num
    while (onum != 0)
    {
        d = d + 1;
        onum /= 10;
    }
    // checking is the number is armstrong
    onum = num;
    while (onum != 0)
    {
        remainder = onum % 10;
        result += pow(remainder, d);
        onum /= 10;
    }
    if (result == num)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout << "enter the range" << endl;
    cin >> n;
    cout << "here are all armstrong numbers upto n" << endl;
    for (int i = 0; i < n + 1; i++)
    {
        if (isarmstrong(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}