//
//  If statements.cpp
//  basic c++ 2
//
//  Created by Sidi Yaya Konaté on 2022-09-12.
//

#include <iostream>

using namespace std;


int main(){
    
    bool isMale = false;
    bool isTall = false;
    
    
    if (isMale &&  isTall){
        cout << "You are a tall male"<< endl;
    }else if(isMale && !isTall)
    {
        cout << "You are a short male"<< endl;
    }else if(!isMale && isTall)
    {
        cout << "You are tall but not male"<< endl;
    }else {
        cout << "You are not male and not tall"<< endl;
}
    
}
