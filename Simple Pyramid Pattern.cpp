/*Write a program that takes an integer value n as input and prints first n lines of the simple pyramid pattern. Following 
are the first 6 rows of Pascal’s Triangle.
*
* *
* * *
* * * *
* * * * *
* * * * * * 
*/


#include<iostream>
using namespace std;

int main()
{
	int number;
	cin>>number;
	for(int i=1;i<=number;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}

