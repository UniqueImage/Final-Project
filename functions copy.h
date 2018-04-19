/**
 * Started by Najib 3/21/18
 **/

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include "bigint/bigint.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdint.h>
#include <fstream>
#include <iostream>
#include <cmath>

///////////////////////////////////////////////////////////////////
// FUNCTION HEADERS GO HERE
///////////////////////////////////////////////////////////////////


class frequencies{

  private:
  std:: vector <int> triFreq;// creates the vector to be used

  public:

    frequencies(); // default constructor
    frequencies(std::string filename);//parametrized constructor

};

#endif