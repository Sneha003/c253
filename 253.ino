#define Button_pin 22
#define relay_pin 18

int relay_state=LOW;
int button_state;
int last_button_state;

void setup() {
  Serial.begin(115200);
  pinMode(Button_pin,INPUT_PULLUP);
  pinMode(relay_pin,OUTPUT);

  button_state=digitalRead(Button_pin);

  

}

void loop() {
  last_button_state=button_state;
  button_state=digitalRead(Button_pin);
  if(last_button_state == HIGH && button_state== LOW){

  relay_state=!relay_state;
  digitalWrite(relay_pin,relay_state);
  }

}
