int SensorPIR = 3;
int Buzzer = 5;

void setup()
{
  
  pinMode(SensorPIR,INPUT);
  pinMode(Buzzer,OUTPUT);
  
}

void loop()
{
  
  int detectarPresenca = digitalRead(SensorPIR);  
  if(detectarPresenca == 1){
  tone(Buzzer,264);
  }else{
  noTone(Buzzer);
  }
  
}
