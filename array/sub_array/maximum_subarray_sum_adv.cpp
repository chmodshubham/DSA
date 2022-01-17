#include <iostream>
#include <climits>
using namespace std;

//kadane method

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
    int currentsum=0;
    int maxi=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
    	currentsum+=a[i];
    	if(currentsum<0)
    	{
    		currentsum=0;
		}
		maxi=max(maxi,currentsum);
	}
	cout << maxi << endl;
	
	return 0;
}
