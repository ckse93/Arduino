
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = A0; // analog pin connected to X output
const int Y_pin = A1; // analog pin connected to Y output

int west = 8;
int north = 9;
int east = 10;
int south = 11;

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);

  pinMode(west,OUTPUT);
  digitalWrite(west,LOW);
  
  pinMode(east,OUTPUT);
  digitalWrite(east,LOW);
  
  pinMode(north,OUTPUT);
  digitalWrite(north,LOW);
  
  pinMode(south,OUTPUT);
  digitalWrite(south,LOW);
}

void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");

  if (analogRead(X_pin)>600){
    digitalWrite(east,HIGH);
    }
   if (analogRead(X_pin)==517){
    digitalWrite(east,LOW);
    digitalWrite(west,LOW);
    }
  if (analogRead(Y_pin) == 509){
    digitalWrite(south,LOW);
    digitalWrite(north,LOW);
    }
  if(analogRead(X_pin)<400){
    digitalWrite(west,HIGH);
    }
   if(analogRead(Y_pin)>509){
    digitalWrite(south,HIGH);
    }
    if(analogRead(Y_pin)<509){
    digitalWrite(north,HIGH);
    }
}
