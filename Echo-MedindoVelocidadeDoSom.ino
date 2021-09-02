

#define echoPin 13 //Pino 13 recebe o pulso do echo  
#define trigPin 12 //Pino 12 envia o pulso para gerar o echo  
  
void setup()  
{  
   Serial.begin(9600); //inicia a porta serial  
   pinMode(echoPin, INPUT); // define o pino 13 como entrada (recebe)  
   pinMode(trigPin, OUTPUT); // define o pino 12 como saida (envia)  
}  
  double velocidade =0;
  double danterior=0;
void loop()  
{  
  
  //seta o pino 12 com um pulso baixo "LOW" ou desligado ou ainda 0  
    digitalWrite(trigPin, LOW);  
  // delay de 2 microssegundos  
    delayMicroseconds(2);  
  //seta o pino 12 com pulso alto "HIGH" ou ligado ou ainda 1  
    digitalWrite(trigPin, HIGH);  
  //delay de 10 microssegundos  
    delayMicroseconds(10);  
  //seta o pino 12 com pulso baixo novamente  
    digitalWrite(trigPin, LOW);  
  //pulseInt lê o tempo entre a chamada e o pino entrar em high  
    double duracao = pulseIn(echoPin,HIGH);  //medido em microsegundos

  
  //exibe o valor em milisegundos
  Serial.println(duracao/1000);

  delay(500);
 
}  
