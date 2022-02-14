
void setup()
{
  pinMode(4,OUTPUT); // connect push button on digital pin D2
  pinMode(5, INPUT); // connect push button on digital pin D1
  Serial.begin(9600);
}

void loop()
{
    Serial.println(digitalRead(5));
    delay(200);
    if(digitalRead(5)== HIGH){
      digitalWrite(4,HIGH);
      Serial.println("LED ON");
      delay(1000);
      }
      else {
        digitalWrite(4,LOW);
        Serial.println("LED OFF");
        }
}
