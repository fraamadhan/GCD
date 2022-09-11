#include <iostream>

int remain, result;

int greatest_common_div(int num1,int num2){
    
    //Using Euclidean Algorithm
    // m = nq + r


    remain = num1 % num2;

    num1 = num2;

    num2 = remain;

    if(num2 == 0){
        result = num1;
    }
    else{
        return greatest_common_div(num1, num2);
    }

    return result;
}

int main(){
    int num1, num2;

    std::cout << "=== PROGRAM TO FIND THE GCC FROM TWO NUMBER===" << std::endl;

    std::cout << "Input two number  :" << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "The GCC of " << num1 << " and " << num2 << " is " << greatest_common_div(num1, num2) << std::endl;
}

