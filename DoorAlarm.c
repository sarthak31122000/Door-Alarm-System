int ledred = 11; //Door Closed Status
int ledgreen = 12; // Door Open Status
int sensor = 6; // Door sensor connected to Pin 6 in Arduino

void setup()
{
  pinMode(ledgreen, OUTPUT);
  pinMode(ledred, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(sensor) == HIGH)
  {
    digitalWrite(ledgreen, LOW);
    digitalWrite(ledred, HIGH);
    //Serial.println("Your Door is Closed");
  }
  else 
  {
    digitalWrite(ledgreen, HIGH);
    digitalWrite(ledred, LOW);
    //Serial.println("Your Door is Open");
  }
  delay(100);
}

