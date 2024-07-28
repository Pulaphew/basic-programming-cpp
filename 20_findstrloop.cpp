#include<iostream>
using namespace std;

int main()
{
    string text,word; //ข้อความและคำ
    char c;
    cout<<"Enter text:"; cin>>text ;
    cout<<"Enter word:"; cin>>word ;
    //กำหนดให้ c คือตัวอักษรของคำใน text โดยนับเป็นตำแหน่ง[0]
    //ถ้าไปเจอตัวอักษรเดียวกันแต่เป็นคนละคำกัน จะทำให้โปรแกรมผิดพลาด
    c = word[0] ; 
    int i = 0 , pos; //pos คือตำแหน่งของตัวอักษรคำนั้น
    bool found = false ;
    while(i<text.length())//ไล่ตำแหน่งหาใน text
    {
        if((text[i] == c) && (!found)) //ถ้าตัวอักษรในตำแหน่ง i นั้นเป็นตัวเดียวกับ c ของคำนั้น
        {
            found = true ; //ให้ found กลายเป็น True
            pos = i; //pos คือตำแหน่ง i
        }
    i++ ; //ไล่เรื่อยๆจน while เป็น false
    }
    if(found) //found เป็น True
    {
        cout<<"Found "<<c<<"at position "<<pos<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
}