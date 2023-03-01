#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = i; cnt < n; j++)
        {
            cout << j << " ";
            if (j == n) j = 0;
            cnt++;
        }
        cout << endl;
    }
    return 0;
}

