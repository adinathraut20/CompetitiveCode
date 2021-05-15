#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string st[5];
    string s;
    
    for(int i=0;i<5;i++)
    {
        cin>>st[i];
    }
    for(int j=0;j<4;j++)
    {
            for(int l=0;l<4-j;l++)
            {
                   if(st[l][0]>st[l+1][0])
                   {
                       s=st[l];
                       st[l]=st[l+1];
                       st[l+1]=s;
                   }
            }
    }
    
       for(int j=0;j<4;j++)
    {  
        for(long unsigned int k=0;k<st[j].length() && k<st[j+1].length();k++)
        {
            if(st[j][k]>st[j+1][k])
            {
                s=st[j];
                st[j]=st[j+1];
                st[j+1]=s;
                break;
            }
            else if(st[j][k]<st[j+1][k])
            {
                    break;
            }
               
        }
    }
    
    
    
     for(int i=0;i<5;i++)
    {
        cout<<st[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
