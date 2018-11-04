//11. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )

//including library

#include <iostream>
using namespace std;

int main()
	{

		//introducing integer variable
		int x;
		int *x1 =&x;
		 cout<<"The size of integer variable is :"<<sizeof(x)<<endl<<"The size of integer pointer variable is :"<<sizeof(x1)<<endl;
             
        	//introducing character variable
		char y;
		char *y1 =&y;
		cout<<"The size of character variable is :"<<sizeof(y)<<endl<<"The size of character pointer variable is :"<<sizeof(y1)<<endl;
		
		//introducing float variable
		float z;
		float *z1 =&z;
		cout<<"The sizes of float variable are :"<<sizeof(z)<<endl<<"The sizes of float pointer variable are :"<<sizeof(z1)<<endl;
	
		//introducing double variable
		double d;
		double *d1 =&d;
		cout<<"The sizes of double variable is :"<<sizeof(d)<<endl<<"The sizes of double pointer variable is :"<<sizeof(d1)<<endl;
	
		//introducing boolean variable
		bool b;
		bool *b1 =&b;
		cout<<"The size of bool is : "<<sizeof(b)<<endl<<"The size of bool pointer variable is :"<<sizeof(b1)<<endl;

	return 0;
	}

