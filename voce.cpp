 #include <voce/voce.h>

 /* Program to tell the computer to say 'Hello World!'*/
 
int main()
{
	// We initialize voce.
	voce::init("../../../lib", true, false, "", "");

	// Then we just synthesize the sentence.
	voce::synthesize("Hello World!");
	
	// Now before we quit, we call the destroy() function.
	voce::destroy();
	
	return 0;
}
