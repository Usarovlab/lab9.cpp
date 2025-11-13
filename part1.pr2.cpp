
#include<iostream>
using namespace std;
const int n = 4;
double sumMajorDiagonal(const double m[][n]){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + m[i][i];
    }
    return sum;
}

int main(){
    double  sum=0;
    double m[n][n]={
        {1.0, 2.0, 3.0, 4.0},
        {5.0, 6.0, 7.0, 8.0},
        {9.0, 10.0, 11.0, 12.0},
        {13.0, 14.0, 15.0, 16.0}
    };

    sum = sumMajorDiagonal(m);
    cout << "Output: " << sum;
    return 0;
}
