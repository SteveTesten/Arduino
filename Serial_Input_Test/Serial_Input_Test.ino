//Serial Input Test
//Output the ASCII code for the key entered.

void setup()
{
  Serial.begin(9600);
  Serial.println("Enter a key:");
}

void loop()
{
  if (Serial.available() > 0)
  {
    int incoming_byte = Serial.read();
    
    Serial.print("Key Entered: ");
    Serial.println(incoming_byte);
    incoming_byte = 0;
  }
}
