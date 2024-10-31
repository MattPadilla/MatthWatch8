#ifndef IMU_H
#define IMU_H

#include "include/spl/stm8s.h"
#include "include/spl/stm8s_i2c.h"

#define IMU_I2C_ADDRESS 0xAD0

// There are 128x64 and there are 8 bit in each section of the array
typedef struct
{

    volatile int16_t heading;
    volatile int16_t x_accel;
    volatile int16_t y_accel;
    volatile int16_t z_accel;
    volatile int16_t x_rotation;
    volatile int16_t y_rotation;
    volatile int16_t z_rotation;


} Imu;

void begin_read(Imu)

void read_imu_data(Imu);

void end_read(Imu);


extern Imu imu;

#endif
