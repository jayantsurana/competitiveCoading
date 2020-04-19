#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T=1;
	cin >> T;
	while(T--){
	    int n, x;
	    cin >> n >> x;
	    int A[n], i, j;
	    for(i=0; i<n; i++)
	        cin >> A[i];
	    
	    sort(A, A+n);
	    int day=1;
	    for(i=0; i<n; i+=x){
	       for(j=i; j<i+x && j<n; j++)
	           if(A[j]>day)
	                A[j]=0;
	       day+=1;
	    }
	    for(i=0; i<n; i++)
	        if(A[i]!=0)
	            break;
	    if(i==n)
	        cout << "Possible" << endl;
	    else
	        cout << "Impossible" << endl;
	}
	return 0;
}
