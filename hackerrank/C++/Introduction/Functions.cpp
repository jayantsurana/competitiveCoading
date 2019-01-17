#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    if(a>b){
        if(a>c){
            if(a>d)
                return a;
            else
                return d;
        }else{
            if(c>d)
                return c;
            else
                return d;
        }
    }else{
        if(b>c){
            if(b>d)
                return b;
            else
                return d;
        }else{
            if(c>d)
                return c;
            else
                return d;
        }
    }
}//By Jayant Surana.

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

/*
//Alternate Solution using for loop.
int main() {
    int a, b, c, d;
    int temp=0, ans=temp;
    for(int i=0; i<4; i++){
        cin >> temp;
        if(ans<temp)
            ans=temp;
    }
    cout << ans;
    return 0;
    //The solution above is for loop method of doing this question.
}//By Jayant Surana.
*/