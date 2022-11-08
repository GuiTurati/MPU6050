#include "MPU6050.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"
#include <Wire.h>


MPU6050::MPU6050(int endereco) {
	endereco_MPU = endereco;
}

void MPU6050::begin() {
	Wire.begin();
	Wire.beginTransmission(endereco_MPU);
	Wire.write(0x6B);
	Wire.write(0);
	Wire.endTransmission(true);
}


float MPU6050::getAcel_x() {
	Wire.beginTransmission(endereco_MPU);
	Wire.write(0x3B);
	Wire.endTransmission(false);

	Wire.requestFrom(endereco_MPU, 14, true);

	acel_x = Wire.read() << 8 | Wire.read();
	acel_y = Wire.read() << 8  | Wire.read();
	acel_z = Wire.read() << 8 | Wire.read();
	temp = Wire.read() << 8 | Wire.read();
	giro_x = Wire.read() << 8 | Wire.read();
	giro_y = Wire.read() << 8  | Wire.read();
	giro_z = Wire.read() << 8 | Wire.read();

	acel_x = acel_x / 16384.0;
	acel_y = acel_y / 16384.0;
	acel_z = acel_z / 16384.0;
	temp = temp / 340.00 + 36.53;
	giro_x = giro_x / 131.0;
	giro_y = giro_y / 131.0;
	giro_z = giro_z / 131.0;
	return acel_x;
}
float MPU6050::getAcel_y() {
	Wire.beginTransmission(endereco_MPU);
	Wire.write(0x3B);
	Wire.endTransmission(false);

	Wire.requestFrom(endereco_MPU, 14, true);

	acel_x = Wire.read() << 8 | Wire.read();
	acel_y = Wire.read() << 8  | Wire.read();
	acel_z = Wire.read() << 8 | Wire.read();
	temp = Wire.read() << 8 | Wire.read();
	giro_x = Wire.read() << 8 | Wire.read();
	giro_y = Wire.read() << 8  | Wire.read();
	giro_z = Wire.read() << 8 | Wire.read();

	acel_x = acel_x / 16384.0;
	acel_y = acel_y / 16384.0;
	acel_z = acel_z / 16384.0;
	temp = temp / 340.00 + 36.53;
	giro_x = giro_x / 131.0;
	giro_y = giro_y / 131.0;
	giro_z = giro_z / 131.0;
	return acel_y;
}
float MPU6050::getAcel_z() {
	Wire.beginTransmission(endereco_MPU);
	Wire.write(0x3B);
	Wire.endTransmission(false);

	Wire.requestFrom(endereco_MPU, 14, true);

	acel_x = Wire.read() << 8 | Wire.read();
	acel_y = Wire.read() << 8  | Wire.read();
	acel_z = Wire.read() << 8 | Wire.read();
	temp = Wire.read() << 8 | Wire.read();
	giro_x = Wire.read() << 8 | Wire.read();
	giro_y = Wire.read() << 8  | Wire.read();
	giro_z = Wire.read() << 8 | Wire.read();

	acel_x = acel_x / 16384.0;
	acel_y = acel_y / 16384.0;
	acel_z = acel_z / 16384.0;
	temp = temp / 340.00 + 36.53;
	giro_x = giro_x / 131.0;
	giro_y = giro_y / 131.0;
	giro_z = giro_z / 131.0;
	return acel_z;
}
float MPU6050::getGiro_x() {
	Wire.beginTransmission(endereco_MPU);
	Wire.write(0x3B);
	Wire.endTransmission(false);

	Wire.requestFrom(endereco_MPU, 14, true);

	acel_x = Wire.read() << 8 | Wire.read();
	acel_y = Wire.read() << 8  | Wire.read();
	acel_z = Wire.read() << 8 | Wire.read();
	temp = Wire.read() << 8 | Wire.read();
	giro_x = Wire.read() << 8 | Wire.read();
	giro_y = Wire.read() << 8  | Wire.read();
	giro_z = Wire.read() << 8 | Wire.read();

	acel_x = acel_x / 16384.0;
	acel_y = acel_y / 16384.0;
	acel_z = acel_z / 16384.0;
	temp = temp / 340.00 + 36.53;
	giro_x = giro_x / 131.0;
	giro_y = giro_y / 131.0;
	giro_z = giro_z / 131.0;
	return giro_x;
}
float MPU6050::getGiro_y() {
	Wire.beginTransmission(endereco_MPU);
	Wire.write(0x3B);
	Wire.endTransmission(false);

	Wire.requestFrom(endereco_MPU, 14, true);

	acel_x = Wire.read() << 8 | Wire.read();
	acel_y = Wire.read() << 8  | Wire.read();
	acel_z = Wire.read() << 8 | Wire.read();
	temp = Wire.read() << 8 | Wire.read();
	giro_x = Wire.read() << 8 | Wire.read();
	giro_y = Wire.read() << 8  | Wire.read();
	giro_z = Wire.read() << 8 | Wire.read();

	acel_x = acel_x / 16384.0;
	acel_y = acel_y / 16384.0;
	acel_z = acel_z / 16384.0;
	temp = temp / 340.00 + 36.53;
	giro_x = giro_x / 131.0;
	giro_y = giro_y / 131.0;
	giro_z = giro_z / 131.0;
	return giro_y;
}
float MPU6050::getGiro_z() {
	Wire.beginTransmission(endereco_MPU);
	Wire.write(0x3B);
	Wire.endTransmission(false);

	Wire.requestFrom(endereco_MPU, 14, true);

	acel_x = Wire.read() << 8 | Wire.read();
	acel_y = Wire.read() << 8  | Wire.read();
	acel_z = Wire.read() << 8 | Wire.read();
	temp = Wire.read() << 8 | Wire.read();
	giro_x = Wire.read() << 8 | Wire.read();
	giro_y = Wire.read() << 8  | Wire.read();
	giro_z = Wire.read() << 8 | Wire.read();

	acel_x = acel_x / 16384.0;
	acel_y = acel_y / 16384.0;
	acel_z = acel_z / 16384.0;
	temp = temp / 340.00 + 36.53;
	giro_x = giro_x / 131.0;
	giro_y = giro_y / 131.0;
	giro_z = giro_z / 131.0;
	return giro_z;
}
float MPU6050::getTemp() {
	Wire.beginTransmission(endereco_MPU);
	Wire.write(0x3B);
	Wire.endTransmission(false);

	Wire.requestFrom(endereco_MPU, 14, true);

	acel_x = Wire.read() << 8 | Wire.read();
	acel_y = Wire.read() << 8  | Wire.read();
	acel_z = Wire.read() << 8 | Wire.read();
	temp = Wire.read() << 8 | Wire.read();
	giro_x = Wire.read() << 8 | Wire.read();
	giro_y = Wire.read() << 8  | Wire.read();
	giro_z = Wire.read() << 8 | Wire.read();

	acel_x = acel_x / 16384.0;
	acel_y = acel_y / 16384.0;
	acel_z = acel_z / 16384.0;
	temp = temp / 340.00 + 36.53;
	giro_x = giro_x / 131.0;
	giro_y = giro_y / 131.0;
	giro_z = giro_z / 131.0;
	return temp;
}