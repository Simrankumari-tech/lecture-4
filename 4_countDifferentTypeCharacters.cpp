#include <iostream>
using namespace std;

int main() {
	int digits = 0, characters = 0, whitespaces = 0, special = 0;
	char ch;
	ch = cin.get();
	while (ch != '$') {
		// Logic
		if ( (ch >= 'A' and ch <= 'Z') || (ch >= 'a' and ch <= 'z')) {
			characters++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			whitespaces++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else {
			special++;
		}

		ch = cin.get();
	}
	cout << "Total char       : " << characters << endl;
	cout << "Total digits     : " << digits << endl;
	cout << "Total whitespaces: " << whitespaces << endl;
	cout << "Total special    : " << special << endl;

	return 0;
}