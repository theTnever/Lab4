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

    public:
    PhysicalTests(){}

};

class vital_signs:public PhysicalTests{ //Class  will receive vital sign readings for the patient
    protected:

	int heartbeatspersec;
	int respitationrate;
	int temperatureReading;


    public:

	void PulseRate(){}//Function will receive patient pulse rate and designate either high, low or normal.
	void RespiratoryRate(){}//Function will receive patient respiratory rate and designate either high, low or normal.
	void BodyTemp(){}//Function will receive patient body temperature and designate either high, low or normal.

    };

class blood_pressure:public PhysicalTests{ //Blood pressure of patient will be entered and function will designate either high, low or normal.

    protected:

	int systolic;
	int diastolic;

    public:
	void BP_values(){}//Function will receive patient BP and designate either high, low or normal.

   };


class Urine_test:public PhysicalTests{ //Class will check if urine sample of patient any abnormalities
    protected:

	int Urine_pH;

    public:
	void Ions_andTraceMetals(){}//Function will check if patient urine sample has any ion or trace metal abnormalities
	void Proteins_presence(){}//Function will check if patient urine sample has any proteins, Proteins should be absent in normal urine.
	void Glucose _presence(){}//Function will check if patient urine sample has any glucose,glucose should be absent in normal urine.

  };


#endif /* PHYSICALTESTS_HPP_ */
