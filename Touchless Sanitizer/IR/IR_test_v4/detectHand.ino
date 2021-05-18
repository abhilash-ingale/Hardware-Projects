
void detectHand()
{
  
digitalWrite(IRPin,HIGH); // Turn ON IR

for(i=1;i<=5;i++)
 {
  tsop_inp= digitalRead(tsop_in); 
  if (tsop_inp == LOW)
  {
   c+=1;  
  }
  delay(6);
 }
 
digitalWrite(IRPin,LOW); // Turn OFF IR
delay(tdelay);  

}
