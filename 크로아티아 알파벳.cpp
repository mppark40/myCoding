#include<iostream>
using namespace std;
#include<string>

int count(string str) {
	int cnt = 0;
	int length = str.length();
	for (int i = 0; i < length; i++) {

		if (str[i] == 'c') {//c로 시작할때
			if (str[i + 1] == '=' || str[i + 1] == '-') {
				cnt++;
				i += 2;
			}
		}

		else if (str[i] == 'd') {
			if (str[i + 1] == 'z' && str[i + 2] == '=') {
				cnt++;
				i += 3;
			}
			else if (str[i + 1] == '-') {
				i += 2;
				cnt++;
			}
		}

		else if (str[i] == 'l'&&str[i+1]=='j') {
			i += 2;
			cnt++;
		}

		else if (str[i] == 'n'&&str[i+1]=='j') {
			i += 2;
			cnt++;
		}

		else if (str[i] == 's'&&str[i+1]='=') {
			i += 2;
			cnt++;
		}

		else if (str[i] == 'z') {
			i += 1;
			cnt++;
		}
	}
	return cnt;
}

int main() {
	string str;
	cin >> str;

	int cnt = count(str);
	cout << cnt;
}