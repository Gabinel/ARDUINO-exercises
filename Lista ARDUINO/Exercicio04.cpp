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

    /*
    A diferença entre 5ms e 5s é de 4995ms
    Esse intervalo começa em zero e aumenta 0,15 (15%) a cada execução do 'for'
    Aumentando 15% por execução, porém, não é possível chegar em 100%, dentro do conjunto dos INTEIROS (Z)
    Assim, o 'for' executa 6 vezes, chegando a um máximo de 90%
    Para chegar em 100%, o 'for' teria de ser executado 6,6666.. vezes, o que no contexto matemático
    é inviável. (Pela limitação do conjunto dos números inteiros)
    */
    for (int i = 0; i <= 6; i++){
        ledLoop(4995 * 0.15 * i);
    }

}

//Função que irá controlar o piscar dos LED's e o delay
int ledLoop (int timeFunction) { 
    digitalWrite(ledRed, HIGH);
    delay(5 + timeFunction);
    digitalWrite(ledRed, LOW);
    delay(5 + timeFunction);
    digitalWrite(ledYellow, HIGH);
    delay(5 + timeFunction);
    digitalWrite(ledYellow, LOW);
    delay(5 + timeFunction);
    digitalWrite(ledGreen, HIGH);
    delay(5 + timeFunction);
    digitalWrite(ledGreen, LOW);
    delay(5 + timeFunction);
}