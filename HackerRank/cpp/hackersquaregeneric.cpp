#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"input: ";
	cin>>n;
	for(int i=1;i<=(2*n)+1;i++)
	{
		for(int j=1;j<=(2*n)+1;j++)
		{
			if(i==1 ||j==1 ||i==(2*n)+1 ||j==(2*n)+1) 
			{
				cout<<"* ";
			}
			else{
				if(i%2==0 && j%2!=0 && i<=j)
					cout<<"* ";
				else if((i%2!=0 && j<=i)||(i%2!=0 && j%2!=0))
					cout<<"* ";
				else{
					cout<<"  ";
				}
			}
		}
		cout<<endl;
	}
return 0;
}
				
			
