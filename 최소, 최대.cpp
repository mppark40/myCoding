#include<iostream>
using namespace std;

int main() {
	int num, min, max;
	cin >> num;
	int* array = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> array[i];
	}
	min = array[0];
	max = array[0];
	for (int j = 1; j < num; j++) {
		if (min > array[j]) {
			min = array[j];
		}
		if (max < array[j]) {
			max = array[j];
		}
	}
	cout << min << ' ' << max;
	delete[]array;
}