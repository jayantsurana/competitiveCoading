#include <bits/stdc++.h>
using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int ar[4][4];
    int max=-100;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            ar[i][j]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(max<ar[i][j])
                max=ar[i][j];
    return max;
}//By Jayant Surana.

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int result = hourglassSum(arr);
    fout << result << "\n";
    fout.close();
    return 0;
}
