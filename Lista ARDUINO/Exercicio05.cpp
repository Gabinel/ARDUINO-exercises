//Declaração de valores inteiros que representarão as entradas físicas do arduino
int ledRed = 3;
int ledYellow = 4;
int ledGreen = 5;

void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);

  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);
}

void loop()
{

    for (int i = 0; i <= 5; i++){
        ledLoop(4995 * 0.2 * i);
    }

}

//Função que irá controlar o piscar dos LED's e o delay
int ledLoop (int timeFunction) { 
    digitalWrite(ledRed, HIGH);
    delay(5000 - timeFunction);
    digitalWrite(ledRed, LOW);
    delay(5000 - timeFunction);
    digitalWrite(ledYellow, HIGH);
    delay(5000 - timeFunction);
    digitalWrite(ledYellow, LOW);
    delay(5000 - timeFunction);
    digitalWrite(ledGreen, HIGH);
    delay(5000 - timeFunction);
    digitalWrite(ledGreen, LOW);
    delay(5000 - timeFunction);
}