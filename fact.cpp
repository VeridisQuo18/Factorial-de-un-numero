#include <iostream>

using namespace std;

double factorial(int num) {
	if (num == 1)
		return num;
	else
		return num * factorial(num - 1);
}

void main()
{
	int n;
	double f;
	cout << "Dame el numero para sacar su factorial: ";
	cin >> n;
	f = factorial(n);
	cout << endl << "El factorial de " << n << " es " << f << endl;
	system("PAUSE");
}
