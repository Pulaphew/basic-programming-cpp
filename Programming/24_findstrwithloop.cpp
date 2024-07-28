#include<iostream>
using namespace std ;

int main()
{
    string hay,needle ;
    int b ;
    //getline คือการรับค่าstringต่อเนื่องจนกว่าจะกด Enter
    cout<<"Enter string: " ; getline(cin,hay) ; // รับประโยค
    cout<<"Enter a word: " ; getline(cin,needle) ;// คำที่ต้องการหา
    cout<<"Enter starting position: " ; cin>>b ;// ตำแหน่งที่ต้องการเริ่มหาคำ
    int pos;
    bool found = false ;
    while(b<hay.length()){ //ไล่จากตำแหน่งเริ่มต้นบนค่า string
        int i = 0;
        bool match = true ;
        while(i<needle.length()){ 
            if(needle[i] != hay[b+i]){ //
                match = false ;//ถ้าหาคำไม่เจอ match = false
                break ;
            }
            i++ ;
        }
    if(match){
        found = true ;
        pos = b ;
        break;
    }
    b++; //เนื่องจากหา
    }
    if(found){
        cout<<"Found at: "<<pos<<endl ;
    }
    else{
        cout<<"Can't find "<<needle<<" in \""<<hay<<"\""<<endl ;
    }

}