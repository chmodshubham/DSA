#include <iostream>
using namespace std;

int main()
{
	int n1,n2,hcf,lcm,a,b,t;
	cout << "n1:";
	cin >> n1;
	cout << "n2:";
	cin >> n2;
	a=n1;
	b=n2;
	while(a!=0)
	{
		t=a;
		a=b%a;
		b=t;
	}
	hcf=b;
	lcm=n1*n2/hcf;
	cout << "HCF is " << hcf << " and LCM is " << lcm << endl;
	return 0;
}
