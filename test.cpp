#include <iostream>
using namespace std;

int rows = 2;
int columns = 10;
int matrix[10][10];


void Draw(int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	cout << "Enter the number of rows..." << endl;
	cin >> rows;
	cout << "Enter the number of columns..." << endl;
	cin >> columns;
	Draw(rows, columns);
	system("pause");
	return 0;
}