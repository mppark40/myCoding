#include<iostream>
using namespace std;

int main() {
	int num;
	int a, b;
	cin >> num;
	int *array=new int[num];
	for (int i = 0; i < num  ; i++) {
		cin >> a >> b;
		array[i] = a + b;
	}
	for (int i = 0; i < num; i++)
		cout << array[i] << endl;
}