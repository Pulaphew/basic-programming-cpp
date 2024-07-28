#include<iostream>

using namespace std;
int main(){
    cout<<'a'<<endl;// a มีค่าใน ASCII คือ 97
    cout<<'a'+1<<endl;

    char c='a';
    c++; //เพิ่มไปหนึ่งหน่วย c จะเป็น98 ซึ่งมีค่าคือ 'b'
    cout<<c<<endl;
    cout<<c-1<<endl;
    c=100; //กำหนดค่าให้ c แต่ cยังเป็น char type อยู๋
    cout<<c<<endl;
}