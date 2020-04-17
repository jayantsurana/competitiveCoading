#define lli long long int
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	lli T=1;
	cin >> T;
	while(T--){
	    lli X, K, count=0, i;
	    cin >> X >> K;
	    while(X%2==0){
	        X=X/2;
	        count++;
	    }
        for(i=3; i*i <= X; i+=2)
            while(X%i == 0){
                X=X/i;
                count++;
            }
        if(X>2)
            count++;
	    
	    if(count >= K)
            cout << "1" << endl;
	    else
	        cout << "0" << endl;
	}
	return 0;
}
