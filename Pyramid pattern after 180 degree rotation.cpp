/*
/*Write a Program that takes an integer value n as input and prints first n lines of the pyramid pattern after 180 degrees of rotation.
Following are the first 5 rows of pyramid.

        *
      * * 
    * * * 
  * * * * 
* * * * * 

*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" "<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}

