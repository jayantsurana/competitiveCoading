#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    int a;
	cin >> T;
	int arr[1000000]={0};
	while(T--){
	    cin >> a;
	    arr[a]++;
	}
	a=0;
	while(a<1000000){
	    while(arr[a]){
	        cout << a << endl;
	        arr[a]--;
	    }
	    a++;
	}
	return 0;
}
