Const int motor_close_studium=13; const int motor_open_studium=12;
Int temp; int temppin=1; void setup () {   Serial. Begin (9600);  
 Pin Mode (2, OUTPUT); pin Mode (motor_close_studium, OUTPUT); pin Mode (motor_open_studium, OUTPUT);
} 
Void loop () {if (analog Read (0) <300) Serial.println ("Heavy Rain"); else if (analog Read (0) <500) Serial.println ("Moderate Rain");   else Serial.println ("No Rain");
 //if (digital Read (2) == HIGH) Serial.println ("No Rain Detected");
//else Serial.println ("Rain Detected");  
Delay (250); if (analog Read(0)<300)   digital Write(motor_close_studium, HIGH);
 Delay (1000); // time motor take to close the stadium
 Digital Write (motor_close_studium, LOW); // stop the motor after close operation which take specific required time
}  
 Temp= analog Read (temp pin); float mv= (temp/1024)*50000;
Float cel= mv/10;
 If (cel<= 18) {
Digital Write (motor_open_studium, HIGH);
 Delay (1000); // time motor take to close the stadium
 Digital Write (motor_copen_studium, LOW); // stop the motor after close operation which take specific required time
}
 If (cel>= 38) {
Digital Write (motor_close_studium, HIGH);
 Delay (1000); // time motor take to close the stadium
 Digital Write(motor_close_studium, LOW); // stop the motor after close operation which take specific required time
 
 
 }
}
