#include <sstream>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> arr;
    int count=0;
    stringstream ss(str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == ',')
            count++;
    }
    for(int i=0;i<count;i++)
    {
        char ch1;
        int a;
        ss >> a >> ch1 ;
        arr.push_back(a);
    }
    int a;
    ss >> a;
     arr.push_back(a);

    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
