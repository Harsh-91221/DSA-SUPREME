#include <iostream>
using namespace std;
int getsum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = getsum(a, b);
    cout << sum << endl;
}