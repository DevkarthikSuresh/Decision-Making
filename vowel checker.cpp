
//Name: Devkarthik Suresh
//PRN: 23070123045
//AIM - To check whether an alphabet is vowel or consonant
#include <iostream>
using namespace std;

int main() { char a;
  
  cout << "Enter a character: ";
  cin >> a;
  if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
  {cout << a << " is a vowel";}
  else
  {cout << a << " is a consonant";}
return 0;
    
}

/*Output-
Enter a character: o
o is a vowel
*/
