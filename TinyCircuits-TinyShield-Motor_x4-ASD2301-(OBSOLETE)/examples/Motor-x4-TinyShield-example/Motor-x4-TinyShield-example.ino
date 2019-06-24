int motorDirPin = 2;      // Motor direction connected to digital pin 2
int motorSpeedPin = 3;    // Motor speed connected to digital pin 3
int motorSleepPin = A3;      // Motor sleep to analog pin 3

void setup()
{
  pinMode(motorDirPin, OUTPUT);       // sets the pin as output
  pinMode(motorSpeedPin, OUTPUT);     // sets the pin as output
  pinMode(motorSleepPin , OUTPUT);     // sets the pin as output

  digitalWrite(motorDirPin, LOW);     // sets the default dir to be forward
  digitalWrite(motorSpeedPin, LOW);   // sets the default speed to be off
  digitalWrite(motorSleepPin , HIGH);   // sets the sleep mode to be off
}

void loop()
{
  // Set the motor direction to forward
  digitalWrite(motorDirPin, LOW);     

  // Ramp the motor speed up
  analogWrite(motorSpeedPin, 0);    // Min speed forward (motor off)
  delay(50);  
  analogWrite(motorSpeedPin, 63);   
  delay(50);  
  analogWrite(motorSpeedPin, 127);   
  delay(50); 
  analogWrite(motorSpeedPin, 191);   
  delay(50); 
  analogWrite(motorSpeedPin, 255);   // Max speed forward
  delay(50); 

  // Ramp the motor speed down
  analogWrite(motorSpeedPin, 191);   
  delay(50);  
  analogWrite(motorSpeedPin, 127);   
  delay(50);  
  analogWrite(motorSpeedPin, 63);   
  delay(50); 
  analogWrite(motorSpeedPin, 0);     // Min speed forward (motor off)
  delay(50); 


  // Set the motor direction to reverse
  digitalWrite(motorDirPin, HIGH);   

  // Ramp the motor speed up
  analogWrite(motorSpeedPin, 255);    // Min speed reverse (motor off)
  delay(50); 
  analogWrite(motorSpeedPin, 191);   
  delay(50);  
  analogWrite(motorSpeedPin, 127);   
  delay(50);  
  analogWrite(motorSpeedPin, 63);   
  delay(50); 
  analogWrite(motorSpeedPin, 0);      // Max speed reverse
  delay(50); 

  // Ramp the motor speed down
  analogWrite(motorSpeedPin, 63);   
  delay(50);  
  analogWrite(motorSpeedPin, 127);   
  delay(50); 
  analogWrite(motorSpeedPin, 191);   
  delay(50); 
  analogWrite(motorSpeedPin, 255);    // Min speed reverse (motor off)
  delay(50); 
}
