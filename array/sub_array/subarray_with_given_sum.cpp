#include <iostream>
using namespace std;

int main ()
{
		int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	int sum;
	cout << "SUM=";
	cin >> sum;
	
	int s;
	int x=0,y=0;
	for(int i=0;i<n;i++)
	{
		s=0;
		int j=i;
		while(j<n)
		{
			s+=arr[j];
			if(s==sum)
			{
				cout << i+1 << " " << j+1;
				x=1;        //used to use the if statement to end the for loop
			    y=2;   //use to check whether if statement executes or not
				break;
				
			}
			j++;
		}
	 
		if (x==1)
		{
			break;
		}
	}
	if(y==0)
	{
		cout << "no subarray found whose sum gets matched.";
	}
	
	return 0;
}
