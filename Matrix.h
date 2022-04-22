#pragma once

class Matrix
{
private:
	int** Matr;
	int rows;
	int cols;

	void Create()
	{
		Matr = new int* [rows];
		for (int z = 0; z < rows; z++)
			Matr[z] = new int[cols];
	}

public:
	int GetRows() { return rows; };
	int GetCols() { return cols; };
	bool SetRows(int value);
	bool SetCols(int value);

	bool Init(int rows, int cols);
	void Read();
	void Enter();
	void Display();

	void DisplayUnif();
	void Change();
};
