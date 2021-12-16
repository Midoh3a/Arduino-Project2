#define EN 10
#define IN1 9
#define IN2 8
int buzzer= 2 ;



void setup()
{
  pinMode(IN1, OUTPUT); // motor pin 1
  pinMode(IN2, OUTPUT); // motor pin 2
  pinMode(buzzer, OUTPUT);
  pinMode(EN, OUTPUT);
  
  Serial.begin(9600); 
}

void loop()
{
  analogWrite(EN,150);
       digitalWrite(IN1, HIGH);
       digitalWrite(IN2, LOW);
       
      tone(buzzer,1000);
}
