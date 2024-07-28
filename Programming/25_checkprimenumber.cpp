#include<iostream>

using namespace std ;

int main()
{
    int n ; cout<<"Enter number for check: " ; cin>>n ;
    int d = 2 ;// จำนวนเฉพาะไม่มีอะไรหารลงตัวนอกจาก1และตัวมันเอง
    while (d*d<=n) // d*d เพราะ เกิดจาก sqrt(n) = d โดย (d,d) เป็นคู่ตัวประกอบของ n ที่มากที่สุด
    {
        if(n%d == 0){ //หารลงตัว
            cout<<n<<" is not prime number"<<endl ;
            break;
        }

        else{
            cout<<n<<" is prime number"<<endl ;
            break;
        }
        d++ ;
    }
    
}