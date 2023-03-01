#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int y = 0; y < n; y++)
    {
        for (int x = -n + 1; x < n; x++)
        {
            if (y + x <= n -1 && y - x <= n -1 ) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
