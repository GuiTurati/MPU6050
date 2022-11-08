#ifndef MPU6050_h
#define MPU6050_h

#include "Arduino.h"

class MPU6050 {
  public:
	MPU6050(int endereco = 0x68);
	void begin();
	float getAcel_x();
	float getAcel_y();
	float getAcel_z();
	float getGiro_x();
	float getGiro_y();
	float getGiro_z();
	float getTemp();
  private:
	int endereco_MPU;
	float acel_x;
	float acel_y;
	float acel_z;
	float giro_x;
	float giro_y;
	float giro_z;
	float temp;
};

#endif