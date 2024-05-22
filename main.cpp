#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int cols = 10;
	const int cols_2 = 5;
	const int rows = 5;
	const int rows_2 = 5;
	int matrix_1[rows][cols];
	int matrix_2[rows_2][cols_2];
	srand(time(0));

	cout << "First matrix: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix_1[i][j] = rand() % 50;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) {
			cout << matrix_1[i][j] << " ";
		}
		cout << endl;
	}cout << endl << endl;
	
	cout << "Second matrix: " << endl;
	for (int i = 0; i < rows_2; i++)
	{
		matrix_2[0][i] = matrix_1[0][i] + matrix_1[1][i];
	}
	for (int i = 0; i < cols_2; i++)
	{
		matrix_2[i][0] = matrix_1[i][0] + matrix_1[i][1];
	}
	for (int i = 0; i < rows_2; i++)
	{
		for (int j = 0; j < cols_2; j++) {
			cout << matrix_2[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}