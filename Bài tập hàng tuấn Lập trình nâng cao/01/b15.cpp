#include <iostream>

using namespace std;

int main()
{
    string s1 = "a", s2 = "b";
    for (int i = 0; i < 10; i++)
    {
        if (i > 1)
        {
            string tmp = s1;
            s1 = s2;
            s2 += tmp;
            cout << s2 << endl;
        }
        else if (i == 1) cout << s2 << endl;
        else cout << s1 << endl;
    }
    return 0;
}
