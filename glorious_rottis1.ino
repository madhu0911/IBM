int trigger_Pin = 2;
int echo_Pin = 3;
int buzzer_Pin = 10;
int time;
int distance;
void setup()
{
      Serial.begin (9600);
      pinMode (trigger_Pin, OUTPUT);
      pinMode (echo_Pin, INPUT);
      pinMode (buzzer_Pin, OUTPUT);
}
void loop()
{
  digitalWrite (trigger_Pin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigger_Pin, LOW);
  time = pulseIn (echo_Pin, HIGH);
  distance = (time*0.034) / 2;
  
  if (distance <= 10)
    {
      Serial.println (" Door Open ");
      Serial.print (" Distance=  ");
      Serial.println (distance);
      digitalWrite (buzzer_Pin, HIGH);
      delay (500);
    }
  else
  {
    Serial.println (" Door Closed ");
    Serial.print (" Distance= ");
    Serial.println (distance);
    digitalWrite (buzzer_Pin, LOW);
    delay (500);
  }
}
  
  
 
     
    
      
      
      
      
      
     
  
    
  
          
              
          
          
          
          
          
          
          
