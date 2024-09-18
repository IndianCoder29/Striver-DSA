// Function calling itself, until a condition is met

// TC n SC : O(n)

#include<iostream>
void printName(int i,int n){
    if(i>n){
        return ;
    }
    std::cout << "Bajrang " << std::endl;
    printName(i+1,n);
}
int main(){
    int num = 5;
    printName(1,num);
    return 0;
}