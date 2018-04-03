//
//  main.cpp
//  calculator
//
//  Created by Tyler Struntz on 3/31/18.
//  Copyright © 2018 Tyler Struntz. All rights reserved.
//



//this is a new comment
// comment boi
#include <iostream>
#include <cstdlib>

void addNumbers(int a, int b);
void subtractNumbers(int a, int b);
void divideNumbers(int a, int b);
void multiplyNumbers(int a, int b);
void modulousNumbers(int a, int b);
//bool isPrime(int a);
//bool isEven(int a);


int main()
{
    int choice;
    int num1;
    int num2;
    std::cout << "Welcome to the calcultor\nFollow the menu to use it!\n\n\n";



    do{
        std::cout << "-----------------------\n";
        std::cout << "-    (1) Add          -\n";
        std::cout << "-    (2) Subtract     -\n";
        std::cout << "-    (3) Multiply     -\n";
        std::cout << "-    (4) Divide       -\n";
        std::cout << "-    (5) Modulous     -\n";
        std::cout << "-    (6) Prime        -\n";
        std::cout << "-    (7) Odd/Even     -\n";
        std::cout << "-    (8) Quit         -\n";
        std::cout << "-----------------------";
        std::cout << "\n- Please enter choice -\n";
        std::cin >> choice;


    switch (choice)
    {
        case 1:
            std::cout << "(1) Addition. Enter numer 1 then 2" << std::endl;
            std::cin >> num1;
            std::cin >> num2;
            addNumbers(num1, num2);
            break;

        case 2:
            std::cout << "(2) Subtraction. Enter number 1 then 2" << std::endl;
            std::cin >> num1;
            std::cin >> num2;
            subtractNumbers(num1, num2);
            break;

        case 3:
            std::cout << "(3) Multiplication. Enter number 1 then 2" << std::endl;
            std::cin >> num1;
            std::cin >> num2;
            multiplyNumbers(num1, num2);
            break;

        case 4:
            std::cout << "(4) Division. Enter number 1 then 2" << std::endl;
            std::cin >> num1;
            std::cin >> num2;
            divideNumbers(num1, num2);
            break;

        case 5:
            std::cout << "(5) Modulous. Enter number 1 then 2" << std::endl;
            std::cin >> num1;
            std::cin >> num2;
            modulousNumbers(num1, num2);
            break;

        case 6:
            std::cout << "(6) Prime. Enter number" << std::endl;
            std::cin >> num1;
            //isPrime(num1);
            break;

        case 7:
            std::cout << "(7) Odd or Even. Enter number" << std::endl;
            std::cin >> num1;
            //isEven(num1);
            break;

        case 8:
            std::cout << "(8) Quit." << std::endl;
            return 0;
            break;
    }
  }while(choice);

}



void addNumbers(int a, int b)
{
    int c = a + b;
    std::cout << c << std::endl;
}

void subtractNumbers(int a, int b)
{
    int c = a - b;
    std::cout << c << std::endl;
}

void divideNumbers(int a, int b)
{
    int c = a / b;
    std::cout << c << std::endl;
}

void multiplyNumbers(int a, int b)
{
    int c = a * b;
    std::cout << c << std::endl;
}

void modulousNumbers(int a, int b)
{
    int c = a % b;
    std::cout << c << std::endl;
}

//bool isPrime(int a)
//{
//    bool prime = false;
//        if (a <= 1)
//        {
//            prime = true;
//            std::cout << a << " is prime" << std::endl;
//        }
//    for (int i = 2; i < a/2; i++)
//    {
//        int c = a/2;
//        if(a == 0)
//        {
//            prime = true;
//            std::cout << a << " is prime" << std::endl;
//        }
//        else
//        {
//            std::cout << "number is not prime" << std::endl;
//        }
//    }
//
//}

//bool isEven(int a)
//{
//
//}





