#include <iostream>
using namespace std;

int main()
{
	int ch,ca,p;
	cout<<"no. of class held:";
	cin>>ch;
	cout<<"no. of class attended:";
	cin>>ca;
	p=ca*100/ch;
	cout<<"Percantage of class attend:"<<p<<"%"<<endl;
	if (p<75)
	{
		char mc;
		cout<<"Medical cause('Y' or 'N'):";
		cin>>mc;
		if(mc=='Y')
		{
			cout<<"Allow to sit";
		}
		else
		{
			cout<<"Not allow to sit";
		}
	}
	else
	{
		cout<<"Allow to sit";
	}
	return 0;
}
