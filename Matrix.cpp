#include "Matrix.h"
#include <iostream>

using namespace std;

bool Matrix::SetRows(int value) {
	if (abs(value) > 0) {
		rows = value;
		return true;
	}
	else {
		return false;
	}
}

bool Matrix::SetCols(int value) {
	if (abs(value) > 0) {
		cols = value;
		return true;
	}
	else {
		return false;
	}
}

bool Matrix::Init(int rows, int cols) {
	return SetRows(rows) && SetCols(cols);
}

void Matrix::Read() {
	do {
		cout << "Enter number of rows: "; cin >> rows;
		cout << "Enter number of cols: "; cin >> cols;
	} while (!Init(rows, cols));
}

void Matrix::Enter() {
	Create();
	for (int i = 0; i < rows; i++) {
		cout << "Row #" << i + 1 << endl;
		for (int j = 0; j < cols; j++) {
			cout << "[ " << i + 1 << " ] " << "[ " << j + 1 << " ] ";
			cin >> Matr[i][j];
		}
	}
}

void Matrix::Display() {
	cout << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "[ " << Matr[i][j] << " ] ";
		}
		cout << endl << endl;
	}
}

void Matrix::DisplayUnif() {
	int n, m;
	do
	{
		cout << "Enter number of rows to display: "; cin >> n;
		cout << "Enter number of cols to display: "; cin >> m;
	} while (n > rows || m > cols);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "[ " << Matr[i][j] << " ] ";
		}
		cout << endl << endl;
	}
}

void Matrix::Change() {
	for (int i = 0; i < rows; i++)
	{
		delete[] Matr[i];
	}
	delete[] Matr;
	Read();
	Enter();
}
