/*Given a number, determine whether the given number is Armstrong number or not.

Input  : 153
Output : Yes, it is an Armstrong Number.
153 is an Armstrong number.
1*1*1 + 5*5*5 + 3*3*3 = 153

Input  : 120
Output : No, it is not an Armstrong Number.
120 is not a Armstrong number.
1*1*1 + 2*2*2 + 0*0*0 = 9


*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_digits(int number)
{
	int count=0;
	while(number>0)
	{
		int remainder=number%10;
		count++;
		number/=10;
	}
	return count;
}
int find_armstrong(int number)
{
	int length=count_digits(number);
	int sum=0;
	while(number>0)
	{
		int remainder=number%10;
		int power=pow(remainder,length);
		sum=sum+power;
		number=number/10;
	}
	return sum;
}
bool check_armstrong(int number)
{
	int result=find_armstrong(number);
	if(number==result)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int number;
	cin>>number;
	if(check_armstrong(number)==true)
	{
		cout<<"Yes, it is an Armstrong Number."<<endl;
	}
	else
	{
		cout<<"No, it is not an Armstrong Number."<<endl;
	}
	
	return 0;
	
}
