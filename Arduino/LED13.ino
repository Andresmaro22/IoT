int led=13;
void setup() {
  //Andres Martinez
  pinMode(led,OUTPUT);//number Port and Mode type(OUTPUT OR INPUT);
}

void loop() {
  
  digitalWrite(led,HIGH);
  delay(100);//1000=1SEG
  digitalWrite(led,LOW);
  delay(100);
}
