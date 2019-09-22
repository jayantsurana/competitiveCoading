#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;

    string name, id;
    map <string, string> number;

    for(int i=0; i<N; i++){
        cin >> name >> id;
        number[name] = id;
    }

    while(cin >> name)
        if (number.find(name) != number.end())
            cout << name << "=" << number.find(name) -> second << endl;
        else 
            cout << "Not found" << endl;

    return 0;
}
