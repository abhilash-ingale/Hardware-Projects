const int IRPin = 11, motorPin = 6, tsop_in = 10, time_pot = A0;                                   // Pin connections 
const int steps= 10, false_trig_delay=500,tdelay = 13, tON_motor_min=200, tON_motor_max=800;     // fixed timings/delays
int i = 1, set_time = 0, c = 0, tsop_state = HIGH;
bool hand_is_there = false; 

void setup()
{
  pinMode(IRPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(tsop_in, INPUT);
}

void loop()
{
  c = 0;
  hand_is_there = DetectHand();

  if (hand_is_there)
  {
    runMotor();
  }

}
