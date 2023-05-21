#include <iostream>
#include <string>

int main() 
{

  char opr;
  float x, y;

  std::cout << "Pls choose operation: +, -, *, /: ";
  std::cin >> opr;

  std::cout << "Pls Enter two numbers : ";
  std::cin >> x >> y;

  switch(opr)
  {

    case '+':
            std::cout << x << " + " << y << " = " << x + y;
            break;
    case '-':
            std::cout << x << " - " << y << " = " << x - y;
            break;
    case '*':
            std::cout << x << " * " << y << " = " << x * y;
            break;
    case '/':
            std::cout << x << " / " << y << " = " << x / y;
            break;
    default:
            break;
  }

  return 0;
}