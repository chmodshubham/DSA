#include <bits/stdc++.h>
using namespace std;

bool is_perfect(int num)
{
    int sum = 0;
    for (int i = num - 1; i >= 1; i--)
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        return true;

    return false;
}

int find_maximum_perfect_no(vector<int> arr, int k)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (is_perfect(arr[i]))
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += arr[i];

    int temp = INT_MIN;
    for (int i = k; i < arr.size(); i++)
    {
        temp = sum - arr[i - (k - 1)] + arr[i];
        sum = max(sum, temp);
    }

    return sum;
}

int main()
{
    vector<int> arr = {28, 2, 3, 6, 496, 99, 8128, 24};
    int k = 4;
    cout << find_maximum_perfect_no(arr, k);
    return 0;
}
// time complexity = O(n*sqrt(n))