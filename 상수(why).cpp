#include<iostream>
using namespace std;
#include<string>

string &change (string &num1) {
	char tmp = num1[0];
	num1[0] = num1[2];
	num1[2] = tmp;

	return num1;
}

int main() {
	string num1, num2;
	cin >> num1 >> num2;

	string tmp1 = change(num1);
	string tmp2 = change(num2);
	
	if (stoi(tmp1) > stoi(tmp2)) //string to int
		cout << tmp1;

	else cout << tmp2;

	return 0;
}