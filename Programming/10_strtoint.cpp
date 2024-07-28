#include<iostream>

using namespace std;

int main(){
    string s = "1234";
    int a;
    a = s[0]-'0';
    cout<<a<<endl;

    a = stoi(s);
    cout<<a+1000<<endl;

    string b = "A15F";
    int c ;
    c = stoi(b,0,16);
    cout<<c<<endl;

    string d = "101100";
    c = stoi(d,0,2);
    cout<<c<<endl;
    cout<<stoi("213")<<endl;
}