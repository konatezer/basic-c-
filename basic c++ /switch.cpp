//
//  switch.cpp
//  basic c++ 2
//
//  Created by Sidi Yaya Konaté on 2022-09-13.
//

#include <iostream>

using namespace std;



string getDayOfWeek(int dayNum){
    string dayName;
    
    switch(dayNum){
        case 0:
            dayName =  "Sunday";
            break;
        case 1:
            dayName =  "Monday";
            break;
        case 2:
            dayName =  "Tuesday";
            break;
        case 3:
            dayName =  "Wednesday";
            break;
        case 4:
            dayName =  "Thursday";
            break;
        case 5:
            dayName =  "Friday";
            break;
        case 6:
            dayName =  "Saturday";
            break;
        default:
            dayName =  "invalid day";
            break;
    
    }
    
    
    return dayName;
}



int main(){
    
    int day = 5;
    
    cout << " The" << day << " is : " << getDayOfWeek(day) << endl;
    
    return 0;
}
