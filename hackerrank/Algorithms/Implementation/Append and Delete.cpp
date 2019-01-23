#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int i=0;
    for(i=0; i<min(s.size(), t.size()); i++)
        if(s[i]!=t[i])
            break;
    int minoperations=s.size()+t.size()-2*i;
    while(k>minoperations)
        if(i-- > 0) //It means check if i>0, if so enter the loop and decrement i.
            minoperations+=2;
        else
            minoperations++;
    return minoperations == k ? "Yes" : "No";
}//By Jayant Surana.

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}