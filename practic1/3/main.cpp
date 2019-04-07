#include <iostream>

using namespace std;

void norm(double nX[], const int size) {
//    cout << "Введите значения массива: " << endl;
    double X[size];
    for(int i=0; i<size; i++) {
        X[i]=rand() % 10;
//        cin >> X[i];
    }
    
    double Xmin=X[0], Xmax=X[0];
    for(int i=0; i<size; i++) {
        if(X[i]<Xmin) Xmin=X[i];
        if(X[i]>Xmax) Xmax=X[i];
    }
    
    for(int i=0; i<size; i++) {
        nX[i]=(X[i]-Xmin)/(Xmax-Xmin);
    }
    
//    cout << "MAX and MIN: " << Xmax << " " << Xmin << endl;
}

int main() {
    int S;
    
    cout << "Введите размер массива: ";
    cin >> S;
    double *A = new double [S];
    
    norm(A, S);
    
    for(int i=0; i<S; i++) {
        cout << A[i] << endl;
    }
    
    delete[] A;
    return 0;
}