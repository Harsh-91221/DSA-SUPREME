#include <iostream>
using namespace std;
int getmax(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int Max = getmax(a, b, c);
    cout << Max << endl;
}