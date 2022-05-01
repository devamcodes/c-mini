/* scope:- Create simple program for c++ syntax and learn how to use the code blocks compiler*/
#include <iostream>
using namespace std;
int main(){
    int num1, num2, sum,op;

    cout<<"This a simple calculator using c++ language "/n"Enter any two numbers one by one:";
    cin>>num1>>num2;
    cout<<"There are 4 operations in this calculator->"/n"Enter the respective number"/n<<"1. Addition"/n"2. Subtraction"/n"3. Multiplication"/n"4. Division";
    cin>>"Operation">>op;
    if(op = 1){
        sum = num1+num2;
        cout<<"The addition of the given numbers is "<<sum;
    }
    else if(op = 2){
        sum = num1 - num2;
        cout<<"The subtraction of the given numbers is"<<sum;
    }
    else if(op = 3){
        sum = num1 * num2;
        cout<<"The multiplication of the given numbers is"<<sum;
    }
    else if(op = 4){
        sum = num1 / num2;
        cout<<"The division of the given numbers is"<<sum;
    }
    else{
        cout<<"Oop!! an error occurred... try again."
    }
}
