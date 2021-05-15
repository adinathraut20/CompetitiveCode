#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void print1(int);
void pattern1(int, int,int);
void print3(int);
void pattern3(int, int,int);
void space1(int);
void space3(int);
void pattern1(int n, int i, int s) 
{ 
    if (n==0)
     {
           return; 
	}
    print1(n); 
    space1(i);
	print1(n);
    cout << endl;
    pattern1(n-1, i+2,s); 
}

void print1(int i) 
{
    if (i==0) 
        return; 
    cout<<"*"; 
    print1(i-1); 
} 

void space1(int i)
{
	if(i==0)
	{
		return;
	}
	cout<<" ";
	space1(i-1);
} 

void pattern3(int i, int n,int e) 
{ 
    if (i==e+1) 
        return; 
    print3(i); 
	space3((2*n)-1);
	print3(i);
    cout << endl;
    pattern3(i+1 , n-1,e); 
} 
void space3(int i)
{
	if(i==0)
	{
		return;
	}
	cout<<" ";
	space3(i-1);
}
void print3(int i) 
{
    if (i==0) 
        return; 
    cout<<"*"; 
    print3(i-1); 
} 

int main()
 {
    int n;
    cin>>n;
    pattern1(n,1,n);
	pattern3(2,n-1,n);
	return 0;
}


