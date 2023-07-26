#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
  pinMode(COOLER, OUTPUT);
  pinMode(HEATER, OUTPUT);

   
  digitalWrite(COOLER,OUTPUT);
  digitalWrite(HEATER,OUTPUT);
    
}

float read_temperature(void)
{
   
}

void cooler_control(bool control)
{
   
}
void heater_control(bool control)
{
    
}
