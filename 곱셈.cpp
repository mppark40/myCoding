#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int trashb1 = b % 10;
	int trashb2 = b % 100/10;
	cout << trashb1 * a << endl;
	cout << trashb2 * a << endl;
	cout << b / 100 * a << endl;
	cout << a * b << endl;

	return 0;
}