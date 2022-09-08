//
//  Building Mad Libs.cpp
//  basic c++ 2
//
//  Created by Sidi Yaya Konaté on 2022-09-07.
// Mad libs



#include <iostream>>
using namespace std;

int main(){
    
    
    string color, pluralNoun, celebrity;
    
    cout<< "enter a color: ";
    getline(cin, color);
    cout<< "enter a plural noun: ";
    getline(cin, pluralNoun);
    cout<< "enter a celebrity: ";
    getline(cin, celebrity);
    
    cout << "Roses are "<<color<< endl ;
    cout << pluralNoun<<" are blue" << endl;
    cout << "I love "<<celebrity  << endl;
    
    return 0;
}
