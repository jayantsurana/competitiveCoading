#include <iostream>
using namespace std;

int main() {
    
	long int T=1, N=2;
	cin >> T;
	while(T!=0){
	    cin >> N;
	    int arr[N] {};
	    for(int i=0; i<N; i++)
	        cin >> arr[i];
	    int cost1 = arr[0];
	    for(int i=1; i<N; i++)
	        cost1 = cost1 % arr[i];
	    int cost2 = arr[N-1];
	    for(int i=N-2; i>=0; i--)
	        cost2 = cost2 % arr[i];
	    cout << max(cost1, cost2) << endl;
	    T--;
  }
	return 0;
}
