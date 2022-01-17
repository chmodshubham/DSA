#include <iostream>
using namespace std;

void fibonacci(int n)
{
	int t1 = 0 , t2 = 1;
	int s =0;
	for (int i=1;i<=n;i++)
	{
		cout << t1 << endl;
		s=t1+t2;
		t1=t2;
		t2=s;
	}
	
	return  ;
}
int main()
{
	int n;
	cin >> n;
    fibonacci(n);
	return 0;
}
