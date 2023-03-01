#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a % 7 == 0 && b % 7 == 0) cout << "yes";
    else cout << "no";
    return 0;
}

