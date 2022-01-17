#include <iostream>
using namespace std;

int main()
{
	int q,d,s;
	cout<<"quantity:";
	cin>>q;
	s=q*100;
		d=s/10;
	if(s>1000)
	{
		cout<<"Total cost will be "<<s-d<<endl;
	}
	else
	{
		cout<<"Total cost will be"<<s;
	}
	return 0;
}
