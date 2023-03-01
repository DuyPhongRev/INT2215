#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    int min_x = INT_MAX, min_y = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        if (min_x > arr[i][0]) min_x = arr[i][0];
        if (min_y > arr[i][1]) min_y = arr[i][1];
    }
    cout << min_x * min_y;
    return 0;
}
