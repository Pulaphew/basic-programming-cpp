#include<iostream>

using namespace std;

int main(){
    string s1 ="Pufa";
    string s2 ="Phewkham";
    string name1 = s1+s2; //s+s
    cout<<name1<<endl;
    string name2 = "Pufa"+s2; //l+s
    cout<<name2<<endl;
    string name3 = s1+"Phewkham"; //s+l
    cout<<name3<<endl;
    //string name4 = "Pufa"+"Phewkham"; //sting literal cannot concatation
}