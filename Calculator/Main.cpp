#include <iostream>
#include "Calculator.h"
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	Calculator calc1;
	double x, y, result;
	char oper;
	char goAgain;
	vector<string> history;

		do {
			cout << "Enter an Expression (e.g. 4 * 5): " << endl;
			cin >> x >> oper >> y;

			if (cin.fail()) {
				cout << "Invalid input. Please try again." << endl;
				cin.clear();
				cin.ignore(10000000, '\n');
				goAgain = (tolower('y'));
				continue;
			}
			
			result = calc1.CalculateNumbers(x, oper, y);
			if (!isnan(result))
				cout << "Result: " << result << endl;
			stringstream ss;
			ss << x << " " << oper << " " << y << " = " << result;
			history.push_back(ss.str());

			cout << "Do another? (y/n) ";
			cin >> goAgain;
		} while (tolower(goAgain) == 'y');

		cout << "\nCalculation History:" << endl;
		for (const string& entry : history) {
			cout << entry << endl;
		}

	return 0;
}