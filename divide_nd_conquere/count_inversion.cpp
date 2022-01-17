#include <iostream>
using namespace std;

long long /*long long int or we can simply use auto*/ merge(int arr[], int st, int mid, int end)
{
    long long inv = 0;
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
        if (a[i] <= b[j])
        {
            arr[k] = a[i]; // changing in the value of the 'arr' doesnt cause any prblm on further calculation becaz its original value is stored in the temporary arrays
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            // a[i]>b[j] and i<j
            // a[] array is sorted array that means each element is greater than b[j] for this condition
            // a[i], a[i+1], a[i+2].. > b[j]
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
    return inv;
}

long long mergeSort(int arr[], int st, int end)
{
    long long inv = 0;

    if (st < end)
    {

        int mid = (st + end) / 2;
        inv += mergeSort(arr, st, mid); // it's actually works as binary search
        inv += mergeSort(arr, mid + 1, end);

        inv += merge(arr, st, mid, end); // it is arranging and merging each of the 2 parts formed in mergeSort function
    }
    return inv;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << mergeSort(arr, 0, n - 1);

    return 0;
}
