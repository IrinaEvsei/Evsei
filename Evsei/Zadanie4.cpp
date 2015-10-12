#include <iostream>
#include <clocale>
using std::cout;
using std::cin;
int main() {
	//вводится число, сгенерировать перевернутое число//
	int a = 0, b = 0, i = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Ââåäèòå ÷èñëî: " << "\n";
	cin >> a;
	while (a > 0) {
		b = a % 10;
		a = a / 10;
		cout << b;
	}
	return 0;
}
