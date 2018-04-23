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
  
  //vectors for all the different testing_languages files to be used
  std:: vector <vec_bin> triBork;
  std:: vector <vec_bin> triCatalan;
  std:: vector <vec_bin> triCzech;
  std:: vector <vec_bin> triDutch;
  std:: vector <vec_bin> triEnglish;
  std:: vector <vec_bin> triFinnish;
  std:: vector <vec_bin> triFrench;
  std:: vector <vec_bin> triGerman;
  std:: vector <vec_bin> triIceland;
  std:: vector <vec_bin> triItalian;
  std:: vector <vec_bin> triMaori;
  std:: vector <vec_bin> triRomanian;
  std:: vector <vec_bin> triSpanish;
  std:: vector <vec_bin> triSwahili;
  std:: vector <vec_bin> triSwedish;
  
  

  public:

    frequencies(); // default constructor
    frequencies(std::string filename);//parametrized constructor

};

#endif
