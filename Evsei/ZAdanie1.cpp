//вводится целое число. Найти сумму этого числа до первого встречного нуля//
#include <iostream>
using std::cout;
using std::cin;
int main(){
	int a,b=0;
	cin >> a;
	int a2 = 0;
	while (a)
	{
		a2 = a2 * 10 + a % 10;
		a /= 10;
	}
	//cout << a2;
	while (a2 % 10)
	{
		b += a2 % 10;
		a2 /= 10;
	}
	cout << b << std::endl;
	return 0;
}
