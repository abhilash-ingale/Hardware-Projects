int motorPin= 13, pot1Pin=A0, pot2Pin=A2,trigPin=8, echoPin=12; // define pins
int long duration=0;                                          // variable to measure echo duration 
float distance=0.0;                                           // variable to *measure* distance   
int set_dist=0, set_time=0,time_val =0;                       // variables to read pot values and variable to store time in milliseconds  
float dist_val=0;                                             // varibale to store *set* distance value

void setup()
{
 pinMode(trigPin, OUTPUT); 
 pinMode(echoPin, INPUT);
 pinMode(ledPin, OUTPUT);
}

void loop() 
{

// No false triggers 
digitalWrite(trigPin, LOW);
delayMicroseconds(10); 

if ( readDistance(pot1Pin, pot2Pin, trigPin, echoPin) <= dist_val) 
{
 digitalWrite(motorPin,HIGH);
 delay(time_val);                       // wait for 'time_val no.' of seconds
 digitalWrite(motorPin,LOW);
 delay(1500);
 while( readDistance(pot1Pin ,pot2Pin, trigPin, echoPin)<= dist_val)
 {
  delay(300);
 }
}

else 
{
  digitalWrite(motorPin, LOW);   // turn the motor off  
}
}
