#include<iostream>
int  main(){
    int num1=5; //101

    //left_shift (<<b): shifting the bits to the left by adding 'b'no.of 0s to the right OR multiplies the value with 2^b 
    std::cout<<(num1<<1)<<'\n'; // 101 << 1 = 1010 and 1010=10 (5*2=10) 

    //right_shift (>>b): shifting the bits to the right by 'b'no.of position but ones a bit crosses the end then it will not start from the begining again. OR divides the value by 2^b 
    std::cout<<(num1>>1)<<'\n'; // 101 >> 1 = 010 and 010=2 (5/2=2.5~2)

    //bitwise_complement: it just changes 0 -> 1 and 1 -> 0 and it will change all the possible bits
    // if n is the value than ~n = -(n+1) 
    std::cout<<(~num1)<<'\n'; // ~5 = -(5+1) = -6

    int num2=8; //1000
    std::cout<<(num2&num1)<<'\n'; //1000 & 0101 = 0000 = 0
    std::cout<<(num2|num1)<<'\n'; //1000 | 0101 = 1101 = 13
    std::cout<<(num1^num2)<<'\n'; //1000 ^ 0101 = 1101 =13

return 0;
}