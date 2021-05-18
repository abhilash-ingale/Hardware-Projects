const int IRPin = 11, motorPin = 6, tsop_in = 10, time_pot = A0;                           // Pin connections 
const int false_trig_delay=1000, chk_delay=100, tON_motor_min=200, tON_motor_max=800;     // fixed timings/delays
int i = 1, set_time = 0, tdelay = 13, c = 0, tsop_inp = HIGH;
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
  hand_is_there = detectHand();

  if (hand_is_there)
  {
    runMotor();
  }

}
