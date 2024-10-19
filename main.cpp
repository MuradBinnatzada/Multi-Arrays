#include "main.h"
#include <iostream>
using namespace std;

void fillArray(array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		throw invalid_argument("Incorrect number of rows or columns");
	}

	int startValue = 1;

	for (int col = columns - 1; col >= 0; col--) {
		int i = 0;
		int j = col;
		while (i < rows && j < columns) {
			arr[i][j] = startValue;
			startValue++;
			i++;
			j++;
		}
	}

	for (int row = 1; row < rows; row++) {
		int i = row;
		int j = 0;
		while (i < rows && j < columns) {
			arr[i][j] = startValue;
			startValue++;
			i++;
			j++;
		}
	}
}


void printArray(array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		throw invalid_argument("Incorect number of rows or cloumns");
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}