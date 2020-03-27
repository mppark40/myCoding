#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int tmp = num;

	for (int i = 0; i < tmp; i++) {
		cout << num << '\n';
		num--;
	}
}