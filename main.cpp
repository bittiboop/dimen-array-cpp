#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int cols = 100;
	const int rows = 100;
	int sum_global = 0;
	int matrix[rows][cols];
	int current_cols = 0, current_rows = 0;
	srand(time(0));
	do {
		cout << "Enter the number of columns: ";
		cin >> current_cols;
		cout << "Enter the number of rows: ";
		cin >> current_rows;
	} while (current_cols > cols || current_rows > rows || current_rows < 0 || current_cols < 0);

	cout << "Matrix: " << endl;
	for (int i = 0; i < current_rows; i++)
	{
		for (int j = 0; j < current_cols; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
	int sum_cols[cols];
	int sum_rows[rows];
	for (int i = 0; i < current_rows; i++)
	{
		sum_rows[i] = 0;
		for (int j = 0; j < current_cols; j++) {
			sum_rows[i] += matrix[i][j];
			sum_global += matrix[i][j];
		}
	}
	for (int i = 0; i < current_cols; i++)
	{
		sum_cols[i] = 0;
		for (int j = 0; j < current_rows; j++) {
			sum_cols[i] += matrix[j][i];
			sum_global += matrix[j][i];
		}
	}
	
	for (int i = 0; i < current_rows; i++)
	{
		for (int j = 0; j < current_cols; j++)
		{
			cout << matrix[i][j] << "   ";
		}
		cout << " |";
		cout << sum_rows[i] << endl;
	}
	for (int i = 0; i < current_cols; i++)
	{
		cout << "-----";
	}
	cout << endl;
	for (int i = 0; i < current_cols; i++)
	{
		cout << sum_cols[i] << "  ";
	}
	cout << " |" << sum_global << endl;
	return 0;
}