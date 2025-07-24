#include<iostream>
int main(){
    int a,b,temp;
    std::cout<<"Enter the 1st no. :";
    std::cin>>a;
    std::cout<<"Enter the 2nd no. :";
    std::cin>>b;
    temp=a;
    a=b;
    b=temp;
    std::cout<<"After Swapping"<<std::endl;
    std::cout<<"your current 1st no. becomes :"<<a<<std::endl;
    std::cout<<"your current 2nd no. becomes :"<<b<<std::endl;
    std::cout<<a<<" + "<<b<<" = "<<a+b;

    return 0;
}