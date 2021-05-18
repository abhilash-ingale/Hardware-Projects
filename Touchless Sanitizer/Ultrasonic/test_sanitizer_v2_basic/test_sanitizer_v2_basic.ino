int ledPin= 13, pot1Pin=A0, pot2Pin=A2,trigPin=8, echoPin=12;  //Connect LEd pin to 13
int long duration=0;
float distance=0.0; //to measure the distance and time taken 
int val_1=0,val_2=0;
int time_val =0;
float dist_val=0.0;

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

// Read pots
val_2 = 500; // Preset time value
val_1 = 400; // Preset distance value

// convert val_2 to time
time_val = map(val_2,0,1023,0,3000);

// convert val_1 to distance
dist_val = map(val_1,0,1023, 150,350); 

// Initialize sensor
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

//calculate distance
duration = pulseIn(echoPin, HIGH);  
distance = 0.172*duration; // distance calculate in millimeters
   
if (distance <= dist_val) 
{
 digitalWrite(ledPin,HIGH);
 delay(time_val);                       // wait for 'time_val no.' of seconds
 digitalWrite(ledPin,LOW);
 delay(1500);
}

else 
{
  digitalWrite(ledPin, LOW);   // turn the LED off  
}
}
