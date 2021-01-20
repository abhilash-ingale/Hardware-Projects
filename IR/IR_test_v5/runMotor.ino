
void runMotor()
{

  set_time = analogRead(time_pot);
  set_time = map(set_time, 0, 1023, 200, 800);
  digitalWrite(motorPin, HIGH);
  delay(set_time);
  digitalWrite(motorPin, LOW);
  delay(1000);
  
  while(detectHand())
  {
   delay(100);   
  }

}
