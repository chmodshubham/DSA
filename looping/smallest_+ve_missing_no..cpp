#include <iostream>
#include <climits>
using namespace std;

int main ()
{
    int n;
	cin >> n;
	signed int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];              // 0 as one of the input must be contained (condition)
	}
	
	int maximum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		maximum=max(maximum,arr[i]);
	}
	
	int x=1;
	int y=0;
	while(x<=maximum)
	{
		for(int i=1;i<n;i++)
		{
			if(x==arr[i])
			{
				x++;
				y=1;
				break;
			}
			else
			{
				y=2;
			}
		}
		if(y==2 )
		{
			cout << x;
			break;
		}
	}
	if(y==1)
	{
		cout << -1;	
	}
	
	return 0;
}
