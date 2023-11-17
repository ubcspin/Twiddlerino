#ifndef Twiddlerino_h
#define Twiddlerino_h

//initializes Twiddlerino
void TwiddlerinoInit();

//Reads the encoder returning a signed integer value
int ReadEncoder();

//Resets the encoder to zero
void ZeroEncoder();

//Sets the output to the motor (between -255 and 255)
void SetPWMOut(int);

#endif

