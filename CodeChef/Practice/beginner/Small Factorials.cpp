#include <iostream>
using namespace std;

int main(){
    int T, N, m, carry, j;
    cin >> T;
    
    while(T--){
	    cin >> N;
        m=1;
        int a[200] {1};
        
        for(int i=1; i<=N; i++){
            carry=0;
            for(j=0; j<m; j++){
                a[j] = a[j]*i + carry;
                carry = a[j]/10;
                a[j]%=10;
            }
            while(carry){
	            a[j] = carry%10;
	            carry/=10;
                j++;
                m++;
            }
        }
        
        while(m--)
            cout << a[m];
        cout << endl;
    }
    
    return 0;
}
