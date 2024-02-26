#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[201];
    gets(a);
    char main[201];
    int j = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            i += 2;
            if (j > 0 && main[j - 1] != ' ')
            {
                main[j++] = ' ';
            }
        }
        else
        {
            main[j++] = a[i];
        }
    }
    main[j] = '\0';
    cout << main << endl;
    return 0;
}