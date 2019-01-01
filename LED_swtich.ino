
int RED = 8;
int Blue= 7;
int White =6;
int Green =5;
 
byte leds = 0;

void setup() 
{
  pinMode(RED, OUTPUT);
  pinMode(Blue, OUTPUT);  
  pinMode(White, OUTPUT);  
  pinMode(Green, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(White, LOW);
  digitalWrite(Green, LOW);
}

void loop() 
{
  digitalWrite(RED, HIGH); // on
  delay(1000);
  digitalWrite(RED,LOW); // off
  delay(1000);
  digitalWrite(Blue, HIGH);
  delay(1000);
  digitalWrite(Blue,LOW);
  delay(1000);
  digitalWrite(White, HIGH);
  delay(1000);
  digitalWrite(White,LOW);
  delay(1000);
  digitalWrite(Green, HIGH);
  delay(1000);
  digitalWrite(Green,LOW);
  delay(1000);

}
