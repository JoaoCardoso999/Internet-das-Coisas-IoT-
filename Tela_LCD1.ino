// C++ code
#include <LiquidCrystal.h>
//Criar variavel do lcd
LiquidCrystal lcd (2,3,4,9,10,11,12);
int ledLcd =13;


//Metodo para capturar a distancia
//Retorna Numero quebrado longo

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
  
 pinMode(ledLcd,OUTPUT);//DEFINIR LEDLCD SAIDA
 digitalWrite(ledLcd,HIGH);//Ligar os leds do LCD ]
 lcd.begin(16,2); //INFORMA QUE O LCD TEM 16 COLUNAS E 2 LINHAS
 lcd.clear();//iniciar o lcd limpo 
}

void loop()
{
  
  //Transform o valor recebido para cm
  int cm = 0.01723 * distancia(8, 8);
  
  if(cm<100) {//Se menor que 1 metro/100cm
  lcd.setCursor(4,0);
  lcd.print("MANTENHA"); 
  lcd.setCursor(3,1);
  lcd.print("DISTANCIA!"); 
  }else{
   lcd.clear();//Apaga todas as mensagens 
  }
  
/*  
  lcd.setCursor(15,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("B");
  delay(500);
  
  lcd.setCursor(14,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BE");
  delay(500);
  
  lcd.setCursor(13,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM");
  delay(500);
  
 lcd.setCursor(12,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-");
  delay(500);
  
  lcd.setCursor(11,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-V");
  delay(500);
  
    lcd.setCursor(10,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VI");
  delay(500);

   
    lcd.setCursor(9,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VIN");
  delay(500);
  
   
    lcd.setCursor(8,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VIND");
  delay(500);
 
   lcd.setCursor(7,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VINDO");
  delay(500);
  
    lcd.setCursor(6,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VINDO!");
  delay(500);
  lcd.clear();//iniciar o lcd limpo 
  lcd.setCursor(5,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VINDO!");
  delay(500);
  lcd.clear();//iniciar o lcd limpo 
  lcd.setCursor(4,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VINDO!");
  delay(500);
  lcd.clear();//iniciar o lcd limpo 
  lcd.setCursor(3,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VINDO!");
  delay(500);
  lcd.clear();//iniciar o lcd limpo 
  lcd.setCursor(2,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VINDO!");
  delay(500);
  lcd.clear();//iniciar o lcd limpo 
  lcd.setCursor(1,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VINDO!");
  delay(500);
lcd.clear();//iniciar o lcd limpo 
  lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("BEM-VINDO!");
  delay(500);
  
 lcd.clear();//iniciar o lcd limpo   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("EM-VINDO!");
  delay(500);
  lcd.clear();//iniciar o lcd limpo 
   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("M-VINDO!");
  delay(500);
 lcd.clear();//iniciar o lcd limpo  
   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("-VINDO!");
  delay(500);
 lcd.clear();//iniciar o lcd limpo  
   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("VINDO!");
  delay(500);
 lcd.clear();//iniciar o lcd limpo 
   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("INDO!");
  delay(500);
 lcd.clear();//iniciar o lcd limpo 
   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("NDO!");
  delay(500);
lcd.clear();//iniciar o lcd limpo  
   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("DO!");
  delay(500);
 lcd.clear();//iniciar o lcd limpo 
   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("O!");
  delay(500);
 lcd.clear();//iniciar o lcd limpo 
   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print("!");
  delay(500);
 lcd.clear();//iniciar o lcd limpo 
   lcd.setCursor(0,0); //inciar a escrita na linha 0 coluna 0
  lcd.print(" ");
  delay(500);
 
  lcd.clear();//iniciar o lcd limpo 
  
*/  
}