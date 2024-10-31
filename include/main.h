/**
  *
  * @file main.h
  * @author Matthew Adam Padilla
  * @date 30-October-2024
  * 
  * 
  *
  */



#ifndef MAIN_H
#define MAIN_H

    // Includes
    #include "include/OLED128x64.h"
    #include "include/IMU.h"
    #include "include/spl/stm8s.h"

    // Important Constants
    #define I2C_PORT GPIOC
    #define SDA_PIN (uint8_t)0x8
    #define SCL_PIN (uint8_t)0x10

#endif