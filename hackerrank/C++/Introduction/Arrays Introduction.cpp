#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i=0; i<n; i++)
        cin >> a[n-i-1];
    for(int j=0; j<n; j++)
        if(j!=n-1)
            cout << a[j] << " ";
        else
            cout << a[j];
    return 0;
}//By Jayant Surana.