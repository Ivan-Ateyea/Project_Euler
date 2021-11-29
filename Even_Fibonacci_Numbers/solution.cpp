#include <iostream>
#include <vector>

int main(){
    // Initialize the first 2 cases of the fibonacci sqn
    std::vector<int> fib = {1, 2};

    //initialize output
    int sum = 0;
    
    //34th fibonacci number is > 4m. Could try to improve this to be less hard-coded
    for(int i = 1; i < 34; ++i){
        fib.push_back(fib[i-1] + fib[i]);
        
        if (fib[i] % 2 == 0){
            sum += fib[i];
        }
    }

    return sum;
}