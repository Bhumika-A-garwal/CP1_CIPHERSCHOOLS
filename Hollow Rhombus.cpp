/*Write a Program that takes an integer value n as input and prints first n lines of the Hollow Rhombus. Following are the
first 5 rows of Hollow Rhombus.
	*****
   *   *
  *   *
 * 	 *
***** 
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		if(i==n|| i==1)
		{
			for(int j=1;j<=n;j++)
			{
			cout<<"*";
			}
		}
		else
		{
			for(int l=1;l<=n;l++)
			{
				if(l==1||l==n)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}	
		}
		cout<<endl;
	}
	return 0;
}

