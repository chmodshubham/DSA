#include <iostream>
using namespace std;

int main()
{
		int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	int m=n;
	int a=0,b=a+1;
	while(m!=1)
	{
		if(arr[a]>arr[a+1])
	    {
		   int x=arr[a+1];
		   arr[a+1]=arr[a];
		   arr[a]=x;
	    }
	    a++;
	    if(a>=m-1)
	    {
	    	a=0;
	    	m--;
		}
	}

	
	int s;
	cout << "Sum = ";
	cin >> s;
	
	int i=0,j=n-1;
	int sum;
	while(i!=j)
	{
		sum=arr[i]+arr[j];
		if(sum < s)
		{
			i++;
		}
		else if(sum == s)
		{
			cout << arr[i] << " " << arr[j] ;
			return 0;
		}
		else
		{
			j--;
		}
	}
	return 0;
}
