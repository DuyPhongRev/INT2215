#include <iostream>

using namespace std;

int main()
{
    int tmp;
    do
    {
        int a;
        cin >> a;
        if (a != tmp )
        {
            tmp = a;
            cout << a << ' ';
        }
    }while (tmp != -1);
    return 0;
}

