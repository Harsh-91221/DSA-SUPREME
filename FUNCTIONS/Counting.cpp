#include <iostream>
using namespace std;
void getcount(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    getcount(n);
}