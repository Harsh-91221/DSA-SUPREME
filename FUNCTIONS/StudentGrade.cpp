#include <iostream>
using namespace std;
void getmarks(int n)
{
    if (n >= 90)
    {
        cout << "BACHA HOSHYAR HA AAPKA" << endl;
    }
    else if (n >= 70 && n < 90)
    {
        cout << "MEDIOCRE BACHA HA AAPKA" << endl;
    }
    else if (n >= 40 && n < 70)
    {
        cout << "BETA PADHAI LIKHAI MA DHYAN LAGAO IAS VIAS BANO AUR DESH KO SAMBHALO" << endl;
    }
    else
    {
        cout << "BETA TUMSE NA HO PAAYEGA" << endl;
    }
}
int main()
{
    int n;
    cout << "MARKS DAALO BACHE KE" << endl;
    cin >> n;
    getmarks(n);
}