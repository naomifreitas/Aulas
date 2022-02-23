const int botao = 6;
const int ledV = 3;
const int LedA = 4;
const int LedAZ = 5;

void setup()
{
  pinMode(LedV, OUTPUT); //Led_vermelho
  pinMode(LedA, OUTPUT); //Led_amarelo
  pinMode(LedAZ, OUTPUT); //Led_azul
  pinMode(botao, INPUT);
}

int var;

void loop()
{
  var = digitalRead(botao); 
  if (var)
  {
      digitalWrite(LedV, HIGH);
  }
}
