pinMode(A0, INPUT);
    pinMode(16, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(4, OUTPUT);
    Serial.begin(9600);
}void loop()
{
    float value=analogRead(A0);
    Serial.println(value);
    float endValue=1025;
if (value>= 0 && value<=200)
{
    Serial.println("Yellow");
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(16, HIGH);
}
else if (value>= 201 && value<=900)
{
    Serial.println("Green");
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(16, LOW);
}
else
{
    Serial.println("Red");
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(16, LOW);}
delay(100);
}
