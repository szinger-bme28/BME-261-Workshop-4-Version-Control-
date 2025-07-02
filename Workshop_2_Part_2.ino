const int Photoresistor = A0;
const int Red = 9;
const int Green = 10;
const int Blue = 11;

const int Bright = 800;
const int Dark= 300;

void setup() {
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
}

void loop() {
  int Environment = analogRead(Photoresistor);

  if (Environment > Bright) {
    analogWrite(Red, 0);
    analogWrite(Green, 20);
    analogWrite(Blue, 0);
  } 
  
  else if (Environment < Dark) {
    analogWrite(Red, 150); 
    analogWrite(Green, 0);
    analogWrite(Blue, 0);
  } 
  
  else {
    analogWrite(Red, 0);
    analogWrite(Green, 0);
    analogWrite(Blue, 120); 
  }

  delay(100);
}
