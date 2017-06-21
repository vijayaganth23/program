#include <iostream>

using namespace std;

class leap
{
  int yr;
 public:
  void getyr()
{
 cout<<"\nEnter the year:";
cin>>yr;
}
void checkleap()
{
 if(yr%4 == 0)
    {
        if( yr%100 == 0)
        {
          
            if ( yr%400 == 0)
                cout<<yr<<"  is a leap year";
            else
               cout<<yr<<" is not a leap year";
        }
        else
            cout<<yr<< " is a leap year";
    }
    else
        cout<<yr<< " is not a leap year";
}
};

int main()
{
    leap l1;

    l1.getyr();
   l1.checkleap();
   
    return 0;
}