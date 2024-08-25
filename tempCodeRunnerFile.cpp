for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == s[i - 1])
                {
                    if (x == s[i])
                        cout << ++x;
                    else
                        cout << x;
                }
                cout << s[i];
            }
            cout << "\n";