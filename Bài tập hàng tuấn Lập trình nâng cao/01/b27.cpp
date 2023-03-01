#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int a;
        cin >> a;
        if (a % 5 == 0) cout << a << endl;
        else cout << -1 << endl;
        if (a == -1) break;
    }
    return 0;
}
