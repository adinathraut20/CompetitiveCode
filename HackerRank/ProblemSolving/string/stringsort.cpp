#include<iostream>
#include<string>
using namespace std;
void bubblesort(string arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j].length()>arr[j+1].length())
			{
				string temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void print(string s[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	string* s=new string[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	bubblesort(s,n);
	print(s,n);
	return 0;

}
