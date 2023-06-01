#include <iostream>

using namespace std;

int main() {
	const int ROW = 5;
	const int COL = 5;
	int arr[ROW][COL]{
		{2,4,3,4,7},
		{6,7,2,9,10},
		{11,12,0,56,15},
		{15,4,13,12,1},
		{4,9,8,7,6}
	};
	float sum = 0;
	int MinValue = arr[0][0];
	int MaxValue = arr[0][0];

	for (int i = 0; i < ROW; i++) {
		for (int k = 0; k < COL; k++) {
			cout << arr[i][k] << "\t";
			sum += arr[i][k];
			if (arr[i][k] < MinValue) {
				MinValue = arr[i][k];
			}
			if (arr[i][k] > MaxValue) {
				MaxValue = arr[i][k];
			}
		}
		cout << endl;
	}
	cout << endl << "Sum = " << sum << endl;
	cout << endl << "Average = " << sum / (sizeof(arr) / sizeof(int)) << endl;
	cout << endl << "MinValue = " << MinValue << endl;
	cout << endl << "MaxValue = " << MaxValue << endl;
	
	return 0;
}
