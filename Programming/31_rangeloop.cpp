#include<iostream>
using namespace std ;

int main() {
    string s ; cout<<"Enter string" ; cin>>s ;
    bool unique = true ;
    int pos1 = 0 ;
    for(auto c1:s) {
        int pos2 = 0 ;
        for(auto c2:s) {
            if(c1 == c2 && pos1 != pos2) {
                unique = false ;
                break;
            }
            pos2 ++ ;
        }
        pos1++;
    }
    if(unique) {
        cout<<"S is unique" ;
    }
    else{
        cout<<"S isn't unique" ;
    }
}