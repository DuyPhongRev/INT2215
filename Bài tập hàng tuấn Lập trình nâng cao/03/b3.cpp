#include <iostream>

using namespace std;

bool doixung(string s)
{
    for (int i = 0; i < s.size(); i++)
        if (s[i] != s[s.size() - i - 1]) return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (doixung(s)) cout << "Yes";
    else cout << "No";
}
