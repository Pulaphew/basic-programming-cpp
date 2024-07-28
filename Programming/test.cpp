#include<iostream>
using namespace std ;

//งงฉิบหาย มันคือ ingredient กระจายค่า S B เข้าไปใน array
//สร้างfunction ขึ้นมา
int find_min_different(int matrix[][2] , int N , int index , int S , int B) {

    //เราต้องนำค่าใน matrix หาค่าของ S และ B ที่เมื่อจับมาลบกันแล้วได้ผลต่างน้อยสุดที่เป็นไปได้ คือ 1
    //ปกติเราเริ่ม index = 0 จากนั้นกำหนดให้ index+1 ดังนั้นถ้า index = N แปลว่าเราไล่ดูทุกค่าในarrayแล้วจึง return ค่าผลต่างกลับfunction
    if(index == N) {
        //คือการหาค่าผลต่าง
        return abs(S-B) ;
    }

    //เราจะเปลี่ยนค่าไปเรื่อย โดย index จะเพิ่มขึ้นที่ละ 1 และ แบ่งเป็น 2 กรณี

    //include คือ กรณีที่เราหยิบทุกค่าใน array มาคำนวณหาค่า S B แล้วทำให้ค่า S B เปลี่ยนค่าไป
    int include = find_min_different(matrix , N , index+1 , S * matrix[index][0] , B + matrix[index][1]) ;
    //exclude คือ กรณีที่เราข้ามกรณี index = 0 ทำให้ตอนจบครั้งแรก index = 0 จะได้ S = 1, B = 0
    //พอมาครั้ง index ต่อไป exclude จะนำค่า S B ที่เปลี่ยนไปของ include มาเก็บไว้ มาเป็นค่าปัจจุบัน
    int exclude = find_min_different(matrix , N , index+1 , S , B) ;
    
    //เทียบกันอันไหนมีค่าน้อยสุด แล้วคืนค่ากลับไป  
    return min(include,exclude) ;
}

int main(){
    int N ; cin>>N ;
    
    if(N<1 || N>10) {
        return 0 ;
    }

    int matrix[N][2] ;
    for(int i = 0 ; i<N ; i++) {
        for(int j = 0 ; j<2 ; j++) {
            cin>>matrix[i][j] ;
        }
    }
    // i = 0, S = 1, B = 0
    int mindiff = find_min_different(matrix,N,0,1,0) ; //(matrix,N,index,S,B)
    cout<<mindiff ;
    return 0 ;
    
}
    