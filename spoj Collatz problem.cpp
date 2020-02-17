//SPOJ submission 23671733 (CPP14)plaintext list.Status: AC, problem PTCLTZ, contest SPOJPL.By ravruc(ravruc), 2019 - 04 - 22 23 : 14 : 10.
#include <iostream>
#include <vector>

using namespace std;

int reku(int aa, int cc)
{


    if (aa % 2 != 0) aa = 3 * aa + 1;
    else aa = aa / 2;
    cc++;
    if (aa != 1) reku(aa, cc);
    else return cc;
}

int main()
{
    int a, b, c = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b == 1) { cout << 0 << endl; }
        else cout << reku(b, c) << endl;
        c = 0;

    }


    return 0;
}
