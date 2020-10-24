void setup()
{
 Serial.begin(9600); // initialize serial communication at 9600 bits per second
}
void loop()
{
 int sensorValue = analogRead(A5); // read the input on analog pin 0
 float voltage = sensorValue * (10 / 1023.0); // Convert the analog reading (0 - 1023 to 0 - 5V)
 Serial.println(voltage); // print out the value
}
