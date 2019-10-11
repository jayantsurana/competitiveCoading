#include <iostream>
using namespace std;

int main() {
	int T=1;
	cin >> T;
	
	while(T!=0){
	    int N=7;
	    cin >> N;
	    int gooddays = 0;
	    int P[N];
	    for(int i=0; i<N; i++)
	        cin >> P[i];
	    
	    for(int i=0; i<N; i++){
	        if(i==0)
	            gooddays++;
	        else if(i==1 && P[i] < P[i-1])
	            gooddays++;
	        else if(i==2 && P[i] < P[i-1] && P[i] < P[i-2])
	            gooddays++;
	        else if(i==3 && P[i] < P[i-1] && P[i] < P[i-2] && P[i] < P[i-3])
	            gooddays++;
	        else if(i==4 && P[i] < P[i-1] && P[i] < P[i-2] && P[i] < P[i-3] && P[i] < P[i-4])
	            gooddays++;
	        else if(P[i] < P[i-1] && P[i] < P[i-2] && P[i] < P[i-3] && P[i] < P[i-4] && P[i] < P[i-5])
	            gooddays++;
	    }
	
	    cout << gooddays << endl;
	    T--;
	}
	return 0;
}
