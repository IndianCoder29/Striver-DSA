#include<iostream>

//Parameteried Way
void sumOfN(int sum, int i){
    if(i<1) {
        std::cout << sum << std::endl;
        return;
    }else{
        sumOfN(sum+i,i-1);
    }
}

///Functional Way
int sumOfN2(int n){
    if(n==0){
        return 0;
    }
    return n + sumOfN2(n-1);
}

int main(){
    int num = 6;
    std::cout << "Sum of " << num << " is : ";
    sumOfN(0,num);
    std::cout << std::endl;

    int result = sumOfN2(num);
    std::cout << "Sum of " << num << " is : " << result << std::endl;

    return 0;
}