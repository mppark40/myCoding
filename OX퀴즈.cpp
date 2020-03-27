#include<iostream>
using namespace std;

int main() {
	char score[80];
	int sum = 0;
	int correct = 0;
	int time;
	int loopTime = 0;

	cin >> time;

	while (time>loopTime) {
		cin >> score;

		for (int i = 0; i < strlen(score); i++) {
			if (score[i] == 'O') {
				correct++;
				sum = sum + correct;
			}
			else if (score[i] == 'X')
				correct = 0;
		}
		cout << sum << '\n';
		sum = 0;//합계초기화
		correct = 0;//증가값 초기화

		loopTime++;
		if (loopTime == time)break;
	}
	return 0;
}/*#include <iostream>
#include <string>
using namespace std;
int main() {	
	int test_case;
	cin >> test_case; 	cin.ignore();
	int sum, count; string str;
	for (int i = 0; i < test_case; i++)
	{
		sum = 0; count = 0;
		getline(cin, str);
		for (int index = 0; index < str.length(); index++) {
			if (str[index] == 'O') {
				sum += (++count);
			}
			else {
				count = 0;
			}
		}
		cout << sum<<"\n";
	}
	return 0;
}*/