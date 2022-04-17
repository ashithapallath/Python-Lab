
	

#include <iostream>
using namespace std;

class Matrix {
int rows, coloumns;
int** matrix;
public:
Matrix() {}
Matrix(int r, int c) {
rows = r;
coloumns = c;
matrix = new int* [rows];
for (int i = 0; i < rows; ++i) {
matrix[i] = new int[coloumns];
}
}

void getRowsandColoumns() {
cout << "Enter the no of rows and coloumns" << endl;
cin >> rows >> coloumns;
}
void allocateMatrix();
void getMatrix();
void displayMatrix();
void operator+(const Matrix&);
void operator*(const Matrix&);

~Matrix() {
for (int i = 0; i < rows; ++i) {
delete matrix[i];
}
cout << "Memory Deleted" << endl;
delete matrix;
}
};


void Matrix::allocateMatrix() {
matrix = new int* [rows];
for (int i = 0; i < rows; ++i) {
matrix[i] = new int[coloumns];
}
}


void Matrix::getMatrix() {
cout << "Enter the Values" << endl;
for (int i = 0; i < rows; ++i) {
cout << "Row - " << i + 1 << endl;
for (int j = 0; j < coloumns; ++j) {
cin >> matrix[i][j];
}
}
}

void Matrix::displayMatrix() {

for (int i = 0; i < rows; ++i) {
for (int j = 0; j < coloumns; ++j) {
cout << matrix[i][j] << "\t";
}
cout << "\n";
}
}

void Matrix::operator+(const Matrix& a) {
if (rows == a.rows and coloumns == a.coloumns) {
Matrix sum(rows, coloumns);
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < coloumns; ++j) {
sum.matrix[i][j] = matrix[i][j] + a.matrix[i][j];
}
}
sum.displayMatrix();
}
else {
cout << "Addition not possible" << endl;
}
}

void Matrix::operator *(const Matrix& a) {
if (coloumns == a.rows) {
Matrix productMatrix(rows, a.coloumns);
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < a.coloumns; ++j) {
int sum = 0;
for (int k = 0; k < coloumns; ++k) {
sum = matrix[i][k] * a.matrix[k][j] + sum;
productMatrix.matrix[i][j] = sum;
}
}
}
productMatrix.displayMatrix();
}
else {
cout << "Multiplication not possible" << endl;
}
}
int main() {
int  x;
cout << "_______________________________ OPERATOR OVERLOADING _________________________________\n" << endl;


Matrix matrix1;
cout << "First Matrix" << endl;
matrix1.getRowsandColoumns();
matrix1.allocateMatrix();
matrix1.getMatrix();

Matrix matrix2;
cout << "Second Matrix" << endl;
matrix2.getRowsandColoumns();
matrix2.allocateMatrix();
matrix2.getMatrix();

cout << endl;
cout << "First Matrix" << endl;
matrix1.displayMatrix();
cout << endl;
cout << "Second Matrix" << endl;
matrix2.displayMatrix();

do {
int option;


cout << "########################################################################################################################\nEnter your choice \n1.Matrix 1 + Matrix2\n2.Matrix 1 x Matrix2" << endl;
cin >> option;
switch (option) {
case 1:
matrix1 + matrix2;
break;
case 2:
matrix1 * matrix2;
break;
default:
cout << "Enter a valid number " << endl;
break;
}
cout << "\n" << endl;
cout << "Do you want to continue ?\n1.Continue\n2.Exit" << endl;
cin >> x;
} while (x == 1);




return 0;
}
