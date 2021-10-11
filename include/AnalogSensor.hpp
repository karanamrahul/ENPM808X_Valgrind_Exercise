/**
 *  @file    ../include/AnalogSensor.hpp
 *  @author  Rahul Karanam
 *  @copyright Rahul Karanam
 *  @brief ENPM808X_Valgrind
 */




#pragma once

#include <iostream>


/**
 * @brief Create a class  AnalogSensor which will take sensor inputs .
 * @param  int samples - the sensor sample readings
 * @return None
 */
class AnalogSensor
{
public:
    AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
private:
    unsigned int mSamples;
};
