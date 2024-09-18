#include<iostream>

int factN1(int fact,int n){
    if(n==0) {
        std::cout << "Factorial : " << fact << std::endl;
        return 0;
    }
    fact = fact*n;
    factN1(fact,n-1);
    return fact;
}

int factN2(int n){
    if(n==1){
        return 1 ;
    }
    return n*factN2(n-1);
}

int main(){
    int num = 4;
    factN1(1,num);
    std::cout << "Factorial : " << factN2(num) << std::endl;
    return 0;
}