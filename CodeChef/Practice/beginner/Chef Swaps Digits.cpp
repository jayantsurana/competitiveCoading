#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T = 1;
	cin >> T;
	while(T>0){
	    int A, B;
	    cin >> A >> B;
	    int max = A+B;
	    int A1 = A/10;
	    int A2 = A%10;
	    int B1 = B/10;
	    int B2 = B%10;
	    
	    if(A1!=0 && B1!=0){
	        int x = A1*10+B1 + A2*10+B2;
	        int y = A1*10+B2 + A2*10+B1;
	        int z = B2*10+A2 + B1*10+A1;
	        if(max < x)
	            max = x;
	        if(max < y)
	            max = y;
	        if(max < z)
	            max = z;
	        cout << max << endl;
	    }else if(A1!=0 && B1==0){
	        int x = A1*10+B2 + A2;
	        int y = B2*10+A2 + A1;
	        if(max < x)
	            max = x;
	        if(max < y)
	            max = y;
	        cout << max << endl;
	    }else if(A1==0 && B1!=0){
	        int x = B1 + A2*10+B2;
	        int y = B2 + B1*10+A2;
	        if(max < x)
	            max = x;
	        if(max < y)
	            max = y;
	        cout << max << endl;
	    }else
	        cout << max << endl;
	    T--;
	}
	return 0;
}
