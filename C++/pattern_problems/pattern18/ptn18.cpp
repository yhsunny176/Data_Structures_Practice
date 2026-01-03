#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printline(int n)
{
  int half = n / 2;

  for (int i = 1; i <= n; i++)
  {
    int distance = i <= half ? i : n - i;
    int stars = distance;
    int spaces = half - distance;

    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }

    for (int j = 1; j <= 2 * spaces; j++)
    {
      cout << " ";
    }

    for (int j = 1; j <= stars; j++)
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