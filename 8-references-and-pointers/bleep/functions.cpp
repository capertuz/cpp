#include <string> 
#include "functions.hpp"

void bleep(std::string thisword, std::string &thistext)
{
  for(int i= 0; i<thistext.size(); i++)
  {
    int start=0;
    int end=0;
    bool match = false;
    if(thistext[i] == thisword[0])
    {
      match = true;
      for(int j= 1; j<thisword.size(); j++)
      {
         if(thistext[i+j] != thisword[j]){match = false; break;} 
      }
    }
    if (match == true)
    {
      for(int j= 0; j<thisword.size(); j++)
      {
         thistext[i+j] = '*'; 
      }
    }
  }
  
}
