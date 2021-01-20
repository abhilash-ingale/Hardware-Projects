const int motorPin=13, sensorPin= A0, time_pot=A1;
int set_time = 0;
float threshold=0.0, Vcc=5.0, Vnom=3.0; 

void setup()
{
pinMode(sensorPin,INPUT);
pinMode(motorPin,OUTPUT);
threshold = Vnom/Vcc; 
}

void loop() 
{

digitalWrite(motorPin,LOW);                // set output to low to avoid false triggers
set_time = analogRead(time_pot);           // read value from timing pot
set_time = constrain(set_time,200,800);  // motor ON time constrained between 200-800 milliseconds

if (analogRead(sensorPin)<=threshold)         // 3.2 V saturation voltage for 4.8 - 5.0V supply
{
  digitalWrite(motorPin,HIGH);
  delay(set_time);
  digitalWrite(motorPin,LOW);                       

  // to avoid triggering when hand is held constantly near the machine
  
  while(analogRead(sensorPin)<=threshold)
  {
    delay(300);
  }
}

}
