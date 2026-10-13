int buzzpin = 7;
int potpin = A2;
int dt = 2000;
int v2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzpin,OUTPUT);
  pinMode(potpin,INPUT);

}


void loop() {
  // put your main code here, to run repeatedly:

  v2 = analogRead(potpin);
  if (v2>=1000){
    digitalWrite(buzzpin,HIGH);
    Serial.println(v2);
  }
  if (v2<1000) {
    digitalWrite(buzzpin,LOW);
    Serial.println(v2);
  }

}
