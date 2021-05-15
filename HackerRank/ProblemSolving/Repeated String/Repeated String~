#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        c++;
    }
    long a=n/s.length();
    if(n%(s.length())==0)
    return c*(n/s.length());
    else{
        int b=n-(a*s.length());
        int d=0;
        for(int i=0;i<b;i++)
        {
            if(s[i]=='a')
            d++;
        }
        return (c*a)+d;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
