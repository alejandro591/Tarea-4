#include<iostream>
using namespace std;

int main()
{

	int i;
	int x;
	int userchoice;
	int valor;


	cout << "Select Triangle type: (1-isosceles. 2- Equilateral )" << endl;
	cin >> userchoice;
	cout << endl;

	if (userchoice ==1)
	{
		cout << "Select the triangle size" << endl;
		cin >> valor;
		for (i = 1; i <= valor; i++)
		{
			for (x = 1; i >= x; x++)
				cout << "*";
			cout << "\n";
		}
	}
	else if (userchoice == 2)
	{
		int i;
		int n;
		int y;
		int valor;
		cout << "Select the triangle size" << endl;
		cin >> valor;
		{
			for (i = 0; i < valor; i++)
			{
				for (y = i; y < valor; y++) 
				{
					cout << (" ");
				}
				
				for (n = 0; n < i; n++)
				{
					cout << ("* ");
					/*for ( i = 0; i < i; i++)
					{

					}*/
				}
				cout<<("\n");
			}
		}
	}
	return 0;
}