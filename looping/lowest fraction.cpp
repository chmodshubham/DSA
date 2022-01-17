#include <iostream>
using namespace std;

int main()
{

	int hcf,a,b,t,p,q,i,j;
	cin >> i >> j;
	cout << "The fraction is " << i << "/" << j << endl;
	a=i;
	b=j;
	while (a!=0)
	{
		t=a;
		a=b%a;
		b=t;
	}
	hcf=b;
	p=i/b;
	q=j/b;
	cout << "The lowest term is " << p << "/" << q ; 
	return 0;
}
