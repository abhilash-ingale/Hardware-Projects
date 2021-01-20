const int IRPin=11, motorPin = 6, tsop_in = 10,pot_pin=A0, upp_lim=33, low_lim=13;
int i =0, f=0, set_time=0,tdelay=0,t_val=0;
 

void setup() 
{
pinMode(IRPin,OUTPUT);
digitalWrite(IRPin,LOW); // initialize with OFF IR
pinMode(motorPin,OUTPUT);
pinMode(tsop_in,INPUT);
}

void loop() 
{
f = 0;
t_val = analogRead(pot_pin);
tdelay=map(t_val,0,1023,low_lim,upp_lim);

digitalWrite(IRPin,HIGH); // Turn ON IR
delayMicroseconds(tdelay);

if (digitalRead(tsop_in) <= LOW )
 {
  f=1;
 }
 
digitalWrite(IRPin,LOW); // Turn OFF IR
delayMicroseconds(tdelay);

if(f==1)
{
  //set_time = analogRead(time_pot);
  //set_time = constrain(set_time,200,800);
  digitalWrite(motorPin,HIGH);
  delay(500);
  digitalWrite(motorPin,LOW);   
  delay(800);
}

}
