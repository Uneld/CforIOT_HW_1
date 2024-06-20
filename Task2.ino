const int redPin = 9;
const int yellowPin = 10;
const int greenPin = 11;
const int buttonPin = 2;

int buttonState = 0;
int pedestrianMode = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && pedestrianMode == 0)
  {
    pedestrianMode = 1;
  }

  // Зеленый сигнал
  digitalWrite(greenPin, HIGH);

  if (pedestrianMode)
  {
    delay(5000);
    digitalWrite(greenPin, LOW);

    // желтый мигающий сигнал 3 раза
    for (int i = 0; i < 3; i++)
    {
      digitalWrite(yellowPin, HIGH);
      delay(500);
      digitalWrite(yellowPin, LOW);
      delay(500);
    }

    // Красный сигнал
    digitalWrite(redPin, HIGH);
    delay(5000);
    digitalWrite(redPin, LOW);

    // желтый мигающий сигнал 3 раза
    for (int i = 0; i < 3; i++)
    {
      digitalWrite(yellowPin, HIGH);
      delay(500);
      digitalWrite(yellowPin, LOW);
      delay(500);
    }
    pedestrianMode = 0;
  }
}
