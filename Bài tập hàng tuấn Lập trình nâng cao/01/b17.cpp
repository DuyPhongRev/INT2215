#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    if (y % 400 == 0) cout << "yes";
    else if (y % 4 == 0)
    {
        if (y % 100 == 0) cout << "no";
        else cout << "yes";
    } else cout << "no";
    return 0;
}

