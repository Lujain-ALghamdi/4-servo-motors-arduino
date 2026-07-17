#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {

  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

}


// Sweep function
void sweepAll() {

  // من 0 إلى 180 درجة
  for (int pos = 0; pos <= 180; pos++) {

    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);

    delay(15);
  }


  // الرجوع من 180 إلى 0 درجة
  for (int pos = 180; pos >= 0; pos--) {

    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);

    delay(15);
  }

}


void loop() {


  // تشغيل Sweep لمدة ثانيتين
  unsigned long startTime = millis();

  while (millis() - startTime < 2000) {

    sweepAll();

  }


  // تثبيت جميع السيرفو على 90 درجة
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);


  // توقف البرنامج هنا
  while(true){

  }

}