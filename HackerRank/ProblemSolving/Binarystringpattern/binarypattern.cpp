#include <cmath>
#include <cstdio>
#include <vector>
#include<cstring>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  //  char n;
    int count=0;
    char str[20];
    cin>>str;
    int a=(strlen(str));
    for(int i=0;i<a-1;i++)
    {
        if(str[i]!='1' && str[i]!='0')
        {           
            if((str[i]!='0' && str[i+1]=='0') || (str[i]!='1' && str[i+1]=='1'))
               {
                count--;   
                continue;
               }
        }
        if(str[i]=='1' && str[i+1]=='0')
        { 
            count++;
            i++;
        }
    }
    if(str[a-1]=='0')
    {
        count--;
    }

        //cout<<str[a-1]<<endl;
    cout<<count<<endl;
    
    return 0;
}

