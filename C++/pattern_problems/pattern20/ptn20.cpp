#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <math.h>

void printline(int n)
{
  for (int i = 0; i <= 2 * n - 1; i++)
  {
    for (int j = 0; j <= 2 * n - 1; j++)
    {
      int top = i;
      int left = j;
      int right = (2 * n - 2) - j;
      int bot = (2 * n - 2) - i;
      cout << (n - min(min(top, bot), min(left, right)));
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