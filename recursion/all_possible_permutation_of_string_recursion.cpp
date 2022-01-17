#include <iostream>
using namespace std;

void permutation(string s, string ans)
{
	if (s.size() == 0)
	{
		cout << ans << endl;
		return;
	}

	for (int i = 0; i < s.size(); i++)
	{
		char ch = s[i];
		// string x= "";

		// for(int j=0 ; j<s.size();j++)
		// {

		// 	if(s[j]==ch)
		// 	{
		// 		continue;
		// 	}
		// 	x=x+s[j];
		// }
		// permutation(x , ans+ch);

		//    upper comment is an alternative for (s.substr(0,i) + s.substr(i+1))

		permutation((s.substr(0, i) + s.substr(i + 1)), ans + ch);

		//		when ch = A ; then function call occur ,permutation(BC , A)    and note: 2 more loops are left for B and C.
		//		now,function call for, permutation(C,AB)  and note: 1 more loop is left for C
		//		now function call for, permutation(,ABC)
		//		this will print ABC      and
		//		we move to the next loop under A that is permutation(B,AC)
		//		this will print ACB
		//
		//		similarly we r going to run a loop for   B   and   C   which were left for looping in the 1st case and work in the same way as for A.
	}
}

int main()
{
	permutation("ABC", "");
	return 0;
}
