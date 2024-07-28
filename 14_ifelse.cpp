#include <iostream>

using namespace std;

int main(){
    string text; int position;
    cout<<"Enter a string:"<<endl; cin>>text;
    cout<<"Enter a position that contain a letter 'z'"<<endl; cin>>position;

    if(position>=0 && position<text.length()){
        if(text[position]=='z'){
            cout<<"correct"<<endl;
        }
        else{
            cout<<"wrong try again"<<endl;
        }
    }
    else{
        cout<<"position should more than or equal zero"<<endl;
    }
    
}