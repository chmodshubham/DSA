#include <iostream>
using namespace std;

int spf(int a[], int n)
{
	a[2]=2;
	for(int i =3; i<100 ;i++)
	{
		int j;
		for( j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==i)
		{
			a[i]=i;
		}
	}
	
	for(int i =2; i<100 ;i++)
	{
		if(a[i]!=0)
		{
			if(n%a[i]==0)
			{
			    return i;
			}
		}
	}
	return 0;
}

int main()
{
   int n;
   cin >> n;
   int a[100]={0};
   	
   while(n!=1)
   {
   	   cout << spf(a,n) << " ";    //spf == smallest prime factor
   	   n =n / spf(a,n);
   }
   return 0;
}
