#include <IRremote.h> // libraries for IRremote
const int IRpin=2; // connect Tsop1738 sensor to arduino pin3

IRrecv irrecv(IRpin);
decode_results results;

#define IN1 7
#define IN2 6
#define IN3 5
#define IN4 4

bool i=false;
bool j=false;
bool k=false;
bool l=false;
bool m=false;

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  irrecv.enableIRIn(); // Start the receiver
  irrecv.blink13(true);
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    delay(100);

    if(results.value==0x71F7D) {
      i=!i;
      digitalWrite(IN1, i);
    }
    if(results.value==0x117DD) {
      j=!j;
      digitalWrite(IN2, j);
    }
    if(results.value==0x117DD0) {
      j=j-1;
      digitalWrite(IN2, j);
    }
    // delay(200);

    if(results.value==0x1FEF807) {
      k=k+1;
      digitalWrite(IN3, k);
    }
    // delay(200);

    if(results.value==0x1FE30CF) {
      l=l+1;
      digitalWrite(IN4, 1);
    }
    // delay(200);

    if(results.value==0xFFE) {
      m=1-m;
      digitalWrite(IN1, m);
      digitalWrite(IN2, m);
      digitalWrite(IN3, m);
      digitalWrite(IN4, m);
    }
    // delay(200);

    irrecv.resume(); // Receive the next value
    //delay(100);
  }
}
