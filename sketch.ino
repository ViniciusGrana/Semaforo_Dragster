const int ledPins[] = {14, 2, 12, 4, 5, 13, 19};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
const int espera_1 = 1000;
const int espera_2 = 500;
const int espera_3 = 11500;
void setup(){
for(int i = 0; i < numLeds; i++){
  pinMode(ledPins[i], OUTPUT);
  }
}

void loop(){

for(int i = 0; i < numLeds; i++){
  if(i < 4){
    digitalWrite(ledPins[i], HIGH);
    delay(espera_2);
  }
  if(i > 3 && i < 6){
    digitalWrite(ledPins[i], HIGH);
    delay(espera_1);
    digitalWrite(ledPins[i], LOW);
    delay(espera_1);
    i++;
    digitalWrite(ledPins[i], HIGH);
    delay(espera_1);
    digitalWrite(ledPins[i], LOW);
    delay(espera_1);
  }
  if(i == 6){
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[i], HIGH);
    delay(espera_3);
    digitalWrite(ledPins[i], LOW);
  }
}
}
