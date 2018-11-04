//Q13. Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 

//including library

#include <iostream>
using namespace std;

	int main()
		{
		int arr[10]={1,3,5,7,9,8,6,4,2,10};
	
	// using normal index method
		for(int i=0;i<10;i++)
		{
			cout<<arr[i]<<",";
		}
		cout<<endl;

	//using pointer method
		int *p= arr;
			for(int i=0;i<10;i++)
			{
			cout<<*(p+i)<<",";
			}

	return 0;
	}
