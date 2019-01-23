#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    k%=n;
    int result[n];
    for(int i=0; i<n; i++)
        result[(n+i-k)%n] = arr[i]; //as i-k can be negative n is added.
    for(int i=0; i<n; i++){
        if(i!=n-1)
            cout << result[i] << " ";
        else
            cout << result[i];
    }   
    return 0;
}//By Jayant Surana.