
void runMotor()
{

  set_time = analogRead(time_pot);
  set_time = map(set_time, 0, 1023, tON_motor_min, tON_motor_max);
  digitalWrite(motorPin, HIGH);
  delay(set_time);
  digitalWrite(motorPin, LOW);
  delay(false_trig_delay);
}
