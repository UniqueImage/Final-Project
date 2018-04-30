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
typedef uint_least8_t vec_bin;

///////////////////////////////////////////////////////////////////
// FUNCTION HEADERS GO HERE
///////////////////////////////////////////////////////////////////


class frequencies{

  private:
  std:: vector <int> triFreq;// creates the vector to be used
  std:: vector <vec_bin> traingLang; // to store the triFreq of each language 
  std:: vector <vec_bin> testFile; // the test file frequency to be stored and compared
  
 
  
  

  public:

    frequencies(); // default constructor
    frequencies(std::string filename);//parametrized constructor
    double sim(std:: vector <int> triFreq); // parametrized constructor - takes in the triFreq vector?

};

#endif
