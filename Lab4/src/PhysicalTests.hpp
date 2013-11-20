* PhysicalTests.hpp
 *
 *  Created on: Nov 13, 2013
 *      Author: tsentsho
 */
#include <iostream>
#include <string>

#ifndef PHYSICALTESTS_HPP_
#define PHYSICALTESTS_HPP_

using namespace std;

class PhysicalTests{
    protected:
    int pulse;
    int temperature;
    int respiratory_rate;

    public:

    void vital_signs(int pulse, int temperature, int respiratory_rate);
    void blood_pressure(void);
    void Urine_test(void);
};

class vital_signs:public PhysicalTests{ //Function will receive vital sign readings for the patient and designate either high, low or normal.
public:
    };

class blood_pressure:public PhysicalTests{ //Blood pressure of patient will be entered and function will designate either high, low or normal.
public:
   };


class Urine_test:public PhysicalTests{ //Function will check if urine sample of patient any abnormalities
public:
   };


#endif /* PHYSICALTESTS_HPP_ */
