#include<iostream>
using namespace std ;

const int n = 10; //ค่า n ไม่สามารถเปลี่ยนได้

int main(){
    int a[n] ;
    for(int i = 0 ; i<n ; i++) {
        a[i] = 1 ;
    }
    //sizeof() คือ การบอกขนาดของตัวแปร ว่ามีขนาดเท่่าไหร่
    //ตอบเป็นจำนวน bytes
    //sizeof(int) คือขนาดของแต่ละช่องใน array
    int b[10] ;
    for(int i = 0 ; i<sizeof(b) / sizeof(int) ; i++) {
        b[i] = 2 ;
    }

    cout<<"Size of a "<<sizeof(a)<<endl ;
    cout<<"Size of b "<<sizeof(b)<<endl ;
    cout<<"Size of int "<<sizeof(int)<<endl ;
    cout<<"Size of a[i]"<<sizeof(a[1])<<endl ;
}