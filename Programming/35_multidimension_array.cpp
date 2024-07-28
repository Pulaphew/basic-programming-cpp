#include <iostream>
using namespace std ;

int test3d(int a[][5][10],int row,int col,int deep) {
    int sum = 0 ;
    for(int i = 0 ; i<row ; i++) {
        for(int j = 0 ; j<col ; j++) {
            for(int k = 0 ; k<deep ; k++) {
                sum += a[i][j][k] ; //หาผลรวมของ สมาชิกทั้งหมดในarray ที่ตำแหน่ง {i,j,k}
            }
        }
    }
    //ไม่สามารถใช้ sizeof()กับ array มิติที่1 ได้ ข้อจำกัดแปลกในcpp
    cout<<"size a[][] "<< sizeof(a[1][1])<<endl ; //ขนาดbyteของมิติที่3อันเดียว == 4*10 = 40 byte
    cout<<"size a[] "<<sizeof(a[1])<<endl ; //ขนาดbyteมิติที่2และ3 == 4*5*10 = 200 byte
    return sum ;
}

int main() {
    int list1[4][5][10] ;
    int list2[100][5][10] ;
    cout<<test3d(list1,4,5,10)<<endl ; 
    cout<<test3d(list2,100,5,10)<<endl;
}
