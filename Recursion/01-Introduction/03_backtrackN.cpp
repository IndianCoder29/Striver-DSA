#include<iostream>
void backTrackN1(int i,int n){
    if(i < 1) return;
    backTrackN1(i-1,n);
    std::cout << i << " ";
}
void backTrackN2(int i,int n){
    if(i > n) return;
    backTrackN2(i+1,n);
    std::cout << i << " ";
}
int main(){
    int n = 5;
    // Calling function to print all numbers from 1 to n using recursion.
    backTrackN1(n,n);
    backTrackN2(1,n);
    return 0;
}