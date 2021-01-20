bool DetectHand()
{
  if (detectHand())
  {
    delay(100);
    if (detectHand())
    {
      delay(50);
      if (detectHand())
      {
        delay(100);
        if (detectHand())
        {
         delay(50);
         if (detectHand())
         {
          return true;
         }
         else
         {
          return false; 
         }
          
        }
        else
        {
         return false; 
        }
      }
      else
      {
        return false;
      }

    }
    else
    {
      return false;
    }

  }
  else
  {
    return false;
  }
}
