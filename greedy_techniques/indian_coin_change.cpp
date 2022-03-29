#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,5,10,20,50,100,200,500,1000,2000};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k;cin >> k;

    int i = n - 1;
    int count = 0;
    while (i >= 0)
    {
        if (arr[i] <= k)
        {
            count++;
            k -= arr[i];
            cout << arr[i] << " ";

            if (k == 0)
                break;

            continue;
        }

        i--;
    }

    cout << '\n' << count << '\n';
}