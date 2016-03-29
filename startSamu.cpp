#include <iostream>
#include "eSpeak.h"
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(){
 
 // Variable for storing the actual input.
  string input;
  // Variable for storing what the computer will say.
  string sentenceToSay;
  
  // Variable for storing whether if the computer was able to answer or not.
  bool answered = false;
  
 // While the computer can't answer, we ask the user for input.
  while(!answered){
    
  	getline(cin, input);
     
    	// If the input was correct, we can proceed.  
    	if(input == "Hi!" || input == "Hi there." || input == "Hi Samu!" || input == "Hello!" || input == "Hello there!" || input == "Hello Samu.")
	    {
    	answered = true; 
    	}
    	// Else we tell the user we couldn't process the sentence.
    	else{
      
      		sentenceToSay = "'I am terrible sorry, but I cannot understand that command.'";

    		std::stringstream stream;    
    		stream << "./saySomething"
	  	<< " " 
	  	<< sentenceToSay;
    		system(stream.str().c_str());
      }
    
  }
  
  // The program only gets to this point if the input was correct, so we tell the computer to say 'Hello!'
  {
  	sentenceToSay = "'Hello!'";

	std::stringstream stream;    
    	stream << "./saySomething"
	<< " " 
	<< sentenceToSay;
    	system(stream.str().c_str());
  }
  
  // Then we go on to the next question, so we set the variable 'answered' to false.
  answered = false;
  
  // Then we repeat what we did earlier.
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
  
  // Now again, we tell the computer to say what we want; in this case 'Okay! Lets learn then!'.
  {
      	sentenceToSay = "'Okay! Lets learn then!'";

      	std::stringstream stream2;    
      	stream2 << "./saySomething"
	<< " " 
	<< sentenceToSay;
      	system(stream2.str().c_str());
  }
  
  // And finally, we start the original program.
  {

    std::stringstream stream;    
    stream << "./SamuVocab 2>out";
    system(stream.str().c_str());
  }
 
  return 0;
}
