#include <iostream>
using namespace std;

int main() {
    int i, j,n=5,a=1;
    for(i = 1; i <= n; i++) {
        
        for(j = 1; j <= i; j++) {
            cout << a<<" "  ; 
            a=a+1;
        }
        cout << endl ;
    }
    return 0;
}
output
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15