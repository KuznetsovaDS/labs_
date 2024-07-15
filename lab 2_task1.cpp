#include <iostream>
#include <cmath>
using namespace std;
int main() {
	system("chcp 1251");
	double x, y;
	cout << "Введите координаты x y ";
	cin >> x >> y;
	double radiusSq = x * x + y * y;
	double radius = 3.0;
	double rad = radius * radius;
	if (radiusSq < rad && y >0) {
		cout << "внутри" << endl;
	}
	else if (radiusSq > rad || y < 0)
	{
		cout << "снаружи" << endl;
	}
	else {
		cout << "на границе" << endl;
	}
}