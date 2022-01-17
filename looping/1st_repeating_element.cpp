#include <iostream>
#include <climits>
#include "bits/stdc++.h"
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
	
	int s=1;
	int ans;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
			    s++;	
			}
		}
		if( s>=2)
		{
			ans=i;
			break;
		}
	}
	cout << ans+1;

//    const int N=1e6+2;
//    int idx[N] ;
//    for(int i=0;i<N;i++)
//    {
//    	idx[i]=-1;
//    	
//	}
//	int mx=INT_MAX;
//	for(int i=0;i<n;i++)
//	{
//		if(idx[arr[i]]!= -1)
//		{
//		    mx=min(mx,idx[arr[i]]);	
//		}
//		else
//		{
//			idx[arr[i]]=i;
//		}
//	}
//	if(mx==INT_MAX)
//	{
//		cout << "-1" << endl;
//	}
//	else
//	{
//		cout << mx+1 << endl;
//	}
	return 0;
}
