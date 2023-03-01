#include <iostream>

using namespace std;

int** initGame(int& row, int& col)
{
    cin >> row >> col;
    int** boom = new int*[row];
    for (int i = 0; i < row; i++)
        boom[i] = new int[col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            char tmp;
            cin >> tmp;
            if (tmp == '*') boom[i][j] = -10;
            else boom[i][j] = 0;
        }
    }
    return boom;
}

void countBoomLocation(const int& row, const int& col,int **boom)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (boom[i][j] < 0)
            {
                if (i + 1 < row) boom[i+1][j]++;
                if (i - 1 >= 0) boom[i-1][j]++;
                if (j - 1 >= 0) boom[i][j-1]++;
                if (j + 1 < col) boom[i][j+1]++;
                if (j + 1 < col && i + 1 < row) boom[i+1][j+1]++;
                if (j + 1 < col && i - 1 >= 0) boom[i-1][j+1]++;
                if (j - 1 >= 0 && i + 1 < row) boom[i+1][j-1]++;
                if (j - 1 >= 0 && i - 1 >= 0) boom[i-1][j-1]++;
            }
        }
    }
}

void printTable(const int& row, const int& col,int** boom)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (boom[i][j] >= 0) cout << boom[i][j] << ' ';
            else cout << '*' << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    int **boom = initGame(row, col);
    countBoomLocation(row, col, boom);
    printTable(row, col, boom);
    delete[] boom;
    return 0;
}

