
bool detectHand()
{
  digitalWrite(IRPin, HIGH); // Turn ON IR
  delayMicroseconds(tdelay);
  
  for (i = 1; i <= steps; i++)          // Check 
  {
    tsop_state = digitalRead(tsop_in);
    if (tsop_state == LOW)
    {
      c += 1;
    }
  }

  digitalWrite(IRPin, LOW); // Turn OFF IR
  delayMicroseconds(tdelay);

  if (c == steps)
  {
    return true;  // consider a TRUE tigger only when signal is low more than chk_cntr variable
  }
  else
  {
    return false;
  }

}
