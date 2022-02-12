#include <iostream>
using namespace std;
void main()
{
  string first_name = "amrita";
  string last_name = "tiwari";
  int your_name = first_name.compare(last_name);
  if (your_name == 0)
    cout << "Both the strings are equal";
  else
    cout << "Both the strings are unequal";
}
