#include<iostream>
using namespace std ;

int main()
{
    int i = 0 ;
    int sum = 0 ;
    while(i++<10) {
        if(i%2 == 0) continue;
        sum += i ;
    }
    cout<<sum ;
}
