#include<iostream>
using namespace std;

int main() {
	int a, b, c, num;
	cin >> a >> b >> c;//a,b,c ���ڸ� �ڿ���
	num = a * b * c;
	int cnt[10] = { 0 };
	while (num > 0) {
		cnt[num % 10]++;
		num = num / 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << '\n';
	}

}