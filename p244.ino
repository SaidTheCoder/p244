#define Buzzer 26
int TOUCH_pin_1_value;
int TOUCH_pin_2_value;
int TOUCH_pin_3_value;
int TOUCH_pin_4_value;
int TOUCH_pin_5_value;
const int VALUE_THRESHOLD=30;

void setup() {
  pinMode(Buzzer,OUTPUT);
  Serial.begin(115200);
  delay(20000);
  digitalWrite(Buzzer.LOW)

}

void loop() { 
  TOUCH_pin_1_value=touchRead(T5);
  TOUCH_pin_2_value=touchRead(T6);
  TOUCH_pin_3_value=touchRead(T7);
  TOUCH_pin_4_value=touchRead(T8);
  TOUCH_pin_5_value=touchRead(T59);
  Serial.print("touch pin 1 value:");
  Serial.print(TOUCH_pin_1_value);
  Serial.print(" ");
  Serial.print("touch pin 2 value:");
  Serial.print(TOUCH_pin_2_value);
  Serial.print(" ");
  Serial.print("touch pin 3 value:");
  Serial.print(TOUCH_pin_3_value);
  Serial.print(" ");
  Serial.print("touch pin 4 value:");
  Serial.print(TOUCH_pin_4_value);
  Serial.print(" ");
  Serial.print("touch pin 5 value:");
  Serial.print(TOUCH_pin_5_value);
  Serial.print(" ");
  delay(100);

  if(TOUCH_pin_1_value<VALUE_THRESHOLD){
    for(int i=0;i<2;i++){
      digitalWrite(Buzzer,HIGH);
      delay(100);
      digitalWrite(Buzzer,LOW);
      delay(100);
      }
    }

  if(TOUCH_pin_2_value<VALUE_THRESHOLD){
    for(int i=0;i<5;i++){
      digitalWrite(Buzzer,HIGH);
      delay(50);
      digitalWrite(Buzzer,LOW);
      delay(50);
      }
    }

  if(TOUCH_pin_3_value<VALUE_THRESHOLD){
    for(int i=0;i<8;i++){
      digitalWrite(Buzzer,HIGH);
      delay(25);
      digitalWrite(Buzzer,LOW);
      delay(25);
      }
    }
    
  if(TOUCH_pin_4_value<VALUE_THRESHOLD){
    for(int i=0;i<11;i++){
      digitalWrite(Buzzer,HIGH);
      delay(16);
      digitalWrite(Buzzer,LOW);
      delay(15);
      }
    }
    
  if(TOUCH_pin_5_value<VALUE_THRESHOLD){
    for(int i=0;i<15;i++){
      digitalWrite(Buzzer,HIGH);
      delay(5);
      digitalWrite(Buzzer,LOW);
      delay(5);
      }
    }
  else{
    digitalWrite(2,LOW)
    }
}
