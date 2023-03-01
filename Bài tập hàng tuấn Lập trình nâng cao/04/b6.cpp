#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    bool check = false;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == -arr[i])
            {
                cout << "yes";
                check = true;
                break;
            }
        }
    }
    if (!check) cout << "no";
    return 0;
}
