#include <iostream>
using namespace std;
int getarea(int r)
{
    int area = 0;
    area = 3.14 * r * r;
    return area;
}
int main()
{
    int r;
    cin >> r;
    int area = getarea(r);
    cout << area << endl;
}