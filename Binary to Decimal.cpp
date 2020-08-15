/* 
Given a binary number as n, we need to convert the given binary number into equivalent decimal number.

Input  : 111
Output : 7
         
Input  : 1010
Output : 10

*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int result=0;
	int count=0;
	while(n>0)
	{
		int remainder=n%10;
		int power=pow(2,count);
		result+=remainder*power;
		count++;
		n/=10;
	}
	cout<<result<<endl;
	
	return 0;
}
