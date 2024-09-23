// Lab_03_4.cpp
// < Засідка Юлія >
// Лабораторна робота 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10
#include <iostream>
using namespace std;
int main()
{
	double x, y, a, b, R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	
	if (-R <= x &&  x <= 0 && -R <= y && y <=0 && x*x + y*y <= R*R||
		(x <= a && 0 <= y &&  y <= b && x*x + y*y >= R*R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
