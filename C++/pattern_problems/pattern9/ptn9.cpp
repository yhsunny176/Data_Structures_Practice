#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printline(int n)
{
  for (int i = 0; i < 2 * n; i++)

  {
    int star = i;
    if (i > n) star = (2*n-i);
    for (int j = 0; j < star; j++)
    {
       cout << "*";
    }
    cout<< endl;
  }
}

int main()
{
  int t;
  cin >> t;
  printline(t);
}