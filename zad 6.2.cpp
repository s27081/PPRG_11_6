#include <iostream>
#include <cstdlib>

using namespace std;

void generateMarks(int arr[6][4]) {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = (rand() % (6 - 1 + 1)) + 1;
		}
	}

}

int main()
{
	
	string studentData[6];
	int studentMarks[6][4];
	int studentNumb = 0;
	int subjectNumb = 0;

	for (int i = 0; i < 6; i++) {
		cout << "Podaj imie ucznia nr " << i << ":";
		cin >> studentData[i];
	}

	generateMarks(studentMarks);

	cout << "Podaj numer ucznia(0-5): ";
	cin >> studentNumb;

	cout << "Podaj numer przedmiotu(0-informatyka,1-matematyka,2-biologia,3-jezyk polski): ";
	cin >> subjectNumb;

	cout << "Ocena ucznia " << studentData[studentNumb] << " :" << studentMarks[studentNumb][subjectNumb];

}

