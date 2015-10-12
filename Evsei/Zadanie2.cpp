//вводится целое чило. Проверить, является ли оно симметричным//
#include <iostream>
using std::cout;
using std::cin;
int main(){
	int a, a1, a2=0;
	cin >> a; 
	a1 = a;
	while (a)
	{
		a2 =a2*10 + a % 10;
		a /= 10;
	}
	cout << (a1==a2 ? "yes" : "no");
	return 0;
}
