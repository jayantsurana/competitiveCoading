#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    vector<int> x(n, 0);
    int numofdiv=0, index=0, remainder=0;
    int temp=n;
    while(temp>0){
        remainder=temp%10;
        temp/=10;
        x[index]=remainder;
        index++;
    }
    for(int i=0; i<x.size(); i++)
        if(x[i]!=0 && n%x[i]==0)
            numofdiv++;
    return numofdiv;
}// By Jayant Surana.

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
