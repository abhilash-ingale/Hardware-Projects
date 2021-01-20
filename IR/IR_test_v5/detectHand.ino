
bool detectHand()
{

  digitalWrite(IRPin, HIGH); // Turn ON IR
  delayMicroseconds(tdelay);

  for (i = 1; i <= 5; i++)
  {
    tsop_inp = digitalRead(tsop_in);
    if (tsop_inp == LOW)
    {
      c += 1;
    }
  }

  digitalWrite(IRPin, LOW); // Turn OFF IR
  delayMicroseconds(tdelay);

  if(c>3)
  {
    return true;
  }
  else 
  {
   return false; 
  }
 
}
