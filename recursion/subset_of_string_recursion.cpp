#include <iostream>
using namespace std;

// subset of string

void subset_of_string(string s,string empty)
{
	if(s.size()==0)
	{
		cout << empty << endl;
		return ;
	}
	char ch=s[0];
	
	subset_of_string(s.substr(1),empty);
	subset_of_string(s.substr(1),empty+ch);
	
}

//void subset_of_string(string s,int i,int n)
//{
//	if(i >= (1<<n))
//	{
//		return ;
//	}
//	for(int j=0;j<n;j++)
//	{
//		if((i & (1<<j)) != 0)
//		{
//			cout << s[j];
//		}
//		
//	}
//	cout << endl;
//	subset_of_string(s,i+1,n);
//} 

int main()
{
	subset_of_string("ABC","");
//    subset_of_string("ABC",0,3);
	return 0;
}
