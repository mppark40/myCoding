#include<iostream>
using namespace std;

int main() {
	int num=1,tmp=0,cnt=0;
	cin >> num;
	int result = num;
	if (num < 0 || num>99)
		return -1;
	
	while (true) {
		int a = num / 10;
		int b = num % 10;
		int c = (a + b) % 10;
		int d = b * 10 + c;
		
		tmp = d;

		cnt++;
		if (result == tmp)
			break;
	}
	cout << cnt;
}/*
int main() {
	int num, a, b, c, d, count = 0, result;
	cin >> num;
	result = num;
	while (true)
	{
		a= num / 10 ;//10*A + B => A+B=C => tmp = B * 10 + C
		b= num % 10 ;//B
		c = (a + b) % 10;
		d = b * 10 + c;
		num = d;
		count++;
		if (result == num)break;
	}
	cout << count;
}*/
