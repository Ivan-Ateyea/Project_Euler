// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include <iostream>
#include <vector>

int main(){
    // Initialize the first 2 cases of the fibonacci sqn
    std::vector<int> fib = {1, 2};

    //initialize output
    int sum = 0;
    
    //34th fibonacci number is > 4m. Should try to remove the trivial hard-coding. Can derive fib #s while fib<4m, use result as loop range
    for(int i = 1; i < 34; ++i){
        fib.push_back(fib[i-1] + fib[i]);
        
        if (fib[i] % 2 == 0){
            sum += fib[i];
        }
    }

    return sum;
}