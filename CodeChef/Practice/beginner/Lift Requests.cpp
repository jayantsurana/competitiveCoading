#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// your code goes here
	int T=0;
	cin >> T;
	while(T--){
	    int N, Q;
	    cin >> N >> Q;
	    lli sum=0;
	    int temp=0;
	    while(Q--){
	        int a, b;
	        cin >> a >> b;
	        sum += (abs(a-temp)+abs(a-b));
	        temp = b;
	    }
	    cout << sum << endl;
	}
	return 0;
}
