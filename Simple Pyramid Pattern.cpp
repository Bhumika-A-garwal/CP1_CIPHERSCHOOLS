/*Write a program that takes an integer value n as input and prints first n lines of the simple pyramid pattern. Following 
are the first 6 rows of Simple pyramid pattern.
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
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}

