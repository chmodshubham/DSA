#include <iostream>
using namespace std;

int main()
{
	int i,n;
	cout<<"Take a no. upto which u required the sum:";
	cin>>n;
	int sum=0;
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+i;
	
	}
		cout<<sum<<" is the sum till "<<n<<endl;
	
	return 0;
}
