#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int words = 1;
    for(int i=0; i<s.size(); i++)
        if(s[i]<97)
            words++;
    return words;
}//By Jayant Surana.

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
