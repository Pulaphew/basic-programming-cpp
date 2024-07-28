#include<iostream>
using namespace std ;

//ในกรณีที่เราทำพื้นที่จัดเก็บข้อมูล เราจะมีจำนวนช่องที่เก็บขนาดต่างๆ
// 100*50*4 = 20000 byte or 20Kb
const int max_row = 100 ;
const int max_col = 50 ;

int main() {

    //ขนาดพื้นที่ทั้งหมด
    //สร้าง matrix ขนาด 20 Kb ที่มีเลข 0, 5000 ช่อง
    int matrix[max_row][max_col] = {0} ;
    int n,m ;

    //ระบุจำนวนช่องที่ต้องการเก็บข้อมูล ขนาด n*m*4 byte
    cout<<"Enter row: "<<endl ; cin>>n ;
    cout<<"Enter col: "<<endl ; cin>>m ;

    //ถ้าระบุเกินมาให้บอกไป แล้วคืนค่า0 สิ้นสุดการทำงานโปรแกรม
    if(n>max_row || m>max_col) {
        cout<<"Size to large" ;
        return 0 ;
    }

    for(int i = 0 ; i<n ; i++) {
        //ระบุสมาชิกใน matrix ขนาด n x m
        cout<<"Enter "<< m <<" value of row "<< n <<": " <<endl ;
        for(int j = 0 ; j<m ; j++) {
            cin>>matrix[i][j] ;
        }
    }

    cout<<endl ;
    
    for(int i = 0 ; i<n ; i++) {
        for(int j = 0 ; j<m ; j++) {
            cout<<matrix[i][j]<<" " ;
        }
        cout<<endl ;
    }
}