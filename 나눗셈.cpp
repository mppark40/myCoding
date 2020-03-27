#include<iostream>
using namespace std;

int main() {
	long double a, b;
	cin >> a >> b;
	if (a > 0 && b < 10) {
		cout.precision(32);
		cout << a / b;
	}
	else cout << "숫자 범위를 벗어났습니다." << endl;
}