#include<iostream>

using namespace std;

int main(){
    cout<<true<<endl;
    cout<<false<<endl;
    cout<<(1<2)<<endl; //true
    cout<<(1>2)<<endl; //false
    cout<<"----"<<endl;

    bool a,b,c ;
    a=(1==2); //false
    b='a'!='b';//true
    c='1'<'a'; //char a = 97 true
    cout<<a<<" "<<b<<" "<<c<<endl;//false true true
    cout<<"----"<<endl;

    cout<<(a||b)<<endl;//true
    cout<<(a&&b)<<endl;//false
    cout<<(!a && b)<<endl;//true
    cout<<"----"<<endl;

    cout<<("a"=="a")<<endl;
    cout<<("a"<"aa")<<endl;
    cout<<("aa"<"ab")<<endl;
    cout<<("ab"<"aaa")<<endl;
    cout<<("ab"<"ac")<<endl;

}