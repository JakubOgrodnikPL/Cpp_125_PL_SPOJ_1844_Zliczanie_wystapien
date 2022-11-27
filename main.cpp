#include <iostream>
using namespace std;

int main()
{
	int numer = 0;
	int dlugosc = 0;
	while (cin >> numer >> dlugosc)
	{
		int licznik = 0;
		for (int i = 0; i < dlugosc; i++)
		{
			int a;
			cin >> a;
			if (a == numer) licznik++;
		}
		cout << licznik << endl;
		licznik = 0;
	}
    return 0;
}
