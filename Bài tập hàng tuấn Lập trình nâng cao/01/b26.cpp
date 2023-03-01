#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    double aver = 0;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        aver += k;
        if (k > maxNum) maxNum = k;
        if (k < minNum) minNum = k;
    }
    aver /= n;
    cout << "Mean: " << aver << endl << "Max: " << maxNum << endl << "Min: " << minNum;
}
