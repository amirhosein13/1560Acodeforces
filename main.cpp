#include <iostream>

using namespace std;

int main()
{
    int b[1000 + 5];
    long long c = 1;
    for (int i = 0; i < 1005; i++)
    {
        if (c % 10 != 3 && c % 3 != 0)
        {
            b[i] = c;
        }
        else
        {
            i--;
        }
        c++;
    }
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int e;
        cin >> e;
        cout << b[e - 1] << endl;
    }
}