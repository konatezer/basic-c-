//
//  function.cpp
//  basic c++ 2
//
//  Created by Sidi Yaya Konaté on 2022-09-12.
//

#include <iostream>
using namespace std;


void helloUserFunction(){
    cout<< "Hello User" <<endl;
}


void helloUserWithNameFunction(string name, int age);

int main(){
    
    cout << "First" << endl;
    helloUserFunction();
    cout << "Last follow by function with parameter" << endl;
    
    helloUserWithNameFunction("Sidi", 32);
    helloUserWithNameFunction("Baba", 29);
    helloUserWithNameFunction("Aly", 22);
    
    
    return 0;
}


void helloUserWithNameFunction(string name, int age){
    cout<< "Hello " << name << " are you "<< age  <<endl;
}
