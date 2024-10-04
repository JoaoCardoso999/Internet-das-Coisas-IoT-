//Biblioteca para utilizar o servo
#include <Servo.h>

//Variavel Sensor e Motor(Servo)
int led = 2;
int sensorMov = 3;
int motor = 4; 

//Define que o servo começara na posicao zero
int posicao = 0;
Servo motorservo;


long distancia(int trigger, int echo){
//Trigger porta de saida
  
pinMode(trigger,OUTPUT);
digitalWrite(trigger,LOW);
delay(5); 
//mandando sinal
digitalWrite(trigger,HIGH);  
delay(10);
digitalWrite(trigger,LOW);//Desligar porta    
//Echo porta de entrada 
 pinMode(echo,INPUT);
  
return pulseIn(echo,HIGH);  
}



void setup()
{
 //Define porta do led saida
 pinMode(led,OUTPUT); 
 //Inicia o servo 
 motorservo.attach(motor); 
 //Defini a posição 
 motorservo.write(posicao);
  
}

void loop()
{
 
  int cm = 0.01723 * distancia(3, 3);
  
  if(cm < 320){
  digitalWrite(led,HIGH);
  posicao = posicao +50; 
    delay(1000);
  motorservo.write(posicao);  
  } 
  
  
  
}
