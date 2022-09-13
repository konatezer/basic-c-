//
//  if  return max number.cpp
//  basic c++ 2
//
//  Created by Sidi Yaya Konaté on 2022-09-13.
//

#include <iostream>

using namespace std;



int getMax(int number1, int number2, int number3){
    int max;
    
    if(number2 <= number1 && number3 <= number1){
        max = number1;
    }else if(number1 <= number2 && number3 <= number2){
        max = number2;
    }else{
        max = number3;
    }
        
    
    return max;
    
}

int main()
{
    
    cout << "The max number is: "<< getMax(5,2, 5) <<endl;
    
    
    return 0;
}

