#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool isPrime = true;

  cout << "Enter No ";
  cin >> n;

  for(i = 2; i <= n / 2; i++)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime==true)
      cout << "prime number";
  else
      cout << "NOTT";

  return 0;
}