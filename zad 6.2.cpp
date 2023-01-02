#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	string subjects[4] = { "informatyka","matematyka","biologia","jezyk polski" };
	string studentData[6];
	int studentMarks[6][4];
	int studentNumb = 0;
	int subjectNumb = 0;
	int loop = 1;

	for (int i = 0; i < 6; i++) {
		cout << "Podaj imie ucznia nr " << i << ":";
		cin >> studentData[i];
		for (int j = 0; j < 4; j++) {
			cout << "Podaj ocene z " << subjects[j] << ": ";
			cin >> studentMarks[i][j];
		}
	}

	while (loop == 1) {
		cout << "Podaj numer ucznia(0-5): ";
		cin >> studentNumb;

		cout << "Podaj numer przedmiotu(0-informatyka,1-matematyka,2-biologia,3-jezyk polski): ";
		cin >> subjectNumb;

		cout << "Ocena ucznia " << studentData[studentNumb] << " :" << studentMarks[studentNumb][subjectNumb] << endl;

	}
	

}

