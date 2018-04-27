/**
 * Started by Najib 3/21/18
 **/

///////////////////////////////////////////////////////////////////
// INCLUDES GO HERE
///////////////////////////////////////////////////////////////////
#include "functions.h"
#include "bigint/bigint.h"


int main(int argc, char *argv[]) {
    ///////////////////////////////////////////////////////////////////
    // MAKE YOUR OWN MAIN.
    ///////////////////////////////////////////////////////////////////

    frequencies(); //intializes a new frequency

    frequencies f (argv[1]); // intializes if something is entered

    (void) argc;

    (void) argv;
    
    // create a vector that contains a vector <int> -> this stores the result of triFreq for
        // each language
    
    //for (unsigned int i = 1; i < argc-1; i++){
        //calculate a vector of frequencies (accessed with argv[i])
        //push that into the 2D vector to store each triFreq vector for each languge}
    
    //now we have a 2D vector storing each freq vector for the languages 
    //create--calculate the frequency vector the the test file as well to then be compared
   
        //double maxVal = -1000;
        //unsigned int indexMax = -1;
    
    //for each vector<int> in 2D vector of language frequencies...    
        //double x = similarities( 2DVector[i], triFreqTest Vector);
        //if(maxVal < x){
            //indexMax = i;
            //maxVal = x;}
    
    //the language vector is @ the indexMax is the answer 
    
  
        
    
    return 0;
}
