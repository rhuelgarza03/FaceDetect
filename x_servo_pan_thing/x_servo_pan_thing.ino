#include <Servo.h>

int servoPosition;
Servo serX;
int posX;
String tempModify;

void setup() {
  serX.attach(9);
  Serial.begin(9600);
  Serial.setTimeout(10);

  // set the servo to the middle
  serX.write(90);
}

void loop() {
  /*
  while (Serial.available() > 0) {
    tempModify = Serial.readString();
    serX.write(parseDataX(tempModify));
  }
  */
}
int coord = 90;
// 1-530?
// screen width = 630
void serialEvent() {
  //tempModify = Serial.readString();
  //serX.write(parseDataX(tempModify));

  /*
  tempModify = Serial.readString();
  int thing = parseDataX(tempModify);

  posX = map(thing, 1, 630, 0, 180);
  serX.write(posX);
  */

  tempModify = Serial.readString();
  int thing = parseDataX(tempModify);
  if (thing < 630/2) {
    coord -= 1;
  } else if (thing > 630/2) {
    coord += 1;
  }
  posX = map(thing, 1, 630, 0, 180);
  serX.write(coord);
}


int parseDataX(String data) {
  data.remove(data.indexOf(":"));
  data.remove(data.indexOf("X"), 1);
  return data.toInt();
}
