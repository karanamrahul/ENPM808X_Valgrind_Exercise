/**
 *  @file    ../app/main.cpp
 *  @author  Rahul Karanam
 *  @copyright Rahul Karanam
 *  @brief ENPM808X_Valgrind
 */

#include <iostream>
#include <AnalogSensor.hpp>

/**
 * @brief Create a program to print out the average sensor readings .
 * @param  int samples - the sensor sample readings 
 * @return  int 0
 */

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator= if(lightSensor.Read() > 0 ? true : false);
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
