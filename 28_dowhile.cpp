#include<iostream>
using namespace std ;

int main() {
    int n ;
    do //ทำ do ภายใน {} ก่อนทำ loop
    {
        cout<<"Enter n: " ; cin>>n ;
        int row = 0 ;
        while(row++ < n) {
            int col = row - n ; //จำนวนช่องว่างในแต่ละ row
            while(col--) cout<<" " ;
            col = 2*row-1 ; //จำนวนดาวในแต่ละ row
            while(col--) cout<<"*" ;
            cout<<endl ;
        }
    } while (n != -1);
}