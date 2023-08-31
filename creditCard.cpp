#include <iostream>

int getDigit(const int number);
int sumOddPlacesNum(const std::string cardNumber);
int sumEvenPlacesNum(const std::string cardNumber);

int main()
{
  std::string cardNumber;
  int result = 0;

  std::cout << "Enter your credit card numbers : ";
  std::cin >> cardNumber;

  result = sumOddPlacesNum(cardNumber) + sumEvenPlacesNum(cardNumber);

  if (result % 10 == 0)
  {
    std::cout << "Your card " << cardNumber << " is valid";
  }
  else
  {
    std::cout << "Your card " << cardNumber << " isn't valid";
  }
}

int getDigit(const int number)
{
  return number % 10 + (number / 10 % 10);
}

int sumOddPlacesNum(const std::string cardNumber)
{
  int sum = 0;
  for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
  {
    sum += getDigit(cardNumber[i] - '0');
  }
  return sum;
}

int sumEvenPlacesNum(const std::string cardNumber)
{
  int sum = 0;
  for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
  {
    sum += getDigit((cardNumber[i] - '0') * 2);
  }
  return sum;
}
