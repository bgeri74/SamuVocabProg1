#include "eSpeak.h"
#include <iostream>

/* Program to say something. */

int main(int argc, char* argv[]){
 
  // We use the function saySomething to tell the computer what to say and how to say it. We provide it with the second argument which is the sentence to be said.
  saySomething(argv[1]);
  
  return 0;
}
