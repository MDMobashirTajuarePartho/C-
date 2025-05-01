#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{     int a;
      cin>>a;
      int randomnumber = rand();
      cout<<"random number is  "<<randomnumber;
      if (a==randomnumber)
      {
            cout<<"bingo"<<endl;
      }
      else{cout<<"wrong guess"<<endl;}

}

