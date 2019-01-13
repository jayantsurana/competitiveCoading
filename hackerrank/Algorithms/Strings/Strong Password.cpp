#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int required=6;
    int enter=0;
    int firstcase=0;
    int secondcase=0;
    int thirdcase=0;
    int fourthcase=0;
    for(int i=0; i<n; i++){
        if((password[i]>='!' && password[i]<='-') || password[i] == '@' || password[i] == '^')
            firstcase++;
        else if(password[i]>='0' && password[i]<='9')
            secondcase++;
        else if(password[i]>='A'&& password[i]<='Z')
            thirdcase++;
        else if(password[i]>='a' && password[i]<='z')
            fourthcase++;
        else
            break;
    }
    if(n<6)
        enter = 6-n;
    int left=0;
    if(firstcase==0)
        left++;
    if(secondcase==0)
        left++;
    if(thirdcase==0)
        left++;
    if(fourthcase==0)
        left++;
    if(enter>=left)
        required = enter;
    else
        required = left;
    return required;
}//By Jayant Surana.

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
