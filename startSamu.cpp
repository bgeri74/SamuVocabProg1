#include <iostream>
#include "eSpeak.h"
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(){
 
  string input;
  string sentenceToSay;
  
  bool answered = false;
  
 
  while(!answered){
    
      getline(cin, input);
      
    if(input == "Hi!" || input == "Hi there." || input == "Hi Samu!" || input == "Hello!" || input == "Hello there!" || input == "Hello Samu.")
    {
    answered = true; 
    }
    else{
      
	  
      sentenceToSay = "'I am terrible sorry, but I cannot understand that command.'";

    std::stringstream stream;    
    stream << "./saySomething"
	  << " " 
	  << sentenceToSay;
    system(stream.str().c_str());
      }
    
  }
  
  {

	  
      sentenceToSay = "'Hello!'";

    std::stringstream stream;    
    stream << "./saySomething"
	  << " " 
	  << sentenceToSay;
    system(stream.str().c_str());
  }
  
  answered = false;
  
  while(!answered){
    
      getline(cin, input);
      
    if(input == "Let's learn!" || input == "Let's learn some quotations!" || input == "Learn!" || input == "Let's rock!" || input == "Let us learn some new words." || input == "Let's widen your knowledge!")
    {
    answered = true; 
    }
    else{
      

	  
      sentenceToSay = "'I am terrible sorry, but I cannot understand that command.'";

    std::stringstream stream;    
    stream << "./saySomething"
	  << " " 
	  << sentenceToSay;
    system(stream.str().c_str());
      }
    
    
    
  }
  
  {

	  
      sentenceToSay = "'Okay! Lets learn then!'";

      std::stringstream stream2;    
      stream2 << "./saySomething"
	    << " " 
	    << sentenceToSay;
      system(stream2.str().c_str());
  }
  
  {

    std::stringstream stream;    
    stream << "./SamuVocab 2>out";
    system(stream.str().c_str());
  }
  
  
  
  
  return 0;
}
