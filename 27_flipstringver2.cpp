#include<iostream>
using namespace std ;

int main()
{
    string s ; cin>>s;
    int i = 0 ;
    while(i<s.length()/2) // ใช้ swap() จะเป็นการจับคู่สลับกัน จึงใช้ความยาวแค่ครึ่งนึงพอ
    {
        swap(s[i],s[s.length() - i - 1]); //swap(a,b) คือการสลับค่าaไปb อันนี้คือสลับค่าตำแหน่ง
        i++ ;
    }
    cout<<s<<endl ;
}
 //a.length()-1 คือตำแหน่งเมื่อนำถอยหลังกลับ หรือ นับแต่ตัวท้าย 1 ตำแหน่ง
// i คือตำแหน่งเทียบเมื่อนับจากข้างหลัง