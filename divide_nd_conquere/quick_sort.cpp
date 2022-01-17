#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int st, int end)
{
    //  pivot = arr[end];
    int i = st - 1;
    for (int j = st; j <= (end - 1); j++)
    {
        if (arr[j] < arr[end])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return (i + 1);
}

void quickSort(int arr[], int st, int end)
{
    if (st < end)
    {
        int pi = partition(arr, st, end);

        quickSort(arr, st, pi - 1);
        quickSort(arr, pi + 1, end);
    }
    return;
}

int main()
{
    int arr[] = {6, 3, 9, 5, 2, 8, 7};
    quickSort(arr, 0, 6); // array act as a pointer due to which we dont need to send the address of the array to change its original value
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// time complexity

// for best case, when pivot is the middle element
//  recurrence:                multiply to remove the terms t()
//  t(n)=2t(n/2)+n             *1
//  t(n/2)=2t(n/4)+n/2         *2
//  t(n/4)=2t(n/8)+n/4         *4
//  .                          *8
//  .
//  .
//  t(1)=1                     *2^(logn)=n

// on adding
// t(n)=n+n+n+....log n terms
//     =(n logn)

// levels:
// n,n/2,n/4,.....,1
// n/2^k = 1
// n=2^k=logn

// for worst case , when pivot is the end element of the string
// t(n)=t(n-1)+n
// t(n-1)=t(n-2)+(n-1)
// .
// .
// .
// t(1)=1

// t(n)=O(n^2)          n(n+1)/2 ; n is very large no. therfore we can neglect n+1 as n