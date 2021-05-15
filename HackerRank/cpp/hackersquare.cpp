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
			if((i%2==0 || j%2==0)&& (i>1 && i<(2*n+1) && j>1 && j<(2*n+1)&&(i*j)!=6 &&(i*j)!=10 &&(i*j)!=20)) 
			{
				cout<<"  ";
			}
			else{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
return 0;
}
				
			
