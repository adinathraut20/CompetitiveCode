#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],ar[n],MIN;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	MIN=(int)(ar[0]/a[0]);
	for(int i=1;i<n;i++)
	{
		if(MIN>(int)ar[i]/a[i])
		MIN=(int)ar[i]/a[i];
	}
	cout<<MIN<<endl;
	return 0;
}
