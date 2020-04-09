#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T = 1;
	cin >> T;
	
	while(T!=0){
	    long int profit = 0;
	    long int N;
	    cin >> N;
	    long int A[N]={};
	    for(long int i=0; i<N; i++)
	        cin >> A[i];
	    sort(A, A+N, greater<int>());
	    for(long int i=0; i<N; i++)
	        if(A[i]>i)
	            profit += A[i]-i;
	    cout << (profit % 1000000007) << endl;
	    T--;
	}
	return 0;
}
