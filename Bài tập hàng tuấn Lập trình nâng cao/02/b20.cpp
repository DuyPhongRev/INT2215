#include <iostream>
#include <vector>

using namespace std;

class Worker
{
public:
    void calculateWage(int time)
    {
        if (time == 100) wage.push_back(100 * 12000);
        else if (time <= 150) wage.push_back(100 * 12000 + (time - 100) * 16000);
        else if (time <= 200) wage.push_back(100 * 12000 + 50 * 16000 + (time - 150) * 20000);
        else wage.push_back(100 * 12000 + 50 * 16000 + 50 * 20000 + (time - 200) * 25000);
    }
    void printWageAndLoan(int month)
    {
        cout << "Luong thang nay: " << wage[month-1] - tax[month-1] << " So tien con no: " << loan << endl;

    }
    void calculateTax(int month)
    {
        if (wage[month - 1]*0.91 < 1000000) tax.push_back(0 + wage[month - 1]*0.09);
        else if (wage[month - 1]*0.91 <= 1500000) tax.push_back((wage[month - 1]*0.91-1000000)* 0.1 + wage[month - 1]*0.09);
        else if (wage[month - 1]*0.91 <= 2000000) tax.push_back(50000 + (wage[month - 1]*0.91-1500000)* 0.15 + wage[month - 1]*0.09);
        else tax.push_back(125000 + (wage[month - 1]*0.91-2000000)* 0.2 + wage[month - 1]*0.09);
    }
    void calculateLoan(int month)
    {
        if (loan*1.02 - wage[month-1] + tax[month-1] > 0) loan += loan*0.02 - wage[month-1] + tax[month-1];
        else loan = 0;
    }
    void countMonth()
    {

    }
private:
    vector<int> wage;
    vector<int> tax;
    int loan = 10000000;
};

int main()
{
    Worker *student = new Worker;
    vector<int> time;
    for (int i = 0; i < 12; i++)
    {
        int k;
        cin >> k;
        time.push_back(k);
    }

    for (int i = 1; i <= 12; i++)
    {
        student->calculateWage(time[i-1]);
        student->calculateTax(i);
        student->calculateLoan(i);
        student->printWageAndLoan(i);
    }
    return 0;
}
