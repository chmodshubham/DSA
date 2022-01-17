#include <iostream>
using namespace std;

void primeSieve(int n)
{
	int a[100]={0};
	for(int i=2;i<n;i++)
	{
	    if(a[i]==0)
		{
		    for(int j=2*i;j<n;j+=i)
			{
				a[j]=1;
			}	
		}	
	} 
	
	for(int i=2;i<n;i++)
{
	if(a[i]==0)
	{
		cout << i << " ";
	}
}

}



int main()
{
//	int a[50];
//	int x=1;
//	for(int i=0;i<50;i++)
//	{
//		a[i]=x++;
//		a[0]=0;
//	}
//	for(int i=0;i<50;i++)
//	{
//		if(a[i]%2==0 || a[i]%3==0 || a[i]%5==0 || a[i]%7==0)
//		{
//			a[i]=0;
//		}
//	}
//	
//	for(int i=0;i<50;i++)
//	{
//		if(a[i] != 0 )
//		{
//			cout << a[i] << " ";
//		}
//	}
    int n;
    cin >> n;
    primeSieve(n);
	return 0;
}
