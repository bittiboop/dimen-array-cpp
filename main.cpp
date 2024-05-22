#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int cols = 100;
	const int rows = 100;
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
	for (int i = 0; i < current_rows; i++)
	{
		for (int j = 0; j < current_cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}cout << endl << endl;
	cout << "Sum of elements in the matrix: " << endl;
	int sum = 0;
	for (size_t i = 0; i < current_rows; i++)
	{
		for (size_t j = 0; j < current_cols; j++)
		{
			sum += matrix[i][j];
		}
	}
	cout << sum << endl;

	cout << "Average: ";
	int avg = 0;
	for (size_t i = 0; i < current_rows; i++)
	{
		for (size_t j = 0; j < current_cols; j++)
		{
			avg = sum / 2;
		}
	}
	cout << avg << endl;
	cout << "Max: ";
	int max = matrix[0][0];
	for (size_t i = 0; i < current_rows; i++)
	{
		for (size_t j = 0; j < current_cols; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
	}
	cout << max << endl;
	cout << "Min: ";
	int min = matrix[0][0];
	for (size_t i = 0; i < current_rows; i++)
	{
		for (size_t j = 0; j < current_cols; j++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
		}
	}
	cout << min << endl;
	return 0;
}