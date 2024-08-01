#include <iostream>
using namespace std ;

int main()
{
    //input to array
    int row = 5 , col = 4 ;
    int array[row][col] ;
    for(int i = 0 ; i<row ; i++) {
        for(int j = 0 ; j<col ; j++) {
            cin>>array[i][j] ;
        }
    }

    //add sumscore each row to new array
    int sumScore[5] ;
    int count = 0 ;
    for(int i = 0 ; i<row ; i++) {
      int score = 0 ;
        for(int j = 0 ; j<col ; j++) {
            score += array[i][j] ;
        }
        sumScore[count] = score ;
        count++ ;
    }

    int max = sumScore[0] ;
    int pos ;
    for(int i = 0 ; i<5 ; i++) {
      if(sumScore[i]>max){
          max = sumScore[i] ;
          pos = i+1 ;
      }  
    }  
    cout<<pos<<" "<<max ;
}