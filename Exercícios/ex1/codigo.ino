int LED = 2; //LED conectado ao pino 2
int BOTAO = 3; //Botão conectado ao pino 3

int VAR1 = 0;


void setup()

{
 pinMode(LED, OUTPUT); //Pino 2 do arduino como saída
 pinMode(BOTAO, INPUT); //Pino com botão será entrada
}

void loop()

{

 VAR1 = digitalRead(BOTAO); //Armazena o Estado do botão.

 if (VAR1) //Se botão estiver pressionado (HIGH)
 {
 digitalWrite(LED, HIGH);
 }
  
else //se não estiver pressionado
 {
 digitalWrite(LED, LOW); //Apaga o led conectado ao pino 2
 }

}	
