#include "Password.h"
#include <string>

using std::string;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/


Password::Password()
{
	Password::pass_history.push_back("ChicoCA-95929");
}



int Password::count_leading_characters(string phrase){
  int repetition = 1;
  int index = 0;

  while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}

bool Password::has_mixed_case(string str)
{
	
	bool o = false;
	bool t = false;
	for(int i = 0; i< str.size(); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			o = true;
		}
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			t = true;
		}
		
	
	}
	return (o == true && t == true);
}


void Password::set(string T)
{
	Password::pass_history.push_back(T);
}



bool Password::authenticate(string T)
{
	return T == Password::pass_history[Password::pass_history.size() - 1];
}




















