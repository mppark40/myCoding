#include <iostream>

using namespace std;

int main(void)
{
    int a = 0;
    int b = 0;

    while (cin >> a >> b)//{EOF까지 받으면 가능}
    {
        cout << a + b << endl;
    }
}