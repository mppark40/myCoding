#include<iostream>
using namespace std;
#include<string>

int main() {
	int num, sum = 0,tmp;
	cin >> num;
	cin.get();

	char array;
	for (int i = 0; i < num; i++) {
		cin.get(array);
		tmp = array - '0';
		sum += tmp;
	}
	cout << sum<<endl;
}
/*
int main() {
	int num;
	cin >> num;//숫자의 개수

	int sum = 0;//합=0
	string n;//문자열로 입력받기
	cin >> n;//숫자들 입력
	for (int i = 0; i < num; i++) {
		char tmp = n[i];//문자열 하나씩 잘라서 입력하기
		sum = sum + atoi(&tmp);//자른 후에 숫자로 변환시키기
	}

	cout << sum;//합 출력
}*/