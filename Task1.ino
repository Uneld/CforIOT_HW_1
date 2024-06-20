const int redPin = 9;
const int yellowPin = 10;
const int greenPin = 11;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  // Зеленый сигнал
  digitalWrite(greenPin, HIGH);
  delay(5000);

  // Зеленый мигающий сигнал 3 раза
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(greenPin, HIGH);
    delay(500);
    digitalWrite(greenPin, LOW);
    delay(500);
  }

  // Желтый сигнал
  digitalWrite(yellowPin, HIGH);
  delay(2000);
  digitalWrite(yellowPin, LOW);

  // Красный сигнал
  digitalWrite(redPin, HIGH);
  delay(5000);

  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(1000);
}