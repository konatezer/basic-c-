//
//  calculator.cpp
//  basic c++ 2
//
//  Created by Sidi Yaya Konaté on 2022-09-13.
//

#include <iostream>

using namespace std;


int main(){
    
    int number1, number2;
    char op;
    
    
    cout <<"Enter the first number: ";
    cin>>number1;
    cout <<"Enter the operator: ";
    cin>>op;
    cout <<"Enter the second number: ";
    cin>>number2;
    
    
    int result;
    
    if(op == '+'){
        result = number1 + number2;
    }else if(op == '-'){
        result = number1 - number2;
    }else if(op == '*'){
        result = number1 * number2;
    }else if(op == '/'){
        result = number1 / number2;
    }else{
        cout <<"Invalid operator "<<endl;
    }
    
    
    cout << number1 << " " <<op<< " " << number2 << " = " << result <<endl;
    
    return 0;
}
