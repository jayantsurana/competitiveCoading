#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    string ideal;
    int nochange = 0;
    for(int i=0;i<s.size()/3;i++){
        if(s[3*i] == 'S')
            nochange++;
        if(s[3*i+1] == 'O')
            nochange++;
        if(s[3*i+2] == 'S')
            nochange++;
    }
    return s.size()-nochange;
}//By Jayant Surana.

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}