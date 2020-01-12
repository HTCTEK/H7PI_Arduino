#include "Arduino.h"

void setup(void)
{
	pinMode(D26,OUTPUT);
	pinMode(D25,OUTPUT);
}


void loop(void)
{
	float voltage = 0;
	digitalWrite(D25,0);
	digitalWrite(D26,1);
	delay(100);
	digitalWrite(D25,1);
	digitalWrite(D26,0);
	delay(100);
	voltage = analogReadVoltage(A0);
}

