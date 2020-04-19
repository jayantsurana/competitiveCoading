#include <iostream>
using namespace std;

int main(){
	int T=1;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		int x=0, y=0;
		bool L=false, R=false, U=false, D=false;
		string S;
		cin >> S;
		
		for(int i=0; i<N; i++){
			if(S[i] == 'L'  && L == false && R == false){
				L = R = true;
				U = D = false;
				x-=1;
			}else if(S[i] == 'R' && R == false  && L == false){
				R = L = true;
				U = D = false;
				x+=1;
			}else if(S[i] == 'U' && U == false && D == false){
				U = D = true;
				L = R = false;
				y+=1;
			}else if(S[i] == 'D' && D == false && U == false){
				D = U = true;
				L = R = false;
				y-=1;
			}
		}
	cout << x << " " << y << endl;
	}
	return 0;
}
