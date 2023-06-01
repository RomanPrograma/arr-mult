#include <iostream>

#include <ctime>
using namespace std;

int main() {
	const int ROW1 = 5;
	const int COL1 = 10;
	int arr1[ROW1][COL1];
	srand(time(NULL));
	cout << "First ARR: " << endl;
	for (int i = 0; i < ROW1; i++) {
		for (int k = 0; k < COL1; k++) {
			arr1[i][k] = rand() % 51 - 0;
			cout << arr1[i][k] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl << endl;
	const int ROW2 = 5;
	const int COL2 = 5;
	int arr2[ROW2][COL2];
	cout << "Second ARR: " << endl;
	for (int i = 0; i < ROW2; i++) {
		for (int k = 0; k < COL2; k++) {
			arr2[i][k] = arr1[i][2 * k] + arr1[i][2 * k + 1];
			cout << arr2[i][k] << "\t";
		}
		cout << endl;
	}
	return 0;
}