#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
	Calculator calc1;
	double x, y, result;
	char oper;
	char goAgain;

		do {
			cout << "Enter an Expression (e.g. 4 * 5): " << endl;
			cin >> x >> oper >> y;

			if (cin.fail()) {
				cout << "Invalid input. Please try again." << endl;
				cin.clear();
				cin.ignore(10000000, '\n');
				goAgain = 'y';
				continue;
			}
			
			result = calc1.CalculateNumbers(x, oper, y);
			if (!isnan(result))
				cout << "Result: " << result << endl;

			cout << "Do another? (y/n) ";
			cin >> goAgain;
		} while (tolower(goAgain == 'y'));


	return 0;
}