
bool detectHand()
{

  digitalWrite(IRPin, HIGH); // Turn ON IR
  delayMicroseconds(tdelay);

  for (i = 1; i <= 5; i++)          // Check for tigger 5 times
  {
    tsop_inp = digitalRead(tsop_in);
    if (tsop_inp == LOW)
    {
      c += 1;
    }
  }

  digitalWrite(IRPin, LOW); // Turn OFF IR
  delayMicroseconds(tdelay);

  if (c > 3)
  {
    return true;  // consider a TRUE tigger only when signal is low more than 3 times
  }
  else
  {
    return false;
  }

}
