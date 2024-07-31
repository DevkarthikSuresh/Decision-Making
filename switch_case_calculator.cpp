
//Name: Devkarthik Suresh
//PRN: 23070123045
//AIM - To cperform operations using switch case
#include <iostream>
using namespace std;

int main() { int x;
int num1,num2;
  
  cout << "Simple Calculator"<< endl;
  cout << "1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Division"<<endl<<"4.Multiplication"<<endl;
  cout << "Enter the operation:";
  cin >> x;
  cout << "Enter num1: ";
  cin >> num1;
  cout << "Enter num2: ";
  cin >> num2;
switch (x) {

case 1:
cout << num1+num2;
break;
case 2:
cout << num1-num2;
break;
case 3:
if (num2 == 0){cout << "Divide by zero error.";
    break;
}
else
{cout << num1/num2;}
break;
case 4:
cout << num1*num2;
break;
}
return 0;}
/*Output-
Enter a character: o
o is a vowel
*/
