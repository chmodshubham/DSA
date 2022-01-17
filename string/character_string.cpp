#include <iostream>
using namespace std;

int main()
{
	char arr[100]=" Spidey ";
    int i=0;
    while(arr[i] != '\0')        //   '\0' denotes the end of the character
    {
    	cout << arr[i] << endl;
    	i++;
	}
	return 0;
}
