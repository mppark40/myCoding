#include<iostream>
using namespace std;
#include<string>

int main() {
	string s;
	getline(cin, s, '\n');
	int length = s.length();
	int cnt = 0;

	for (int i = 0; i < length; i++) {
		if (s[i] == '\n' || i==length-1)//����or���ڿ� ������ ���� �ѹ� �߰�
			cnt++;
	}
	cout << cnt;
}