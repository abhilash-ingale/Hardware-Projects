float readDistance(int pot1Pin, int pot2Pin, int trigPin,int echoPin)
{
// Read pots
set_dist = 400;
// set_dist = analogRead(pot1Pin);
set_time = analogRead(pot2Pin);    

// convert val_2 to time
time_val = map(set_time,0,1023,0,3000);

// convert set_dist to distance (in mm)
dist_val = map(set_dist,0,1023, 150,350);

// Send 1 pulse from the sensor
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

//calculate distance
duration = pulseIn(echoPin, HIGH);  // in microseconds
distance = 0.172*duration;          // in mm

return distance;
}
