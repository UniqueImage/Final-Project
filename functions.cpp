/**
 * Started by Najib 3/21/18
 **/


///////////////////////////////////////////////////////////////////
// INCLUDES GO HERE
///////////////////////////////////////////////////////////////////
#include "functions.h"
#include "bigint/bigint.h"


///////////////////////////////////////////////////////////////////
// FUNCTION DEFINITIONS GO HERE
///////////////////////////////////////////////////////////////////
void make_triFreq(){
    for(int i = 0; i < 17575; i++){
        triFreq.push_back(0);
    }
}

void frequencies(std::string filename){
    std::ifstream infile;
    infile.open(filename);
    
    std::string str;
    char ch;
    char newCh;
    
    
    
    while (infile.get(ch)) {
        if(str.length() == 3){
            int expon = 2;
            int j = 0;
            for(int i = 0; i < 3; i++){
                char index = str[i];
                j += (int(index) - 97) + pow(26, expon);
                triFreq[j] += 1;
                expon -= 1;
            }
            str = "";
        }
        
        if(ch - '\0' >= 65 && ch - '\0' <= 90){
            newCh = tolower(ch);
            str += newCh;
        }
        
        if(ch - '\0' >= 97 && ch - '\0' <= 122){
            str += newCh;
        }
        
    }
    
    infile.close();
}
