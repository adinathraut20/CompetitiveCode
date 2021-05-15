#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter input N : ";
cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==2 || j==2)
			{
				if(i==2 && 1<=j && j<n)
				{
					cout<<"  ";
					continue;
				}
				else if(4<=i && i<(n-1))
				{
					cout<<"  ";
					continue;
				}
			}
			if(i==(n-1) || j==(n-1))
			{
				if(i==(n-1) && 1<j && j<(n-1))
				{
					cout<<"  ";
					continue;
				}
				else if(2<i && i<n)
				{
					cout<<"  ";
					continue;
				}
			}
			if(i==4 || j==n-3)
			{
				if(i==4 && 3<=j && j<=n-3)
				{
					cout<<"  ";
					continue;
				}
				else if(n/2<=i && i<=n-3)
				{
					cout<<"  ";
					continue;
				}
			}
			if(i==n-3 || i==(n/2)+1)
			{
				if(i==n-3 && 3<j && j<n-3)
				{
					cout<<"  ";
					continue;
				}
				else if(i==(n/2)+1 && j>3 && j<=(n/2))
				{
					cout<<"  ";
					continue;
				}
			}
			else{
				cout<<"* ";
				}
		}
	cout<<endl;
	}
return 0;
}

