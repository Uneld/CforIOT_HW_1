const int ledPin = 13;

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
    Serial.println("Enter 1 on led, 0 off led");
}

void loop()
{

    if (Serial.available() > 0)
    {
        char command = Serial.read();
        Serial.print("Choise ");
        Serial.println(command);
        if (command == '1')
        {
            digitalWrite(ledPin, HIGH);
        }
        else if (command == '0')
        {
            digitalWrite(ledPin, LOW);
        }
    }
}