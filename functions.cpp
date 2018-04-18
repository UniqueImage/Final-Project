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
frequencies::frequencies(){
    //std::cout<<"here1"<<std::endl;
    for(int i = 0; i < 17576; i++){
        triFreq.push_back(0);
    }
}

frequencies::frequencies(std::string filename){
    
    std::ifstream infile;
    infile.open(filename.c_str());
    
    std::string str;
    char ch;
    char newCh;
    
    
    int counter = 0;
    
    //create counter
    //if counter > 2
    //else
    
    for(int i = 0; i < 17576; i++){
        triFreq.push_back(0);
    }
    
    
    while (infile.get(ch)) {
        
        
        if(counter > 2){
            int expon = 2;
            int j = 0;
            for(int i = 0; i < 3; i++){
                char index = str[i];
                j += (int(index) - 97) * pow(26, expon);
                expon -= 1;
            }
            triFreq[j] += 1;
            str = "";
            counter = 0;
        }
        
        if(ch >= 65 && ch <= 90){
            newCh = tolower(ch);
            str += newCh;
            counter++;
            
        }
        
        else if(ch >= 97 && ch <= 122){
            str += ch;
            counter++;
        }
        
        else{
            continue;
        }
        
    }
    
    infile.close();
    
    for (std::vector<int>::iterator i = triFreq.begin(); i != triFreq.end(); ++i){
        std::cout << *i << ' ';
    }
}
