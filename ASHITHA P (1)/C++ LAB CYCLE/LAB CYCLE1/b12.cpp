#include<iostream>
using namespace std ;

class complex{
    float Real ;
    float imag ;
    public:
    void getnums(){
        cout << "Enter real part\n" ;
        cin >> Real ;
        cout << "Enter imaginary part\n" ;
        cin >> imag ;
    }
    void show(void){
        if (imag > 0 ){
            cout << Real << " + "<< imag << " i" "\n";
        }
        else {cout << Real << " - "<<(-1)* imag <<" i" "\n";}
        
    }
    friend complex add(complex ,complex) ;
};

complex add(complex A , complex B){
    complex C ;
    C.Real = A.Real + B.Real ;
    C.imag = A.imag + B.imag ;
    return C ;
}

int main(){
    complex x,y,z ;
    cout << "Enter x: \n" ;
    x.getnums();
    cout << "Enter y: \n" ;
    y.getnums();
    z = add(x,y) ;
    cout << "x = ";
    x.show();
    cout << "y = ";
    y.show();
    cout << "x + y = ";
    z.show();
}


