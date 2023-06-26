/*
    1. No of jobs transfer between one part to another parts
    2. Running Differences make

    Make the balances arrays if we can transfer the jobs to neigbour processors

*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[100];
    int i;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % n != 0)
    {
        // can't make the balances arrays
        cout << "-1";
    }
    else
    {

        int count = 0;

        int average = sum / n;

        for (i = 0; i < n - 1; i++)

        {

            int diff = a[i] - average;

            a[i + 1] += diff;

            count = max(count, abs(a[i] - average));
        }

        count = max(count, abs(a[i] - average));

        cout << count << endl;
    }

    return 0;
}
