#include "main.h"
#include <iostream>
using namespace	std;

int main() {
	array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> arr;
	int numberOfRows, numberOfColumns;
	cout << "Enter the number of rows:";
	cin >> numberOfRows;
	cout << "Enter the number of columns:";
	cin >> numberOfColumns;
	try {
		fillArray(arr, numberOfRows, numberOfColumns);
		printArray(arr, numberOfRows, numberOfColumns);
	}
	catch (exception& e) {
		cout << "Exception:" << e.what() <<	endl;
	}
}