/* Q14. [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. */

//including library

#include <iostream>
using namespace std;
	int main()
	{
		char name[10]= "Vaishnavi";
	
	// using normal index method
		for(int i=0;i<4;i++)
		{
			cout<<name[i]<<",";
		}
		cout<<endl;

	// using pointer method
		char *n=name;
			for(int i=0;i<8;i++)
			{
			cout<<*(n+i)<<",";
			}
	return 0;
	}
