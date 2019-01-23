#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long remainder = n%s.size();
    long repetition = n/s.size();
    long count=0, remaindercount=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a')
            count++;
        if(s[i]=='a' && i<remainder)
            remaindercount++;
    }
    return (count*repetition + remaindercount);
}//By Jayant Surana.

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