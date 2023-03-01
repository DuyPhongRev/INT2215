#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            {
                cout << s[i] << s[j] << endl;
                for (int k = 0; k < n; k++)
                    cout << s[i] << s[j] << s[k] << endl;
            }
    return 0;
}
