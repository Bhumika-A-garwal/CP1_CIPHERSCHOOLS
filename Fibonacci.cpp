/*
Given a number n, print n-th Fibonacci Number.
Example:

Input  : n = 2
Output : 1

Input  : n = 9
Output : 34

*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int next=0,n1=0,n2=1;
	while(n>0)
	{
		n1=n2;
		n2=next;
		next=n1+n2;
		sum=next;
		n--;
	}
	cout<<sum<<endl;
	return 0;
}
