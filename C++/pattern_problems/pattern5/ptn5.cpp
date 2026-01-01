#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printline(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  printline(t);
}