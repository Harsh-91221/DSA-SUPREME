#include <iostream>
using namespace std;
void get(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "NOT PRIME" << endl;
        }
        else
        {
            cout << "PRIME" << endl;
        }
        break;
    }
}
int main()
{
    int n;
    cin >> n;
    get(n);
}