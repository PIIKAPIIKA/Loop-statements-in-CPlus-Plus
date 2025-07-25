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