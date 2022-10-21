#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {

            for (int j = i + 1; j < n; j++)
            {
                k = max(a[i], a[j]);
            }
        }

        cout << k << endl;
    }
    return 0;
}
