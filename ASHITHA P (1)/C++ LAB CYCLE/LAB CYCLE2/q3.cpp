#include<iostream>
using namespace std;

class Vector
{
    float i, j, k;
public:
    friend float operator*(Vector, Vector);
    friend ostream& operator<<(ostream& output, const Vector& V) {
        output << V.i << "i + " << V.j << "j + " << V.k << "k\n";
        return output;
    }
    friend istream& operator>>(istream& input, Vector& V) {
        input >> V.i >> V.j >> V.k;
        return input;
    }
};

float operator*(Vector P, Vector Q)
{
    float M = (P.i * Q.i) + (P.j * Q.j) + (P.k * Q.k);
    return M;
}


int main()
{
    Vector P, Q;
    cout << "Enter the vector P i,j and k : ";
    cin >> P;
    cout << "Enter the vector Q i,j and k : ";
    cin >> Q;
    cout << "\nP = " << P << "\n";
    cout << "Q = " << Q << "\n";
    int R = P * Q;
    cout << "R = P * Q = " << R << "\n\n";
    return 0;
}


