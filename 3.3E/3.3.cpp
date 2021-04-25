#include "Date.h"
#include "Triad.h"
#include <Windows.h>
#include "Date.h"
#include "Object.h"
int a;
int b;
int c;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "number : " << Object::Count() << endl;
	Triad A1;
	cout << "number : " << Object::Count() << endl;
	Triad B1;
	cout << "number : " << Object::Count() << endl;
	Triad A2;
	cout << "number : " << Object::Count() << endl;
	Triad A(2, 33, 4);
	Triad a;
	cin >> a;
	a.incDay();
	Date a2;
	a2.Init(a);
	a2.Display();
	a2.incDay();
	a2.addDay();
	a2.Display();
	cout << " A++ " << endl;
	cout << a++ << endl;
	cout << " A-- " << endl;
	cout << a-- << endl;
	cout << " ++A " << endl;
	cout << ++a << endl;
	cout << " --A " << endl;
	cout << --a << endl;

}