#include <iostream>
using namespace std;

int getBit(int n,int pos)
{
	return ((n & (1<<pos)) != 0)   ;       
	
}

int setBit(int n, int pos)
{
	return (n | (1<<pos));         // 1<<pos means assigning value 1 from right to left . In this 1<<pos=0100
}

int clearBit(int n , int pos)
{
	int x= (~(1<<pos));          
	return (n & x);
}

int updateBit(int n , int pos, int value)
{
	//first clear the bit and then set the bit there
	//clear
	int x= ~(1<<pos);
	n= n & x;
	//set
	return (n | (value<<pos));
}

int main()
{
	cout << getBit(5,1)<< endl;           // getBit(no. ,  position)
	cout << setBit(5,1) <<endl;           //set bit means set 1 and unset bit means set 0
	cout << clearBit(5,0) << endl;
	cout << updateBit(5,0,0) << endl;      //updateBit(no. , position , value to be assign)
	return 0;
}
