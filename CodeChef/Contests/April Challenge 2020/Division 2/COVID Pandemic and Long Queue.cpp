#include <iostream>;
using namespace std;

int main() {
    int T=1;
    cin >> T;
    
    while(T!=0){
        int N=1;
        cin >> N;
        int rulebreak = 0; // is the rule broken
        int rulefollowed = 1; // is the rule followed
        int A[N+5] = {0};
        
        for(int i=0; i<N; i++)
            cin >> A[i];
            
        int j=0;
        while (N>0){
            if(A[j] != 0 && A[j+1] == 0 && A[j+2] == 0 && A[j+3] == 0 && A[j+4] == 0 && A[j+5] == 0)
                rulebreak = 0;
            else if(A[j] == 0)
                rulebreak = 0;
            else{
                rulebreak = 1;
                rulefollowed = 0; //once rule is unfollowed it is a NO.
            }
            N--;
            j++;
        }
                
        if(rulefollowed == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        T--;
    }
    return 0;
}
