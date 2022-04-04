#include<iostream>
using namespace std;

class matrix
{
    int R, C;
    int** p;
public:
    matrix() {}
    matrix(int r, int c);
    void show_matrix();
    void display_matrix();
    friend matrix operator+(matrix A, matrix B);
    friend matrix operator*(matrix A, matrix B);
};

matrix::matrix(int r, int c)
{
    R = r; C = c;
    p = new int* [R + 1];
    for (int i = 0; i < C; i++) {
        p[i] = new int[C + 1];
    }
}

void matrix::show_matrix() {
    cout << "Enter " << C << "X" << R << " elements \n";
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            int e;
            cin >> e;
            p[i][j] = e;
        }
    }
}

void matrix::display_matrix() {
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            cout << p[i][j] << " ";
        }
        cout << "\n";
    }
}

matrix operator+ (matrix A, matrix B) {

    if (A.R == B.R && A.C == B.C) {
        matrix e(A.R, A.C);
        for (int i = 0; i < e.R; i++) {
            for (int j = 0; j < e.C; j++) {
                e.p[i][j] = A.p[i][j] + B.p[i][j];
            }
        }
        return e;
    }
    else {
        matrix k(0, 0);
        cout << "Incongruous dimensions\n";
        return k;
    }

}

matrix operator* (matrix A, matrix B)
{
    if (A.C == B.R) {
        matrix x(A.R, B.C);
        for (int i = 0; i < A.R; i++) {
            for (int j = 0; j < B.C; j++) {
                int sum = 0;
                for (int n = 0; n < B.R; n++) {
                    sum += A.p[i][n] * B.p[n][j];
                }
                x.p[i][j] = sum;
            }
        }
        return x;
    }
    else {
        cout << "Dimensions not cogruous\n";
        matrix y(1, 1);
        return y;
    }

}

int main()
{
    cout << "Enter rows and columns for matrix 1 :";
    int r1, r2, c1, c2;
    cin >> r1 >> c1;
    matrix A(r1, c1);
    A.show_matrix();
    cout << "Enter rows and columns for matrix 2 :";
    cin >> r2 >> c2;
    matrix B(r2, c2);
    B.show_matrix();
    cout << "\n\nA = \n";
    A.display_matrix();
    cout << "\n";
    cout << "B = \n";
    B.display_matrix();
    cout << "\n";
    cout << "A + B = \n";
    matrix C = A + B;
    C.display_matrix();
    cout << "\n";
    cout << "A * B = \n";
    matrix D = A * B;
    D.display_matrix();
    cout << "\n";
    return 0;
}



