/*
int estado;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estado = digitalRead(7);
  
  if(estado == LOW) {
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(8, LOW);
  
  }
}
*/
String cor;

void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.println("Digite uma cor: ");
}

void loop() 
{
  if(Serial.available()) {
    cor = Serial.readString();
    cor.trim();
    if(cor == "verde") {
      Serial.println(cor);
      digitalWrite(11, HIGH);
    } 
    if(cor == "amarelo") {
      Serial.println(cor);
      digitalWrite(12, HIGH);
    }
    if(cor == "vermelho") {
      Serial.println(cor);
      digitalWrite(13, HIGH);
    }
    if(cor == "reset"){
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    }
  }
 
     
}
