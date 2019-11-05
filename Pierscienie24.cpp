#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Wprowadz n :" << endl;
	cin >> n;
	//

	int ** tablicaDodawania = new int*[n];
	for (int i = 0; i < n; i++)
		tablicaDodawania[i] = new int[n];

	int ** tablicaMnozenia = new int*[n];
	for (int i = 0; i < n; i++)
		tablicaMnozenia[i] = new int[n];



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tablicaDodawania[i][j] = (i + j) % n;
			tablicaMnozenia[i][j] = (i*j) % n;
		}
	}
	cout << "Tablica Mnozenia w Z" << n << endl<<"   ";
	for (int k = 0; k < n; k++)
	{cout << k << " ";}
	cout <<endl<< "_______________________"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout << i << " |";
		for (int j = 0; j < n; j++)
		{
			cout << tablicaMnozenia[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "Tablica Dodawania w Z" << n << endl << "   ";
	for (int k = 0; k < n; k++)
	{
		cout << k << " ";
	}
	cout << endl << "_______________________" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i << " |";
		for (int j = 0; j < n; j++)
		{
			cout << tablicaDodawania[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[] tablicaMnozenia[i];
	}
	for (int i = 0; i < n; i++)
	{
		delete[] tablicaDodawania[i];
	}
	cin.get();
	cin.get();
	return 0;
}
