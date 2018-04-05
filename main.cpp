//Justin Kuta, Vochia Thoj, Nathan Carlson, Site Yin, Tyler Struntz
//
//3.31.18
//
//This program will simulate a calculator. a menu will be displayed
//for the user to pick numerous option from. when the user picks
//an option the function will ask for the required input then display
//the return of the function. the program will run until the user
//decides to quit.
//
// void Menu()
// brief: menu will display what options the user can choose from.
// pre: none
// post: none
//
// addNumbers()
// brief: get 2 inputs, check if they are numbers, then add the two numbers and print result
// pre: none
// post: none
//
// subtractNumbers()
// brief: get 2 inputs, check if they are numbers, then subtracr the two numbers and print result
// pre: none
// post: none
//
// divideNumbers()
// brief: get 2 inputs, check if they are numbers, then divide the two numbers and print result
// pre: none
// post: none
//
// multiplyNumbers()
// brief: get 2 inputs, check if they are numbers, then multiply the two numbers and print result
// pre: none
// post: none
//
// modulousNumbers()
// brief: get 2 inputs, check if they are integers, then perform num1 mod num2 and print result
// pre: none
// post: none
//
// isPrime()
// brief: get an input, check if it is an int, then check if the number is prime and print result
// pre: none
// post: none
//
// oddOrEven()
// brief: get an input, check if the number is even or odd, and print result
// pre: none
// post: none
//
// validateNumber()
// brief: checks if there was an error in inputting a number. If there was, it clears cin,
//        ignores the inputted text, and returns false. If there was no error, return true
// pre: an std::cin was called before the function is declared
// post: a boolean determining if input was valid
//
// validateInt()
// brief: checks if there was an error in inputting a number. If there was, it clears cin,
//        ignores the inputted text, and returns false. If there was no error, initialize another int
//        variable and set it equal to the number passed. Check if those two are equal. If they are,
//        return true, if not, return false
// pre: an std::cin was called before the function is declared
// post: a boolean determining if input was valid
#include <iostream>
#include <cstdlib>

void Menu();
void addNumbers();
void subtractNumbers();
void divideNumbers();
void multiplyNumbers();
void modulousNumbers();
void isPrime();
void oddOrEven();
bool validateNumber();
bool validateInt(double);


int main()
{
    int choice;
    std::cout << "Welcome to the calcultor\nFollow the menu to use it!\n\n\n";

    do{
      Menu();
      std::cin >> choice;
      while(!validateInt(choice))
      {
        std::cin >> choice;
      }

      switch (choice)
      {
        case 1:
            addNumbers();
            break;

        case 2:
            subtractNumbers();
            break;

        case 3:
            multiplyNumbers();
            break;

        case 4:
            divideNumbers();
            break;

        case 5:
            modulousNumbers();
            break;

        case 6:
            isPrime();
            break;

        case 7:
            oddOrEven();
            break;

        case 8:
            std::cout << "(8) Quit." << std::endl;
            break;

        default:
            std::cout << "Invalid choice! Please re-enter." << std::endl;
            break;
    }
  }while(choice != 8);
  return 0;
}

void Menu()
{
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
}

void addNumbers()
{
    double num1, num2, c;
    std::cout << "(1) Addition. Enter numer 1 then 2" << std::endl;

    std::cin >> num1;
    while(!validateNumber())
    {
      std::cin >> num1;
    }

    std::cin >> num2;
    while(!validateNumber())
    {
      std::cin >> num2;
    }
    c = num1 + num2;
    std::cout << c << std::endl;
}

void subtractNumbers()
{
    double num1, num2, c;
    std::cout << "(2) Subtraction. Enter number 1 then 2" << std::endl;

    std::cin >> num1;
    while(!validateNumber())
    {
      std::cin >> num1;
    }

    std::cin >> num2;
    while(!validateNumber())
    {
      std::cin >> num2;
    }

    c = num1 - num2;
    std::cout << c << std::endl;
}

void multiplyNumbers()
{
    double num1, num2, c;
    std::cout << "(3) Multiplication. Enter number 1 then 2" << std::endl;

    std::cin >> num1;
    while(!validateNumber())
    {
      std::cin >> num1;
    }

    std::cin >> num2;
    while(!validateNumber())
    {
      std::cin >> num2;
    }

    c = num1 * num2;
    std::cout << c << std::endl;
}

void divideNumbers()
{
    double num1, num2, c;
    std::cout << "(4) Division. Enter number 1 then 2" << std::endl;

    std::cin >> num1;
    while(!validateNumber())
    {
      std::cin >> num1;
    }

    std::cin >> num2;
    while(!validateNumber())
    {
      std::cin >> num2;
    }

    c = num1 / num2;
    std::cout << c << std::endl;
}

void modulousNumbers()
{
    double numA, numB;
    int c;
    std::cout << "(5) Modulous. Enter number 1 then 2" << std::endl;

    std::cin >> numA;
    while(!validateInt(numA))
    {
      std::cin >> numA;
    }
    int num1 = numA;

    std::cin >> numB;
    while(!validateInt(numB))
    {
      std::cin >> numB;
    }
    int num2 = numB;

    c = num1 % num2;
    std::cout << c << std::endl;
}

void isPrime()
{
    double numA;
    bool isPrime = true;
    std::cout << "(6) Prime. Enter number" << std::endl;

    std::cin >> numA;
    while(!validateInt(numA))
    {
      std::cin >> numA;
    }
    int num1 = numA;

    if (num1 <= 1) //base case
    {
        std::cout << num1 << " is not prime." << std::endl;
        return;
    }

    //loop to see if input modulous i becomes 0
    //if it does set isPrime to false
    for (int i = 2; i < num1/2; i++)
    {
        int c = num1%i;
        if(c == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime)
    {
      std::cout << num1 << " is prime" << std::endl;
    }
    else
    {
      std::cout << num1 << " is not prime" << std::endl;
    }

}

void oddOrEven()
{
  double numA;
  int c;
  std::cout << "(7) Odd or Even. Enter number" << std::endl;

  std::cin >> numA;
  while(!validateInt(numA))
  {
    std::cin >> numA;
  }
  int num1 = numA;

  c = num1 % 2;

  //check if input mod 2 is 0, if it is, there is no remainder
  //and the number is even. Else, odd
  if (c == 0)
  {
    std::cout << num1 << " is even." << std::endl;
  }
  else
  {
    std::cout << num1 << " is odd." << std::endl;
  }
}

bool validateNumber()
{
  //validate that the input is a number
  if(std::cin.fail())
  {
    std::cout << "please re enter number" << std::endl;
    std::cin.clear();
    std::cin.ignore(256,'\n');
    return false;
  }
  return true;
}

bool validateInt(double num)
{
  //validate that the input is an int
  int check = num;
  if(std::cin.fail())
  {
    std::cout << "please re enter number" << std::endl;
    std::cin.clear();
    std::cin.ignore(256,'\n');
    return false;
  }
  else if(check != num)
  {
    std::cout << "please re enter number (needs to be an integer)" << std::endl;
    return false;
  }
  return true;
}
