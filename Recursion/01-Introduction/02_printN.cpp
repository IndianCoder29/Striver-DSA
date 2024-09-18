#include<iostream>
void printN1(int i,int n){
    if(i>n) return;
    std::cout<<i<<" ";
    printN1(i+1,n);
}
void printN2(int i,int n){
    if(n<i) return;
    std::cout<<n<<" ";
    printN2(i,n-1);
}
int main(){
    int n = 5;
    printN1(1,n);
    std::cout << std::endl;
    printN2(1,n);
    return 0;
}