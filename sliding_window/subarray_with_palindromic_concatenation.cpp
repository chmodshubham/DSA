#include <bits/stdc++.h>
using namespace std;

bool is_palindromic(int num)
{
    int temp = num;
    int reverse = 0;

    while (temp != 0)
    {
        reverse = reverse * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (reverse == num)
        return true;

    return false;
}

int find_palindromic_subarray(vector<int> arr, int k)
{
    int num = 0;
    for (int i = 0; i < k; i++)
    {
        num = num * 10 + arr[i];
    }

    if (is_palindromic(num))
    {
        return 0;
    }

    for (int i = k; i < arr.size(); i++)
    {
        num = (num % (int)pow(10, k - 1)) * 10 + arr[i]; // basically remove the first digit of the no. and add next array element to the last position

        if (is_palindromic(num))
        {
            return i - (k - 1);
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 5, 1, 1, 5};
    int k = 4;
    int ans = find_palindromic_subarray(arr, k);

    if (ans == -1)
        cout << "Palindromic subarray doesn't exist\n";

    else
    {
        for (int i = ans; i < ans + k; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
// time complexity = O(n^2)