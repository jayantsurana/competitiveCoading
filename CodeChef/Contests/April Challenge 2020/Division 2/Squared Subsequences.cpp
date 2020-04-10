#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  //This code gives partially correct answer (Score = 20/100)
	int T=1;
	cin >> T;
	while(T!=0){
	    long int N;
	    cin >> N;
	    long int A[N]={};
	    for(long int i=0; i<N; i++)
	        cin >> A[i];
	    long int good=0;
	    long int P=1;
	    for(long int i=0; i<N; i++){
	        P=A[i];
	        if(P%2!=0 || P%4==0)
	            good++;
	        for(long int j=i+1; j<N; j++){
	            P*=A[j];
	            if(P%2!=0 || P%4==0)
	                good++;
	        }
	    }
	    cout << good << endl;    
	    T--;
	}
	return 0;
}
//This code gives partially correct answer (Score = 20/100)
