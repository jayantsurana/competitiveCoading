#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int cash;
	double balance;
	cin >> cash >> balance;
	if(cash%5 == 0){
	    double newBalance = (balance - cash - 0.50);
	    if(newBalance >= 0)
	        cout << setprecision(2) << fixed << newBalance;
	    else
	        cout << balance;
	}else
	    cout << balance;
	return 0;
}
