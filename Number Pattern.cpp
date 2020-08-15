/*
/*Write a Program that takes an integer value n as input and prints first n lines of the number pattern. Following are the
first 6 rows of Pascal’s Triangle.
1  
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
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
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

