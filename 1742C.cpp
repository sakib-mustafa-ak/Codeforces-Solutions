#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        int r = 0, b = 0, count = 0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == 'R')
                {
                    r++;
                }
                else if (a[i][j] == 'B')
                {
                    b++;
                }
            }
            if (r == 8)
            {
                cout << "R" << endl;
                break;
            }
            else if (b == 8)
            {
                cout << "B" << endl;
                break;
            }
            else
            {
                if (r < b)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        if (a[i][j] == 'R')
                        {
                            for (int i = 0; i < 8; i++)
                            {
                                if (a[i][j] == 'R')
                                {
                                    count++;
                                }
                            }
                            if (count == 8)
                            {
                                break;
                            }
                            else
                            {
                                count = 0;
                            }
                        }
                    }
                    if (count == 8)
                    {
                        cout << "R" << endl;
                        break;
                    }
                }
                else if (b < r)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        if (a[i][j] == 'B')
                        {
                            for (int i = 0; i < 8; i++)
                            {
                                if (a[i][j] == 'B')
                                {
                                    count++;
                                }
                            }
                            if (count == 8)
                            {
                                break;
                            }
                            else
                            {
                                count = 0;
                            }
                        }
                    }
                    if (count == 8)
                    {
                        cout << "R" << endl;
                        break;
                    }
                }
            }
        }
    }
}