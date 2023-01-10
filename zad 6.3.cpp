#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> index;
	vector <string> name;
	vector <string> surname;

	int studentNumb, indexAdd, temporaryIndex;
	string nameAdd, surnameAdd, temporaryName, temporarySurname;

	cout << "Podaj liczbe studentow: ";
	cin >> studentNumb;


	for (int i = 0; i < studentNumb; i++) {
		cout << "Podaj index studenta: ";
		cin >> indexAdd;
		index.push_back(indexAdd);

		cout << "Podaj imie studenta: ";
		cin >> nameAdd;
		name.push_back(nameAdd);

		cout << "Podaj nazwisko studenta: ";
		cin >> surnameAdd;
		surname.push_back(nameAdd);
	}

	cout << "Wektory przed sortowaniem: " << endl;

	for (int j = 0; j < studentNumb; j++) {
		cout << index[j] << " " << name[j] << " " << surname[j] << endl;
	}


	for (int i = 0; i < studentNumb; i++) {

		for (int j = i + 1; j < studentNumb; j++) {

			if (index[j] < index[i]) {
				temporaryIndex = index[i];
				index[i] = index[j];
				index[j] = temporaryIndex;

				temporaryName = name[i];
				name[i] = name[j];
				name[j] = temporaryName;

				temporarySurname = surname[i];
				surname[i] = surname[j];
				surname[j] = temporarySurname;
			}
		}
	}

	cout << "Wektory po sortowaniu: " << endl;

	for (int k = 0; k < studentNumb; k++) {
		cout << index[k] << " " << name[k] << " " << surname[k] << endl;
	}

}

