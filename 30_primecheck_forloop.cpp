#include<iostream>
#include<cmath>
using namespace std ;

int main() {
    int n ; cout<<"Enter number: " ; cin>>n ;
    bool prime = true ;
    for(int div = 2 ; div<=sqrt(n) ; div++) {
        if(n%div == 0) {
            prime = false ; 
            break ;
        }
    }
    if(prime) {
        cout<<n<<" is prime number" ;
    }
    else{
        cout<<n<<" is not prime number" ;
    }
}