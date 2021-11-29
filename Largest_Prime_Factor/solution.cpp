/* 

Problem: What is the largest prime factor of the number 600851475143?
Thoughts: 
    - brute force by traditional prime factorization. 
 */
 
#include <iostream>

int main(){
    long long int num = 600851475143;

    // Loop checks for all values i | num
    // When i | num is true, num is reassigned to the potential prime factor
    // output is the last number i such that i | num is true
    // in the event that i | num is never true, num is a prime number. 
    for (long int i = 2; i < num; i++){
        while (num % i == 0){
            num /= i;
        }
    }
    return num;
}