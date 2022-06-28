#include <bits/stdc++.h>
using namespace std;
void insertionsort(int a[], int n)
{
    int key, temp;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
void solve()
{
    int n;
    cout << "Enter the total no. of telephone numbers in the list:";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insertionsort(a, n);
    cout << "In ascending order:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "In descending order:" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    solve();

    return 0;
}