//Project description
/*************************
  Name: displayNoSerial
  Creation Date: 26/05/2022
  Last Modified Date: 26/05/2022
  Creator: Guilherme Turati Pedroza
  Description: Sends the values of the MPU-6050 to the Serial Monitor
*************************/

//Inclusion of Libraries
#include <MPU6050.h>

//Instantiating Objects
MPU6050 sensor;

/*********SETUP*********/
void setup() {
  Serial.begin(9600);
  sensor.begin();
}
/*********LOOP*********/
void loop() {
  sensor.MPU_loop();
  Serial.print("AcX: ");
  Serial.print(sensor.getAcel_x());
  Serial.print(" | AcY: ");
  Serial.print(sensor.getAcel_y());
  Serial.print(" | AcZ: ");
  Serial.print(sensor.getAcel_z());
  Serial.print("");

  // Prints the temperature value on the Serial Monitor
  Serial.print(" | Tmp: ");
  Serial.print(sensor.getTemp());

  // Prints acceleration values on the Serial Monitor
  Serial.print(" | GyX: ");
  Serial.print(sensor.getGiro_x());
  Serial.print(" | GyY: ");
  Serial.print(sensor.getGiro_y());
  Serial.print(" | GyZ: ");
  Serial.println(sensor.getGiro_z());
  delay(500);
}
