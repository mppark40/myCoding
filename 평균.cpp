#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;//시험 본 과목의 개수

	if (num > 1000)//1000을 넘었을 때 강제 종료
		return -1;

	double* array = new double[num];

	double max = 0.0;

	for (int i = 0; i < num; i++) {
		cin >> array[i];
		if (max < array[i])
			max = array[i];
	}
	double sum = 0;
	for (int i = 0; i < num; i++) {
		array[i] = (array[i] / max) * 100;
		sum = sum + array[i];
	}
	cout << fixed;//소수점 자릿수 고정
	cout.precision(2);
	cout << (sum / num);
	delete[]array;
}/*#include <iostream>  

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	
	if (N > 1000)
		return -1;
	
	float score[1000];
	for (int i = 0; i < N; ++i)
	{
		cin >> score[i];
	}

	int max=0;

	for (int i = 0; i < N; ++i) 
		if (score[i] > max)
			max = score[i];
		

	for (int i = 0; i < N; ++i) 
		score[i] = score[i] / max * 100;
		

	float total = 0;
	for (int i = 0; i < N; ++i)
		total += score[i];

	cout << fixed;
	cout.precision(2);
	cout << total / N << endl;

	return 0;


}*/