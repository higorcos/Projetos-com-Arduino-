
//Definimos os pinos do led
int VERMELHO = 2;      
int AMARELO = 4;
int VERDE = 7;
 
void setup() {
  pinMode(VERDE,OUTPUT);        //define o pino do led VERDE como saída
  pinMode(AMARELO,OUTPUT);     //define o pino do led  como saída
  pinMode(VERMELHO,OUTPUT);         //define o pino do led  como saída
}
//Método loop, é executado enquanto o arduino estiver ligado.
void loop() {
  //Controle do led verde
  digitalWrite(VERDE,HIGH);  //acende o led VERDE
  delay(4000);           //espera 4 segundos
  digitalWrite(VERDE,LOW);   //apaga o led VERDE
   
  //Controle do led amarelo
  digitalWrite(AMARELO,HIGH);  //acende o led AMARELO
  delay(2000);           //espera 2 segundos
  digitalWrite(AMARELO,LOW);   //apaga o led AMARELO
   
  //Controle do led vermelho
  digitalWrite(VERMELHO,HIGH); //acende o led VERMELHO
  delay(4000);           //espera 4 segundos
  digitalWrite(VERMELHO,LOW);  //apaga o led VERMELHO
}
