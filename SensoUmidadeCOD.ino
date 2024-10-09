/// Biblioteca para conexão serial do sensor
#include <SoftwareSerial.h>

// Variável do sensor
int sensor = A0;

void setup() {
  // Definir o sensor como entrada
  pinMode(sensor, INPUT);
  
  // Utilizando o monitor serial
  Serial.begin(9600);
}

void loop() {
  // Guardar o valor lido pelo sensor em uma variável
  int umidade = analogRead(sensor);

  // Verificando os níveis de umidade
  if (umidade < 300) {
    Serial.print("Solo esta SECO | ");
    Serial.print("UMIDADE => ");
    Serial.println(umidade);
  } 
  
  if (umidade >= 300 && umidade <= 500) {
    Serial.print("Solo esta IDEAL | ");
    Serial.print("UMIDADE => ");
    Serial.println(umidade);
  } 
  
  if (umidade > 500) {
    Serial.print("Solo esta UMIDO | ");
    Serial.print("UMIDADE => ");
    Serial.println(umidade);
  }


  delay(1000);
}
