#include<iostream>
using namespace std ;

int main()
{
    string s,s2 ;
    cin>>s;
    int i = 0;
    while(i<s.length()){
        s2 = s2 + s[s.length() - i - 1] ; //a.length()-1 คือตำแหน่งเมื่อนำถอยหลังกลับ หรือ นับแต่ตัวท้าย 1 ตำแหน่ง
        i++ ; // i คือตำแหน่งเทียบเมื่อนับจากข้างหลัง
    }
    cout<<s2<<endl;
}