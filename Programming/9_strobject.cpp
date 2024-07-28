#include<iostream>

using namespace std;

int main(){
    string name = "Pufa";
    cout<<"lenght is"<<name.length()<<endl;
    cout<<"first char is"<<name[0]<<endl;
    cout<<"last char is"<<name[name.length()-1]<<endl;

    cout<<name<<endl;
    name[1] = '4' ; //เราสามารถเปลี่ยนcharในตำแหน่ง[1]ได้
    cout<<name<<endl;
    name[2]++; //เราสามารถเพิ่มchar[2]มาหนึ่งหน่วย
    cout<<name<<endl;
    name[3] = 90; //เราสามารถเปลี่ยนchar[3]ให้เป็นตัวอักษรในระบบASCIIได้
    cout<<name<<endl;
    int x = name[0];//หาว่าchar[0]มีค่าเท่าไหร่ในระบบASCII
    cout<<x<<endl;

    //name == P4gz
    cout<<name.substr(0,2)<<endl; //นับตั้งแต่่[0] 2ตัว
    cout<<name.substr(1)<<endl; //นับตั่งแต่[1] ถึงตัวสุดท้าย
    cout<<name.substr(1,999)<<endl; //นับตั่งแต่[1] ถึงตัวสุดท้าย
    cout<<name.substr(1,3).length()<<endl; //ใช้functionซ้อนกันได้

}