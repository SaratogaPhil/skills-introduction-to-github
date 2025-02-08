
  int pon = 1;//  pwr on off button
  int ccr = 2;//  credit card reader
  int lite = 3;//  headlight on-off button
  int spkr = 4;//  speaker
  int fuel = 5;// fuel 
  int pwr = 6;// power on indicator
  int hedlite = 7 ;// headlight lamp
  void setup() 
  {
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
digitalRead(pon);
digitalRead(ccr);
digitalRead(lite);
digitalWrite(spkr, LOW);
digitalWrite(fuel, LOW);
digitalWrite(pwr, LOW);
digitalWrite(hedlite, LOW);

delay(1000); // in ms
if(digitalRead(pon) == HIGH ){
  digitalWrite(pwr, HIGH);
}
else{
  digitalWrite(pwr, LOW);
}
delay(2000);
if(digitalRead(ccr) == HIGH ){
  digitalWrite(hedlite, HIGH);
}
else{
  digitalWrite(hedlite, LOW);
  delay(2000);
  
}
}
