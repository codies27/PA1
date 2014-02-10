#include <iostream>
using namespace std;

int main()
{
  //declaring the variables
  int one;
  int two;
  int three;
  int four;
  //prompting user to enter integers
  cout << "Enter integers:" << endl;
  cin >> one;
  cin >> two;
  //checking if numbers are consecutive
  while (one != (two-1)){
    one = two;
    cin >> two;
  }
  cin >> three;
  while (two != (three-1)){
    one = three;
    cin >> two;
    cin >> three;
  }
  cin >> four;
  while (three != (four-1)){
    one = four;
    cin >> two;
    cin >> three;
    cin>> four;
  }
  cout << one << " " << two << " " << three << " " << four << endl;
  return 0;
}
