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
// void menu()
// menu will display what option the user can choose from.
//
// addnumbers()
// pre: valid integer. error checking will be applied.
// post: return the addition of the two valid numbers then re display the Menu
//
// subtractnumbers()
// pre: valid integers are entered. error checking will be applied.
// post: return the Subtraction of the two valid numbers then re display the Menu
//
// dividenumbers()
// pre: valid integers are entered. error checking will be applied.
// post: return the Division of the two valid numbers then re display the Menu
//
// multiplynumbers()
// pre: valid integers are entered. error checking will be applied.
// post: return the Multiplication of the two valid numbers then re display the Menu
//
// modulousNumbers()
// pre: valid integers are entered. error checking will be applied.
// post: return the modulous of the two valid numbers then re display the Menu
//
// isPrime()
// pre: valid integer is entered. error checking will be applied.
// post: returns a boolean value if the number is prime
//
// oddOrEven()
// pre: valid integer is entered. error checking will be applied.
// post: returns a boolean value if the number is odd or Even
//
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


int main()
{
    int choice;
    int num1;
    int num2;
    std::cout << "Welcome to the calcultor\nFollow the menu to use it!\n\n\n";



    do{
        Menu();
        std::cin >> choice;

        //checking if input is in range
        if(choice > 8 || choice < 1)
        {
          std::cout << "Choice not recognized\n";
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
    int num1, num2, c;
    std::cout << "(1) Addition. Enter numer 1 then 2" << std::endl;
    std::cin >> num1;

    //checking if input is an integer. if not clear input
    //ask user to re enter the input
    if(!(std::cin >> num1))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num1;
    }
    std::cin >> num2;
    if(!(std::cin >> num2))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num2;
    }
    c = num1 + num2;
    std::cout << c << std::endl;
}

void subtractNumbers()
{
    int num1, num2, c;
    std::cout << "(2) Subtraction. Enter number 1 then 2" << std::endl;
    std::cin >> num1;
    if(!(std::cin >> num1))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num1;
    }
    std::cin >> num2;
    if(!(std::cin >> num2))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num2;
    }
    c = num1 - num2;
    std::cout << c << std::endl;
}

void multiplyNumbers()
{
    int num1, num2, c;
    std::cout << "(3) Multiplication. Enter number 1 then 2" << std::endl;
    std::cin >> num1;
    if(!(std::cin >> num1))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num1;
    }
    std::cin >> num2;
    if(!(std::cin >> num2))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num2;
    }
    c = num1 * num2;
    std::cout << c << std::endl;
}

void divideNumbers()
{
    int num1, num2, c;
    std::cout << "(4) Division. Enter number 1 then 2" << std::endl;
    std::cin >> num1;
    if(!(std::cin >> num1))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num1;
    }
    std::cin >> num2;
    if(!(std::cin >> num2))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num2;
    }
    c = num1 / num2;
    std::cout << c << std::endl;
}

void modulousNumbers()
{
    int num1, num2, c;
    std::cout << "(5) Modulous. Enter number 1 then 2" << std::endl;
    std::cin >> num1;
    if(!(std::cin >> num1))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num1;
    }
    std::cin >> num2;
    if(!(std::cin >> num2))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num2;
    }
    c = num1 % num2;
    std::cout << c << std::endl;
}

void isPrime()
{
    int num1;
    std::cout << "(6) Prime. Enter number" << std::endl;
    std::cin >> num1;
    if(!(std::cin >> num1))
    {
      std::cin.clear();
      std::cin.ignore();
      std::cout << "please re enter number" << std::endl;
      std::cin >> num1;
    }
    bool isPrime = true;

        //base case
        if (num1 <= 1)
        {
            std::cout << num1 << " is not prime." << std::endl;
            return;
        }
    //loop to see if modulous input becomes 0
    //if it does set prime to false else set to true
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
  int num1, c;
  std::cout << "(7) Odd or Even. Enter number" << std::endl;
  std::cin >> num1;
  if(!(std::cin >> num1))
  {
    std::cin.clear();
    std::cin.ignore();
    std::cout << "please re enter number" << std::endl;
    std::cin >> num1;
  }
  c = num1 % 2;

  //check if mod of input is 0 then input even
  if (c == 0)
  {
    std::cout << num1 << " is even." << std::endl;
  }
  else
  {
    std::cout << num1 << " is odd." << std::endl;
  }
}
