#include<iostream>
using namespace std ;

int get_max(int a[] , int n){
    int max_pos = 0 ;
    for(int i = 0 ; i<n ; i++) {
        if(a[max_pos]<a[i]) {
            a[max_pos] = a[i] ;
        }
    }
    return a[max_pos] ; //คืนค่ากลับ funtion
}

int main() {
    int a[5] = {5,7,8,4,6} ;
    cout<<get_max(a,5) ;
}