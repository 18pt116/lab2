#include <iostream>

using namespace std;

void norm(double X[], const int size) {
    
    double Xmin=X[0], Xmax=X[0];
    for(int i=0; i<size; i++) {
        if(X[i]<Xmin) Xmin=X[i];
        if(X[i]>Xmax) Xmax=X[i];
    }
    
    for(int i=0; i<size; i++) {
        X[i]=(X[i]-Xmin)/(Xmax-Xmin);
    }
}

int main() {
    int S;
    
    cout << "Введите размер массива: ";
    cin >> S;
    double *A = new double [S];
    
    cout << "Введите значения массива: " << endl;
    for(int i=0; i<S; i++) {
        cin >> A[i];
    }
    
    norm(A, S);
    
    for(int i=0; i<S; i++) {
        cout << A[i] << endl;
    }
    
    delete[] A;
    return 0;
}