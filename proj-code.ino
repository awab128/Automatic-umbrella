const int motor_close_umbrella = 13;
const int motor_open_umbrella = 12;
int temp;
int tempPin = 1;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(motor_close_umbrella, OUTPUT);
  pinMode(motor_open_umbrella, OUTPUT);
}

void loop() {
  if (analogRead(0) < 300)
    Serial.println("Heavy Rain");
  else if (analogRead(0) < 500)
    Serial.println("Moderate Rain");
  else
    Serial.println("No Rain");

  // if (digitalRead(2) == HIGH)
  //   Serial.println("No Rain Detected");
  // else
  //   Serial.println("Rain Detected");

  delay(250);

  if (analogRead(0) < 300) {
    digitalWrite(motor_close_umbrella, HIGH);
    delay(1000); // time motor takes to close the umbrella
    digitalWrite(motor_close_umbrella, LOW); // stop the motor after close operation which takes a specific required time
  }

  temp = analogRead(tempPin);
  float mv = (temp / 1024.0) * 5000; // corrected the formula
  float cel = mv / 10;

  if (cel <= 18) {
    digitalWrite(motor_open_umbrella, HIGH);
    delay(1000); // time motor takes to open the umbrella
    digitalWrite(motor_open_umbrella, LOW); // stop the motor after open operation which takes a specific required time
  }

  if (cel >= 38) {
    digitalWrite(motor_close_umbrella, HIGH);
    delay(1000); // time motor takes to close the umbrella
    digitalWrite(motor_close_umbrella, LOW); // stop the motor after close operation which takes a specific required time
  }
}
