//
//  getting user input.cpp
//  basic c++ 2
//
//  Created by Sidi Yaya Konaté on 2022-09-07.
//

#include <iostream>
using namespace std;



int main ()
{
  
    
    // for string you need to use getline() function
    string name ;
    cout << "Enter your name: ";
    getline(cin, name);
    cout<< "Your name is:  "<< name <<endl;
    
    
    // You can use anye type of data expect string
    int age;
    cout << "Enter your age: ";
    cin>> age;
    cout<< "You are "<< age << " years old"<<endl;
    
    
    
    return 0;
}

