#include <iostream>
#include <string>

int sum(int firstNum, int secNum){
    int sum = firstNum + secNum;
    return sum;
}

int mult(int firstNum, int secNum){
    return firstNum * secNum;
}

//Entry point for program
int main(){

    /*
    
    //Prints Hello World!
    int first_num;
    int sec_num {7};

    //Output
    std::cout << "Enter 2 numbers: " << std::endl;
    //Input from terminal
    std::cin >> first_num >> sec_num;

    std::cout << "Sum = " << sum(first_num,sec_num) << 
    " and Multiplication = " << mult(first_num,sec_num) << std::endl;

    */

    //Error
    //std::cerr << "std::cerr output : Something went wrong" << std::endl;

    //Log Message
    //std::clog << "std::clog output : This is a log message" << std::endl;

    std::string full_name;
    int age;

    std::cout << "Enter your name and age" << std::endl;

    std::getline(std::cin,full_name);

    std::cin >> age;

    std::cout << "Your name is " << full_name << " and you are " 
    << age << " years old." << std::endl;



    return 0;
}