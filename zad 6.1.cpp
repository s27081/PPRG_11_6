#include <iostream>

using namespace std;

int main()
{
	int nValue = 0;
	int counter = 0;

	cout << "Podaj liczbe n: ";
	cin >> nValue;

	for (int i = 1; i <= nValue; i++) {
		if (i % 3 != 0) {
			if (i % 5 == 0) {
				counter++;
			}
		}
	}

	cout << "Sa " << counter << " liczby naturalne spelniajace wymagania";
}

