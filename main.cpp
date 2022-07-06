/* made by warrior714 */

#include <iostream>
#include <sstream>
using namespace std ;

int getinput(){
    string number;
    bool isdigit;
    int actual_number;
    while(1){
    cout << "Please enter a positive integer: " << endl;
    getline(cin, number);
    try{
        actual_number = stoi(number);
    }catch(const invalid_argument& ia){
    actual_number = 0;
    }
    if (actual_number < 0 || actual_number == 0){
         cout << "\nInvalid input." << endl;
    }
    else if(actual_number > 0){
         break;
    }
} 
return actual_number;
}

int main(){
    int prime_check = getinput();
    bool is_prime = true;
    int i;
    if (prime_check == 0 || prime_check == 1){
     is_prime = false;
    }else{
        for(i = 2; i <= prime_check/2; i++){
            if(prime_check % i == 0){
               is_prime = false;
                break; 
            }
        }
    }
    if(is_prime){
    cout << "The number: " << prime_check << " is a prime number." << endl;
    }else if(!is_prime){
    cout << "The number: " << prime_check << " is not a prime number." << endl;
    }
    return 0;
}
