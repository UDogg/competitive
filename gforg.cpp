// C++ program to check if two numbers are equal
#include<bits/stdc++.h>

#include<stdio.h>
#include<stdlib.h>
 
using namespace std;
 
int main()
{
   int x = 10;
   int y = 70;
 
   x = x + y;
   y = x - y;
   x = x - y;
 
   cout << "X : " << x << "\n";
   cout << "Y : " << y << "\n";
    
   return 0;
}

int abc()
{
   int a = 15, b = 20;
   printf("max = %d\n", ((a + b) + abs(a - b)) / 2);
   printf("min = %d", ((a + b) - abs(a - b)) / 2);
   return 0;
}
