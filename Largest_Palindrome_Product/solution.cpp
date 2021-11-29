// Find the largest palindrome made from the product of two 3-digit numbers
// First consideration: how to check if a number is a palindrome?
//      - reverse the number, check if reversed_num == num
// Brute force solution: Check every product from 100:999. Store largest palindrome for output
#include <iostream>

// Function to reverse an integer. 
// This will be useful in determining if the product of 2 3-digit numbers is a palindrome
long int reverseNum(int num){
    long int reversed_num = 0;
    while (num > 0){
        reversed_num = reversed_num*10 + num%10;
        num = num/10;
    }
    return reversed_num;
}

// function to check if a number is a palindrome
// Note: consider merging these two helper functions. Could make code cleaner
bool isPalindrome(int num){
    int num2 = reverseNum(num);
    return (num == num2) ? true : false;
}

int main(){

    int largest_palindrome = 0;
    // Check the product of every number 100 - 999
    for (int i = 999; i >=100; i--){
        for(int j = i; j >=100; j--){

            int multiple = i * j;

            if(isPalindrome(multiple) && multiple > largest_palindrome){
                largest_palindrome = multiple;
            }
        }

    }
    return largest_palindrome;
}