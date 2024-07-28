#include<iostream>
using namespace std ;

int main(){
    int n ; cout<<"Enter n:" ; cin>>n ;
    // i is row, j is column
    for(int i = 0 ; i<n ; i++) { //starting run point from 0 time
        //ex. row i = 2 , numspace j will have 2 times, if n was 4
        for(int j = 0 ; j<i ; j++) cout<<" " ;
        //n-i mean number of star in i row
        //ex. row i = 2 , star will have 2 times, if n was 4
        for(int j = 0 ; j<n-i ; j++) cout<<"*" ; 
        cout<<endl ;
    }
}
