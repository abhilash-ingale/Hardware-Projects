
//Firstly the connections of ultrasonic Sensor.Connect +5v and GND normally and trigger pin to 12 & echo pin to 13. 

#define trigPin 8
#define echoPin 12

int ledPin= 13;  //Connect LEd pin to 6
int duration=0, distance=0; //to measure the distance and time taken 
int pot1Pin = A0,pot2Pin =A2; 
int val_1=0,val_2=0;
int time_val =0;
float dist_val=0;
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
val_2 = analogRead(pot2Pin); // pot_2 is for setting ON time  (in secs)    
val_1 = 500;
//val_1 = analogRead(pot1Pin); // pot 1 is for setting distance (in meters)

// convert val_2 to time
time_val = map(val_2,0,1023,0,3000);
time_val = constrain(time_val,0,3000);

// convert val_1 to distance
dist_val = map(val_1,0,1023, 0.3,2); 
dist_val = constrain(dist_val,0.3,2);

// Initialize sensor
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

//calculate distance
duration = pulseIn(echoPin, HIGH);  
distance = 0.000172*duration;
   
if (distance ==(dist_val)) 
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
