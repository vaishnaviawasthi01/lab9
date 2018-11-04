/* 16. Contrary to Exercise 5, here, we want to show string repeatedly by shifting top character of string from right to left. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement.

#include <stdio.h>

int main(void)
{
char str[20], *p;

cout << "Input about 10 characters of string\n";
cin >> str;

// Pointer variable refers to address of string
*****************************
*****************************

// Show string by shifting top character of string to right
*****************************
*****************************
*****************************
*****************************
return (0);
}
(Execution example)
$ ./a.out
Input about 10 characters of string
abcd1234EFGH
H
GH
FGH
EFGH
4EFGH
34EFGH
234EFGH
1234EFGH
d1234EFGH
cd1234EFGH
bcd1234EFGH
abcd1234EFGH */

//including library

#include <iostream>
using namespace std;
	int main()
	{
		char str[11],*p;
		cout<<"Type an input of 10 characters as string"<<endl;

		//asking user for values
		cin>>str;
		p=str;

	// Pointer variable refering to address of string.
		for(int i=0;i<10;i++)
			{
			for(int j=9-i;j<11;j++)
				{
				cout<<*(p+j);
				}
			cout<<endl;
			}
	return 0;
	}


