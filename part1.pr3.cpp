
#include<iostream>
using namespace std;
const int N = 4;
void multiplyMatrix(const double a[][N], const double b[][N], double c[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            for(int k=1; k<N; k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
        cout << c[i][j] << "\t";
    }
        cout << endl;
        }

}
int main(){
   double m1[N][N]={
    {1.0, 2.0, 3.0, 4.0},
        {5.0, 6.0, 7.0, 8.0},
{9.0, 10.0, 11.0, 12.0},
{13.0, 14.0, 15.0, 16.0}
};

    double m2[N][N]{
    {0.5, 1.5, 2.5, 3.5},
{4.5, 5.5, 6.5, 7.5},
{8.5, 9.5, 10.5, 11.5},
{12.5, 13.5, 14.5, 15.5}
    };
    double c[N][N]={0};
    multiplyMatrix(m1,m2,c);
return 0;
}
