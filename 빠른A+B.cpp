#include<iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);//���� �����ؼ� �ӵ� ����
	
	int num;
	cin >> num;

	int a, b;
	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}