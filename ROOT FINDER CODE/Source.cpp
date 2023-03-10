#include <iostream>
#include <math.h>
using namespace std;

bool RootFinder(int a, int b, int c);

int main() {
	int a = 0; int b = 0; int c = 0;
	bool Try = true;
	do {
		Try = RootFinder(a, b, c);
	} while (Try == true);


}
bool RootFinder(int a, int b, int c) {
	cout << "Please enter the values of a/b/c (ax^2+bx+c)";
	cin >> a >> b >> c;
	char req;
	int discriminant = pow(b, 2) - (4 * a * c);
	if (discriminant < 0) {
		cout << "There is no root in this equation" << endl;
		cout << "Would you want to try again? Y/N";
		cin >> req;
		if (req == 'Y') {
			return true;
		}
		else return false;

	}
	float result1 = (-b + sqrt(discriminant)) / (2 * a);
	float result2 = (-b - sqrt(discriminant)) / (2 * a);
	cout << "1st root of this equation is" << result1 << endl;
	cout << "2st root of this equation is" << result2 << endl;
	cout << "Would you want to try again? Y/N";
	cin >> req;
	if (req == 'Y') {
		return true;
	}
	else return false;

}