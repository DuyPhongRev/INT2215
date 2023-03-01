#include <iostream>

using namespace std;

int main()
{
    bool k = true;
    for (int i = 0; i < 12; i++)
    {
        if (k)
        {
            if(i == 0) cout << "12 midnight" << endl;
            else cout << i << "am" << endl;
        } else
        {
            if(i == 0) cout << "12 noon" << endl;
            else cout << i << "pm" << endl;
        }
        if (i == 11 && k)
        {
            i = -1;
            k = false;
        }
    }
    return 0;
}
