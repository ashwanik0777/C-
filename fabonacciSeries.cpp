#include <iostream>
using namespace std;
int fabonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fabonacci(n - 1) + fabonacci(n - 2);
    }
}
    void fabonacciSeries(int n)
    {
        int count=0;
        for (int i = 0; i <= n; i++)
        {
            cout << fabonacci(i) << " ";
        }
        cout << endl;
    }

int main()
{
    int n;
    cout << "Enter the Positive number to Fabonacci Series:";
    cin >> n;
    fabonacciSeries(n);
    return 0;
}