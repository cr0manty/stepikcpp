#include <iostream>

using namespace std;

void obr() {
    int n;
    cin >> n; 
    if (n){
        obr();
        cout << n << '\t';
    }
}
 
int main() 
{
    obr();
    return 0;
}