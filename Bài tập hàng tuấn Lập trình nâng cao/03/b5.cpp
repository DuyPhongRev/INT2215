#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int cnt = 1;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = 0;
        }
    }

    int i = 0, j = 0;
    while(cnt <= row*col)
    {
        cout << cnt << endl;
        if ( j + 1 < col)
        {
            arr[i][j] = cnt;
            cnt++;
            j++;
        } else if ( i + 1 < col)
        {
            arr[i][j] = cnt;
            cnt++;
            i++;
        }else if ( j - 1 >= 0)
        {
            arr[i][j] = cnt;
            cnt++;
            j--;
        }else if ( i - 1 >= 0)
        {
            arr[i][j] = cnt;
            cnt++;
            i--;
        }
        for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    }
}
