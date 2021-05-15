#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    if(!(0<n && n<=100))
        return 0;
    char ** st;
    st=new char*[n];
    for(int i=0;i<n;i++)
    {
        st[i]=new char[50];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(st[j],st[j+1]) > 0)
            {
                char *s=new char[50];
                strcpy(s,st[j]);
                strcpy(st[j],st[j+1]);
                strcpy(st[j+1],s);
            }
        }
    }
    
    
     for(int i=0;i<n;i++)
    {
        cout<<st[i]<<endl;
    }
    return 0;
}
