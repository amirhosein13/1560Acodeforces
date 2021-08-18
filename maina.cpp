#include <iostream>

using namespace std;

int main()
{
    int b[18];
    int cnt = 0;
    for (int i = 1; i < 30; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            b[cnt] = i;
            cnt++;
        }
    }

    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int c;
        cin >> c;
        long long result = 0;
        if (c <= 18)
        {
            cout << b[c - 1] << endl;
        }
        else
        {
            result += (c / 18) * 30;
            if (c % 18 != 0)
            {
                result += b[c % 18 - 1];
            }
            else
            {
                result--;
            }
            

            cout << result << endl;
        }
    }
}