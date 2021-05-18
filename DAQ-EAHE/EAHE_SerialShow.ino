/* The code given below was deployed on  Arduino Mega 2560 for temperature data-logging of EAHE using K-type Thermocouple module (MAX 6675)
 The library is courtesy of Adafruit Industries : Github : https://github.com/adafruit/MAX6675-library */

#include "max6675.h"

// Declaring pin numbers for DO (Output), CS, CLK

int thermoDO1 = 22;   int thermoCS1 = 23;   int thermoCLK1 = 24;      
int thermoDO2 = 25;   int thermoCS2 = 26;   int thermoCLK2 = 27;
int thermoDO3 = 28;   int thermoCS3 = 29;   int thermoCLK3 = 30;
int thermoDO4 = 31;   int thermoCS4 = 32;   int thermoCLK4 = 33;
int thermoDO5 = 34;   int thermoCS5 = 35;   int thermoCLK5 = 36;
int thermoDO6 = 37;   int thermoCS6 = 38;   int thermoCLK6 = 39;
int thermoDO7 = 40;   int thermoCS7 = 41;   int thermoCLK7 = 42;
int thermoDO8 = 43;   int thermoCS8 = 44;   int thermoCLK8 = 45;
int thermoDO9 = 46;   int thermoCS9 = 47;   int thermoCLK9 = 48;
int thermoDO10 = 49;  int thermoCS10= 50;   int thermoCLK10= 51;

// Declaring thermocouple objects

MAX6675 thermocouple1(thermoCLK1, thermoCS1, thermoDO1);
MAX6675 thermocouple2(thermoCLK2, thermoCS2, thermoDO2);
MAX6675 thermocouple3(thermoCLK3, thermoCS3, thermoDO3);
MAX6675 thermocouple4(thermoCLK4, thermoCS4, thermoDO4);
MAX6675 thermocouple5(thermoCLK5, thermoCS5, thermoDO5);
MAX6675 thermocouple6(thermoCLK6, thermoCS6, thermoDO6);
MAX6675 thermocouple7(thermoCLK7, thermoCS7, thermoDO7);
MAX6675 thermocouple8(thermoCLK8, thermoCS8, thermoDO8);
MAX6675 thermocouple9(thermoCLK9, thermoCS9, thermoDO9);
MAX6675 thermocouple10(thermoCLK10, thermoCS10, thermoDO10);


void setup()  
 {
  Serial.begin(9600);
  // wait for MAX chip to stabilize
  delay(500);
}

void loop() 
{ 
   // Print the temperatures at inlet, outlet and along pipe length
   Serial.print("T-inlet= ");    Serial.print(thermocouple1.readCelsius());
   Serial.print(" T1 = ");       Serial.print(thermocouple2.readCelsius());
   Serial.print(" T2 = ");       Serial.print(thermocouple3.readCelsius());
   Serial.print(" T3 = ");       Serial.print(thermocouple4.readCelsius());
   Serial.print(" T4 = ");       Serial.println(thermocouple5.readCelsius());
   Serial.print(" T5 = ");       Serial.println(thermocouple6.readCelsius());
   Serial.print(" T6= ");        Serial.println(thermocouple7.readCelsius());
   Serial.print(" T7 = ");       Serial.println(thermocouple8.readCelsius());
   Serial.print(" T-outlet = "); Serial.println(thermocouple9.readCelsius());
   Serial.print(" T-atmos= ");   Serial.println(thermocouple10.readCelsius()); */ 
   delay(5000);
}
