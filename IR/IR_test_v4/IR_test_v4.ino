const int IRPin = 11, motorPin = 6, tsop_in = 10, time_pot = A0;
int i = 1, set_time = 0, tdelay = 30,c=0;
int tsop_inp = HIGH;

void setup()
{
  pinMode(IRPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(tsop_in, INPUT);
}

void loop()
{

  detectHand();

  if (c > 3)
  {
    runMotor();
  }

}
