#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    char arr[n+1];
//    cin.getline(arr,n);
//    cin.ignore();
    arr.getline(cin,n);
   
    int i=0;
    int curlen=0,maxlen=0;
    int st=0,maxst=0;
    while(1)
    {
    	if(arr[i]==' ' || arr[i]=='\0')
    	{
    		if(curlen>maxlen)
    		{
    			maxlen=curlen;
    			maxst=st;
			}
			curlen=0;
			st=i+1;
		}
		
		else
		{
		    curlen++;
	    }
		if(arr[i]=='\0')
		{
			break;
		}
		i++;
	}
	cout << maxlen << endl;
//	cout << maxst << endl;
    
    int j=0;
    while( j<maxst )
    {
    	cout << arr[j+maxst];     
    	j++;
	}

//    int i=0;
//    int len=0;
//    int maxlen=INT_MIN;
//    while(arr[i]!='\0')
//    {
//    	len++;
//    	if(arr[i]==' ')
//    	{
//    		len=0;
//		}
//		
//    	maxlen=max(maxlen,len);
//    	i++;
//	}
//	cout << maxlen;
	return 0;
}
