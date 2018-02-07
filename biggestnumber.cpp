//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int z;
int x;
int biggest; 

  cout<<"Please enter a whole number:\n";
 cin>> z;
  cout<<"Please enter another whole number:\n";
 cin>> x;
 if ( z >= x ) 
 { biggest =z;
}
 else 
 { biggest =x;
 }

 
  cout<<"Of those two numbers, the biggest is: " << biggest<< endl;
 cout<<"Thank you for playing."<<endl;
 
 
 return 0;
}
