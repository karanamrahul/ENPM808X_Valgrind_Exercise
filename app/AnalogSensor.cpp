/**
 *  @file    ../app/AnalogSensor.cpp
 *  @author  Rahul Karanam
 *  @copyright Rahul Karanam
 *  @brief  ENPM808X_Valgrind_Exercise
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>


/**
 * @brief Create a constructor class for AnalogSensor.
 * @param  int samples - the sensor sample readings 
 * @return None
 */

explicit AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}


/**
 * @brief Created Class Destructor
 * @return None
 */


AnalogSensor::~AnalogSensor() {
}


/**
 * @brief Create a function which will average the sensor inputs .
 * @param  int mSamples - the sensor sample readings 
 * @return result
 */


int AnalogSensor::Read() {
    // std::vector<int> *readings = new std::vector<int>(mSamples, 10);
	/* created a new vector which has been initalized and removed new 
	because it creates memory leakage to a uninitalized vector */
    std::vector<int> readings(mSamples, 10);
    double result
    = std::accumulate(readings.begin(), readings.end(), 0.0) / readings.size();
    return result;
}


