#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define M 1000000007

int power(int x, lli y){ 
    lli temp; 
    if(y == 0)
        return 1; 
    temp = power(x, y/2)%M; 
    if (y%2 == 0) 
        return (temp*temp)%M; 
    else
        return (((x*temp)%M)*temp)%M; 
}

int main() {
	// your code goes here
	int T=1;
	cin >> T;
	while(T--){
	    lli N=0;
	    cin >> N;
	    cout << power(2, N)-1 << endl;
	}
	return 0;
}
