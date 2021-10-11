#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
   // std::vector<int> *readings = new std::vector<int>(mSamples, 10);
   /* created a new vector which has been initalized and
      removed new because it creates memory leakage to a uninitalized vector */
    std::vector<int> readings(mSamples,10);
    double result = std::accumulate( readings.begin(), readings.end(), 0.0 ) / readings.size();
    return result;
}


