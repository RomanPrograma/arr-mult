#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	const int ROW = 5;
	const int COL = 5;
	int arr[ROW][COL]{
		{5,7,5,1,8},
		{2,2,5,2,2},
		{3,3,4,3,8},
		{8,4,2,4,4},
		{5,5,1,5,8}
	};

	int sum1;
	int sm;
	for (int i = 0; i < ROW; i++) {
		sum1 = 0;
		sm = 0;
		for (int k = 0; k < COL; k++) {
			cout << arr[i][k] << "\t" ;;
			sum1 += arr[i][k];
			sm += sum1;

		}
		cout << sum1 << endl;
	}
	for (int i = 0; i < COL; i++) {
		int sum2 = 0;
		for (int k = 0; k < ROW; k++) {
			sum2 += arr[k][i];
		}
		cout << sum2 << "\t";
		if (i + 1 == COL) {
			cout << sm;
		}
	}
	return 0;
}