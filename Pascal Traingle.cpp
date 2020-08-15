/*Write a Program that takes an integer value n as input and prints first n lines of the Pascal’s triangle. Following are the
first 6 rows of Pascal’s Triangle.
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 
*/

#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()

{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(i==j|| j==0)
			{
				a[i][j]=1;
                cout<<a[i][j]<<" ";
			}
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
