#include<iostream>

using namespace std;

int main(){
    string sentence = "I have a girlfriend"; //ตำแหน่ง[]นับรวมช่องว่างด้วย
    cout<<sentence.find("girlfriend")<<endl;
    cout<<sentence.find("boyfriend")<<endl;

    if (sentence.find("girlfriend")==9)
    {
        cout<<"we found that word"<<endl;
    }
    if (sentence.find("boyfriend")==string::npos)
    {
        cout<<"we dont see that word"<<endl;
    }
    
}