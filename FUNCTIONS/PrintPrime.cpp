#include <iostream>
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool check = isprime(i);
        if (check)
        {
            cout << i << " ";
        }
    }
}