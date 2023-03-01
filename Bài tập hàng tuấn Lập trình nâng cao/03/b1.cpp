#include <iostream>

using namespace std;

bool checkExistNum(bool arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (arr[tmp - 1]) return true;
        else arr[tmp -1] = true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    bool arr[n];
    if (checkExistNum(arr, n)) cout << "Yes";
    else cout << "No";
    return 0;
}
