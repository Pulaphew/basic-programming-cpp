#include<iostream>
using namespace std ;

void print2d(int a[][3],int row,int col) {
    for(int i = 0 ; i<row ; i++) {
        for(int j = 0 ; j<col ; j++) {
            cout<<a[i][j]<<" " ;
        }
        cout<<endl; 
    }
    cout<<endl ;
}

int main() {
    int a[2][3] = {{1,2,3},{4,5,6}} ;
    int b[][3] = {
        {7,8,9},
        {10,11,12},
        {13,14,15}
        } ;
    print2d(a,2,3) ;
    print2d(b,3,3) ;

    int c[3][2][3] = {
        {{1,2,3},{3,4,7}},
        {{5,6,8},{7,8,10}},
        {{9,10,1},{5,4,8}}
    } ;
}