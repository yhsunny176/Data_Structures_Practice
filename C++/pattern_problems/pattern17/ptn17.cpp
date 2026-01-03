#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printline(int n)
{
  int half = n / 2;

  for (int i = 1; i <= n; i++)
  {
    int distance = i <= half ? i : n - i + 1;
    int stars = half - distance + 1;
    int spaces = 2 * (distance - 1);

    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }

    for (int j = 1; j <= spaces; j++)
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