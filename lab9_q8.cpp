/*Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.*/

//including library
#include <iostream>
using namespace std;

int myStrLen(char* p)
{
    int count=0;
    for(int i=0;*(p+i)!='\0';i++)
    {
        *(p+i);
        count++;
    }
    return count;
}
int main()
{
    char arr[60];
    cout<<"Enter the string:"<<arr;
      //getting a string line
    cin.getline(arr,60); 
    char* p=&arr[0];
    cout<<"Length of the string:"<<myStrLen(p);
    return 0;
}


