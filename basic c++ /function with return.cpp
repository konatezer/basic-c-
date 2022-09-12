//
//  function with return.cpp
//  basic c++ 2
//
//  Created by Sidi Yaya Konaté on 2022-09-12.


#include <iostream>
using namespace std;




double cube (double number){
    double result = number* number* number;
    
    return result;
}




int main(){
    

    cout<<"The cube of 3 : "<< cube(3)<<endl;
    
    return 0;
}

