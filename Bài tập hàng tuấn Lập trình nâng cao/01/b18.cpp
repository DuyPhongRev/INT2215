#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, x2, y2;
    cin >> x >> y >> x2 >> y2;
    cout << sqrt((x-x2)*(x-x2) + (y-y2)*(y-y2));
    return 0;
}

