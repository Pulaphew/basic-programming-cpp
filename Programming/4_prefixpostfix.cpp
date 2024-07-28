#include<iostream>

using namespace std;

int main(){
    int x = 5;
    int y = 0;
    int z = 0;
    cout<<"x before:"<<x<<endl;
    y = ++x; //xเพิ่มค่ามา1 แล่ว yมีค่าเท่ากับx หลังเปลี่ยนค่า
    cout<<"x after++:"<<x<<endl;
    x=5;
    z = x--; //xลดค่าไป1 แล้ว zมีค่าเท่ากับx ก่อนเปลี่ยนค่า
    cout<<"x after--:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"z:"<<z<<endl;

}