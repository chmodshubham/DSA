#include <iostream>
using namespace std;

void merge(int arr[], int st, int mid, int end)
{
    int n1 = mid - (st - 1);
    int n2 = end - mid;

    int a[n1]; // temperary arrays
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[st + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;  // traverse in a[]
    int j = 0;  // traverse in b[]
    int k = st; // traverse in arr[]
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i]; // changing in the value of the 'arr' doesnt cause any prblm on further calculation becaz its original value is stored in the temporary arrays
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1) // it's actually checking whether i comes out from the previous loop without completing the arrangement of elements in arr[]
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2) // it's actually checking whether j comes out from the previous loop without completing the arrangement of elements in arr[]
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return;
}

void mergeSort(int arr[], int st, int end)
{

    if (st < end)
    {
        int mid = (st + end) / 2;
        mergeSort(arr, st, mid); // it's actually works as binary search
        mergeSort(arr, mid + 1, end);

        merge(arr, st, mid, end); // it is arranging and merging each of the 2 parts formed in mergeSort function
    }
    return;
}

int main()
{
    int arr[] = {5, 2, 3, 4, 1};
    mergeSort(arr, 0, 4); // we are not putting the 'end' as 5 becaz in mergeSort function we are checking for st<end that means when st becomes 4 it run the function which technically not possible.
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// time complexity

// recurrence:                multiply to remove the terms t()
// t(n)=2t(n/2)+n             *1
// t(n/2)=2t(n/4)+n/2         *2
// t(n/4)=2t(n/8)+n/4         *4
// .                          *8
// .
// .
// t(1)=1                     *2^(logn)=n

// on adding
// t(n)=n+n+n+....log n terms
//     =n logn

// levels:
// n,n/2,n/4,.....,1
// n/2^k = 1
// n=2^k=logn
