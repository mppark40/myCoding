#include<iostream>
using namespace std;
#include<string>
int dialFunction(string str) {
	int length = str.length();
	int sum = 0;
	for (int i = 0; i < length; i++) {
		switch (str[i]) {
		case('A'):
		case('B'):
		case('C'): {sum = sum + 3; break; }

		case('D'):
		case('E'):
		case('F'): {sum = sum + 4; break; }

		case('G'):
		case('H'):
		case('I'): {sum = sum + 5; break; }

		case('J'):
		case('K'):
		case('L'): {sum = sum + 6; break; }

		case('M'):
		case('N'):
		case('O'): {sum = sum + 7; break; }

		case('P'):
		case('Q'):
		case('R'):
		case('S'): {sum = sum + 8; break; }

		case('T'):
		case('U'):
		case('V'): {sum = sum + 9; break; }

		case('W'):
		case('X'):
		case('Y'):
		case('Z'): {sum = sum + 10; break; }

		}
	}
	return sum;
}
int main() {
	string str;
	cin >> str;
	int time = dialFunction(str);
	cout << time;
}