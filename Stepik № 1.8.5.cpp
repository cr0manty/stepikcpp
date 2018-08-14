#include <iostream>
using namespace std;
int main()
{
   char c = '\0';
    while (cin.get(c)) {
        while (c == ' ' && cin.peek() == ' ')
            cin.get(c);
        cout << c;
    }   
    return 0;
}