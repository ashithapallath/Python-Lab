#include <iostream>
using namespace std;

class MATRIX
{
	int** m;
	int d1, d2;
public:
	MATRIX() {};
	MATRIX(int x, int y);
	void input(int& i, int& j, int& value)
	{
		m[i][j] = value;
	}
	int get(int, int);
	void mtrx_add(MATRIX&, MATRIX&);
	void mtrx_mult(MATRIX&, MATRIX&);
	void mtrx_transpose(MATRIX);
	int matrx_trace(int);
};

MATRIX::MATRIX(int x, int y)
{
	d1 = x; d2 = y;
	m = new int* [d1];
	for (int i = 0; i < d1; i++)
	{
		m[i] = new int[d2];
	}
}

int MATRIX::get(int i, int j)
{
	return(m[i][j]);
}

void MATRIX::mtrx_add(MATRIX& a, MATRIX& b)
{
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < d2; j++)
		{
			m[i][j] = a.m[i][j] + b.m[i][j];
			cout << m[i][j] << "  ";
		}
		cout << "\n";
	}
}

void MATRIX::mtrx_mult(MATRIX& a, MATRIX& b)
{
	for (int i = 0; i < a.d1; i++)
	{
		for (int j = 0; j < b.d2; j++)
		{
			for (int k = 0; k < b.d1; k++)
			{
				m[i][j] = m[i][j] + a.m[i][k] * b.m[k][j];
			}cout << m[i][j];

		}cout << endl;
	}
}

void MATRIX::mtrx_transpose(MATRIX a)
{
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < d1; j++)
		{
			int tp = a.m[j][i];
			cout << tp << "  ";
		}
		cout << endl;
	}
}

int MATRIX::matrx_trace(int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + m[i][i];
	}
	return sum;
}
int main() {
	int R1, R2, C1, C2;
	cout << "Enter the number of rows and coloum of first matrix : ";
	cin >> R1 >> C1;
	MATRIX A(R1, C1);
	cout << "enter the element in the matrix row by row : ";
	int x;
	for (int i = 0; i < R1; i++)
	{
		for (int j = 0; j < C1; j++)
		{
			cin >> x;
			A.input(i, j, x);
		}
	}
	cout << "Enter the row and coloum of second matrix : ";
	cin >> R2 >> C2;
	MATRIX B(R2, C2);
	cout << "Enter the elements in the matrix row by row : \n";
	int x2;
	for (int i2 = 0; i2 < R2; i2++)
	{
		for (int j2 = 0; j2 < C2; j2++)
		{
			cin >> x;
			B.input(i2, j2, x2);
		}
	}
	if (R1 == R2 and C1 == C2)
	{
		MATRIX S1(R1, C1);
		S1.mtrx_add(A, B);
	}
	else
		cout << "Matrix with different dimension";
	if (C1 == R2)
	{
		MATRIX S2(R1, C2);
		cout << "Product of the matrix : ";
		S2.mtrx_mult(A, B);
	}
	cout << "Trancepose of matrix : ";
	MATRIX T(C1, R1);
	T.mtrx_transpose(A);
	if (R1 == C1)
		cout << "Trace of matrix : ";
	int trace = A.matrx_trace(R1);
	cout << trace << endl;

	return 0;
}



