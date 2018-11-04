//Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.
//including library

#include <iostream>
#include<cstring>
using namespace std;

// use of function pointer in parameter
void revrS(char* para)
	{
	    int end;
	    int count=0;
	    // reversing the string
		for(int i=0;(*(para+i))!='\0';i++)
		{
        		count++;
		}
 		 end=count-1;
		for(int i=end;i>=0;i--)
		    {
		        cout<<*(para+i);
		    }
	}

int main()
{
    int size;
	cout<<"Enter size of array: "<<endl;
	cin>>size;
    char arr[size];
	cout<<"Enter input to array: "<<endl;
    	cin>>arr;
    //calling the function and using pointer.
	char* p=&arr[0];
	cout<<"reverse"<<endl;
	revrS(p);
    return 0;
}
