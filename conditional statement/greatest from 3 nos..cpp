#include <iostream>
using namespace std;

int main()
{ 
int a,b,c;
cout<<"take first no.";
cin>>a;
cout<<"take second no.";
cin>>b;
cout<<"take third no.";
cin>>c;
if ((a>b)&&(a>c))
{
	cout<<a<<' '<<"is the greatest no.\n";
}
 else if  ((b>c)&&(b>a))
{
		cout<<b<<' '<<"is the greatest no.\n";
}
else
{
		cout<<c<<' '<<"is the greatest no.";
}



return 0;
}
