void setup()
{
  pinMode(3, OUTPUT); //Led_vermelho
  pinMode(4, OUTPUT); //Led_amarelo
  pinMode(5, OUTPUT); //Led_azul
}

void loop()
{
  digitalWrite(3, HIGH); //Led_vermelho
  digitalWrite(4, HIGH); //Led_amarelo
  digitalWrite(5,HIGH);
  delay(250); 
  digitalWrite(3, LOW); //Led_vermelho
  digitalWrite(4, LOW); //Led_amarelo
  digitalWrite(5, LOW); //Led_amarelo
  delay(250); 
}
