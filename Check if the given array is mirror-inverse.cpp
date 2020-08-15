/* 
Given an array arr[], the task is to find whether the array is mirror inverse or not.

Input  : arr[] = {3, 4, 2, 0, 1}
Output : Yes

Input  : arr[] = {1, 2, 3, 0}
Output : No

*/

#include<iostream>
using namespace std;
int main()
{
	int arr[]={3, 4, 2, 0, 1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=0;i<n;i++)
	{
		int k=arr[i];
		if(arr[k]!=i)
		{
			cout<<"No"<<endl;
			break;
		}
	}
	if(i==n)
	{
		cout<<"Yes"<<endl;
	}
	return 0;
}
