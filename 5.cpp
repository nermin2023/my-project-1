#include <iostream>

using namespace std;

int main()
{
  int x;
  cout<< " enter your number"<<endl;
  cin>> x;
  if (x%4==0 && x%7==0 )  {
  cout <<"lucky" << endl;
  }
  else {
    cout << " unlucky" <<endl;
  }
}
