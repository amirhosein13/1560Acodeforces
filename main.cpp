#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        int c[b][2];
        for (int j = 0; j < b; j++)
        {
            cin >> c[j][0];
            c[j][1] = 0;
        }
        for (int j = 1; j < b; j++)
        {
            for (int h = b; h >= j; h--)
            {
                if (c[h][0] < c[h - 1][0])
                {
                    if (c[h][1] == 1)
                    {
                        c[h][1] = 0;
                    }
                    else
                    {
                        c[h][1] = 1;
                    }
                    if (c[h - 1][1] == 1)
                    {
                        c[h - 1][1] = 0;
                    }
                    else
                    {
                        c[h - 1][1] = 1;
                    }
                    int fake[1][2];
                    fake[0][1] = c[h][1];
                    fake[0][0] = c[h][0];
                    c[h][0] = c[h - 1][0];
                    c[h][1] = c[h - 1][1];
                    c[h - 1][0] = fake[0][0];
                    c[h - 1][1] = fake[0][1];
                }
            }
        }
        bool can = true;
        for (int j = 0; j < b; j++)
        {
            if (c[j][1] == 1 && j != b - 1)
            {
                if (c[j][0] == c[j + 1][0] && c[j][1] == c[j][1] && c[j][1] == 1)
                {
                    c[j][1] = 0;
                    c[j + 1][1] = 0;
                }
                else
                {
                    can = false;
                    break;
                }
            }
            else if(c[j][1] == 1)
            {
                can = false;
                break;
            }
        }
        if (can)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}