#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"input: ";
	cin>>n;
	for(int i=1;i<2*n;i++)
	{
		if(i==n)
		{
			for(int j=1;j<2*n;j++)
			{
				if(j%2==0)
				cout<<" ";
				else
				cout<<"*";
			}
			cout<<endl;
			
		}
		else{
			for(int k=1;k<=n;k++)
			{
				if(k==n)
				cout<<"*";
				else
				cout<<" ";
			}
			cout<<endl;
			
		}
	}
return 0;
}
