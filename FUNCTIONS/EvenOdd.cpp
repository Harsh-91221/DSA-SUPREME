#include <iostream>
using namespace std;
void get(int n)
{
    if (n % 2 == 0)
    {
        cout << "EVEN NUMBER" << endl;
    }
    else
    {
        cout << "ODD NUMBER" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    get(n);
}