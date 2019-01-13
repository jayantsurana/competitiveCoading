#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
    while(k>26){
        k-=26;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z' - k)
            s[i] += k;
        else if(s[i] > 'Z'- k && s[i] <= 'Z')
            s[i] += k-26;
        if(s[i] >= 'a' && s[i] <= 'z' - k)
            s[i] += k;
        else if(s[i] > 'z'- k && s[i] <= 'z')
            s[i] += k-26;
    }
    return s;
}//By Jayant Surana.

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
