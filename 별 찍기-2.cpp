#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 1; i < num + 1; i++) {
		for (int j = 1; j < num - i + 1; j++)
			cout << ' ';
		for (int j = 1; j < i + 1; j++)
			cout << "*";
		cout << '\n';
	}
}