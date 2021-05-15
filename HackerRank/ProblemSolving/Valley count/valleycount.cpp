#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int p=0,c=0,d=0;
    for(int i=0;i<n;i++)
    {
          if(p==0 && s[i]=='D')
             d++;
        if(s[i]=='U')
        ++p;
        if(s[i]=='D')
        --p;
    

    }
    return d;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

