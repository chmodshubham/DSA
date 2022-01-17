#include <iostream>
using namespace std;

int noofones(int n)
{
	int count =0;
	while(n!=0) //while(n)
	{ 
	   n=(n & (n-1));
	   count++;
    }
    return count ;
}
int main()
{
	cout << noofones(7);          // 7 = 0111  ,  6= 0110  ,  7 & 6 = 0110 = 6  //  6 = 0110, 5 = 0101,   6 & 5 = 0100 = 4  // 4 = 0100, 3 = 0011 ,  4 & 3 = 0000 = 0
	return 0;
}
