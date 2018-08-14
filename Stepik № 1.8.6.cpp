#include <iostream>
using namespace std;
int log(int k) {
    int p = -1;
    while(k){
        k >>= 1;
        ++p;
    } 
    return p;
}
 
int main() {
    int n;
    cin >> n;
 
    for(int i =0;i<n;i++) {
        int k;
        cin >> k;
        cout << log(k) << endl;
    }
    return 0;
}
 

