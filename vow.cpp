#include <iostream>
using namespace std;
class checkvowel 
{
	 char c;
	 public:
	  void getcha()
	  {
	  	 cout<<"\nEnter a character:";
	  	 cin>>c;
	  }
	  void checkvow()
	  {
	  	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	  	 cout<<"\nThe given character is vowel";
	  	else
	  	 cout<<"\nThe given character is a consonant";
	  }
	  
	  };
int main()
{
	checkvowel c1;
	c1.getcha();
	c1.checkvow();
	return 0;
}