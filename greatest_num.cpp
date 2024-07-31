
//Name: Devkarthik Suresh
//PRN: 23070123045
//AIM - To check whether a number is even or odd.

//Name: Devkarthik Suresh
//PRN: 23070123045
//AIM - To check whether a number is even or odd.
#include <iostream>
using namespace std;

int main() { int a,b,c;
  
  cout << "Enter number 1: ";
  cin >> a;
  cout << "Enter number 2: ";
  cin >> b;
  cout << "Enter number 3: ";
  cin >> c;
if (a>b)
{ if (a>c)
    { cout << a << " is the largest number.";}
else
{cout << c << " is the largest number.";}
    
}
else
{ if (b>c)
    { cout << b << " is the largest number.";}
    else
    {cout << c << " is the largest number.";}
}
    
    return 0;
}

/* output-
Enter number 1: 56
Enter number 2: 78
Enter number 3: 65
78 is the largest number.*/