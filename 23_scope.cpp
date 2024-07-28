#include<iostream>
using namespace std ;

int main()
{
    int r,c ; cout<<"Enter Row and Column:" ; cin>>r>>c ;
    int i = 0;
    while(i<r){
        cout<<"Row "<<i<<": " ;
        int j = 0;
        while(j<c){
            cout<<i ; //แสดงค่า i=r เริ่มแถวที่0
            int i = 0; // ให้ i เป็น 0 ในblockนี้
            cout<<"("<<i<<")" ; //แสดงค่า i=0 ในแถว r
            j++ ;
        }
        cout<<endl;
        i++;
    }
}