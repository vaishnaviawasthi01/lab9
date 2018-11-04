/*12. Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p. */

//including library

#include <iostream>
using namespace std;

	int main()
	{
	//introducing integer variable
	int a =2,b=3;
	int *p;
	 p=&a;
	 b=*p;

	//print a
	cout<<a<<endl;

	//print b
	cout<<b<<endl;

	//print p
	cout<<*p<<endl;
	a =2,b=3;

	//assigning pointer p to b
	p=&b;

	//print a
	cout<<"value of a after assigning:"<<a<<endl;

	//print b
	cout<<"value of b after assigning:"<<b<<endl;

	//print p
	cout<<"value of *p :"<<*p<<endl;

	return 0;
	}
