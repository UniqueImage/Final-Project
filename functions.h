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
    std:: vector <int> triFreq;

  public:
    void readFile();
    void make_triFreq(std:: vector <int> triFreq);
    frequencies(std::string filename, std:: vector <int> triFreq);


};



#endif
