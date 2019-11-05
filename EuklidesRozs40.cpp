#include <iostream>

using namespace std;

int x = 1, y = 0;
int nwd,temp;
void euklidesRozs(int a, int b)
{
	if (b != 0)
	{
		// liczy module az do NWD(a`,0) gdzie a` = nwd(a,b)
		nwd = a * x + b * y;
		cout << "NWD(wartoci posrednie) = " << nwd << endl;
		euklidesRozs(b, a%b);
		//Z powrotem od (a`,0) do (a,b)
		//zmienna pomocnicza dla wymiany
		temp = y;
		//Skracanie równości,obliczenie
		y = x - a / b * y;
		x = temp;
	}


}
int main()
{
	int a, b;

	cout << "Podaj liczby dla wyliczenia NWD: ";
	cin >> a >> b;

	euklidesRozs(a, b);
	cout << "wspolczynnik przy y = " << y << endl;
	cout << "wspolczynnik przy x = " << x << endl<<endl;
	cout << "NWD = "<<nwd<<endl;
	cout << "nwd(" << a << ", " << b << ") = "
		<< a << " * " << x << " + " << b << " * " << y << " = "
		<< nwd << endl;
	cin.get();

	return 0;
}
