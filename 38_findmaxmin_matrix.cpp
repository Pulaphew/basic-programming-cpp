#include<iostream>
using namespace std ;

int find_max(int a[][4],int n,int m) {
    int max_pos = 0 ;
    for(int i = 0; i<n ; i++){
        for(int j = 0 ; j<m ; j++)
            if(a[i][j]>a[max_pos][max_pos]){
                a[max_pos][max_pos] = a[i][j] ;
            }
    }
    return a[max_pos][max_pos] ;
}

int find_min(int a[][4],int n,int m) {
    int min_pos = 0 ;
    for(int i = 0; i<n ; i++){
        for(int j = 0 ; j<m ; j++)
            if(a[i][j]<a[min_pos][min_pos]){
                a[min_pos][min_pos] = a[i][j] ;
            }
    }
    return a[min_pos][min_pos] ;
}

int main(){
    int matrix[4][4] = {
        {10,5,72,50},
        {9,45,78,33},
        {21,54,61,23},
        {49,56,71,55},
    } ;

    cout<<find_max(matrix,4,4)<<endl ;
    cout<<find_min(matrix,4,4)<<endl ;
}