# Projeto de Tela LCD com sensor de Distãncia

este projeto foi desenvolvido dentro do Tinkecard, na disciplina de Internet das Coisas 
(IoT), para a criação de im prototipo com arduino que simule uma mensagem de Mantenha distãncia
toda vez que alguém se aproxime a menos de 1 metro do sensor.

## Componentes Usados 
- 1 Arduino Uno
- 1 Protoboard (Placa de Ensaio)
- 1 LCD 16x2
- 1 Resistor de 1kΩ 
- 1 Sensor de distancia ultrasonico
- 14 jumpers Macho/Macho
- 3 jumpers Macho/Fêmea

## Montagem de Circuito

![Imagen do circuito](IMAGENLCD1.png)

## Explicação do Código

Importando a biblioteca do LCD
#include <LiquidCrystal.h>

Criar variavel do lcd
LiquidCrystal lcd (2,3,4,9,10,11,12);
int ledLcd =13;


Metodo para capturar a distancia
Retorna Numero quebrado longo

long distancia(int trigger, int echo){
Trigger porta de saida
  
pinMode(trigger,OUTPUT);
digitalWrite(trigger,LOW);
delay(5); 
mandando sinal
digitalWrite(trigger,HIGH);  
delay(10);
digitalWrite(trigger,LOW); Desligar porta    
Echo porta de entrada 
 pinMode(echo,INPUT);
  
return pulseIn(echo,HIGH);  
}

void setup()
{
  
 pinMode(ledLcd,OUTPUT); DEFINIR LEDLCD SAIDA
 digitalWrite(ledLcd,HIGH); Ligar os leds do LCD ]
 lcd.begin(16,2); INFORMA QUE O LCD TEM 16 COLUNAS E 2 LINHAS
 lcd.clear(); iniciar o lcd limpo 
}

void loop()
{
  
  Transforma o valor recebido para cm
  int cm = 0.01723 * distancia(8, 8);
  
  if(cm<100) { Se menor que 1 metro/100cm
  lcd.setCursor(4,0);
  lcd.print("MANTENHA"); 
  lcd.setCursor(3,1);
  lcd.print("DISTANCIA!"); 
  }else{
   lcd.clear(); Apaga todas as mensagens 
  }