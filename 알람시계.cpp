#include<iostream>
using namespace std;

int main() {
	int hour, minute;
	cin >> hour >> minute;
	if ( minute < 45) {//45�� ��

		if (hour != 0) {//0�� �ƴ� ��
			hour--;
			minute = minute + 60 - 45;
		}

		else {
			hour = 23;
			minute = minute + 60 - 45;
		}

	}
	else {
		minute = minute - 45;
	}
	
	cout << hour << " " << minute << endl;;
}