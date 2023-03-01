#include <iostream>
#include <algorithm>

using namespace std;

int x(char[][]);

int main()
{
    int n;
    cin >> n;
    int boy[n], girl[n];
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        cin >> boy[i] >> girl[i];
        if (boy[i] < girl[i]) check = false;
    }
    if (check) cout << "yes";
    else
    {
        check = true;
        sort(boy, boy + n);
        sort(girl, girl + n);
        for (int i = 0; i < n; i++)
        {
            if (boy[i] < girl[i])
            {
                cout << "no";
                check = false;
                break;
            }
        }
        if (check) cout << "yes";
    }
    return 0;
}

