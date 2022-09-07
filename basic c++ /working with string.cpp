//
//  working with string.cpp
//  basic c++ 2
//
//  Created by Sidi Yaya Konaté on 2022-09-07.
//

#include <iostream>
using namespace std;

int main() {
    
    
    string phrase = "Giraffe Academy";
    //               0123456
    
    
    cout <<"================== Function of string  ================ \n"<< endl;
    cout << "length of phrase " << phrase.length()<<endl;
    cout << "Access first letter " << phrase[0]<<endl;
    phrase [0] = 'B';
    cout <<"Change G by B en print: " << phrase << endl;
    cout << "Find Aca  in the phrase:  " << phrase.find("Aca") << endl;
    cout << phrase.substr(0, 3)<<endl;;
    cout <<"\n\n"<<endl;
    cout << "Konatech Academy" <<endl;
    cout << "Hello"  <<endl;
    
    
    return 0;
}
