//Name - Devarthik Suresh
//PRN - 23070123045
//Aim - Checking the quadrants of a point
#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    // Write C++ code here
    cout << "Enter num1(Xaxis): ";
    cin >> num1;
    cout << "Enter num1(Yaxis): ";
    cin >> num2;
    if(num1>0 && num2>0)
    {cout <<"The point is in first quadrant";}
    else if(num1<0 && num2>0)
    {cout <<"The point is in second quadrant";}
    else if(num1<0 && num2<0)
    {cout <<"The point is in third quadrant";}
    else if(num1>0 && num2<0)
    {cout <<"The point is in fourth quadrant";}
    else if((num1==0 && num2!=0) ||(num1!=0 && num2==0))
    {cout <<"The point is on axis";}
    else
    {cout <<"The point is at origin";}
    return 0;
}
/* Output-
  Enter num1(Xaxis):3
 Enter num1(Yaxis):-5
 The point is in fourth quadrant
 */
