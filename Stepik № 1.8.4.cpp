#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    	int a, b, c;
	cin >> a >> b >> c;
	double x1, x2;
	int d = b * b - 4 * a*c;
	if (d < 0) {
		cout << "No real roots";
		return 0;
	}
	if (d > 0) {
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
	}
	if(d==0){
		x1 = -b / (2 * a);
		x2 = x1;
	}

	cout << x1 << " " << x2;


    return 0;
}