#include <iostream>

using namespace std;

void myswap(int * ptr1, int* ptr2)
{
  auto a = 25, b = 11;
  auto temp = ptr1;
  ptr1 = ptr2;
  ptr2 = temp;
  *ptr1 = a;
  *ptr2 = b;
}



int main()
{
  int a = 25, b = 11;    

  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;

//swap(a,b); //why does theirs work????   
 
  myswap(&a, &b); // but mine doesn't ?!?!?!?!!!???
  //it works now
  cout<<"a = "<<a<<", b = "<<b<<endl;


}
