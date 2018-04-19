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

//Default constructor

frequencies::frequencies(){

    //clears trFreq

    triFreq.clear();

    //creates a triFreq full of 0s

    for(int i = 0; i < 17576; i++){

        //adds zeros to triFreq

        triFreq.push_back(0);
    }
}

//Filename constructor

frequencies::frequencies(std::string filename){

    //clears triFreq

    triFreq.clear();

    //Intializes file stream

    std::ifstream infile;

    //Opens the file as a c string

    infile.open(filename.c_str());

    //Initalizes strings and chars thagt will be used

    std::string temp;
    std::string str;
    char ch;
    char newCh;

    //Intialiezes counter

    int counter = 0;

    //Recreates triFreq

    for(int i = 0; i < 17576; i++){
        triFreq.push_back(0);
    }

    //Reads char by char

    while (infile.get(ch)) {

        //Checks the counter (hence size of the trigram)

        if(counter > 2){

            //Resets expon and j

            int expon = 2;
            int j = 0;

            //Loops through 3 times

            for(int i = 0; i < 3; i++){

                //Sets the index to the current character

                char index = str[i];

                //calculates the value of each letter in order from 26^2 to 26^0

                j += (int(index) - 97) * pow(26, expon);

                //subtracts exponent for next number

                expon -= 1;
            }

            //adds one to the frequency position in the vector

            triFreq[j] += 1;

            //gets the last two characters of str

            temp = str.substr(1,2);

            //sets str equal to temp

            str = temp;

            //reset counter to 2

            counter = 2;
        }

        //checks for capital letters

        if(ch >= 65 && ch <= 90){

            //sets cpas to lower

            newCh = tolower(ch);

            //adds lowercase t str

            str += newCh;

            //increases counter

            counter++;

        }

        //checks for lower case letter

        else if(ch >= 97 && ch <= 122){

            //adds char to str

            str += ch;

            //increases counter

            counter++;
        }

        //anything that isnt a letter

        else{

            //ignores char, continues through reading

            continue;
        }

    }

    //closes file

    infile.close();

    //prints triFreq

    for (size_t i = 0; i < triFreq.size(); i++){

        //checks if it is the last character

        if(i == triFreq.size()-1){

            //prints the last char with an end line

            std::cout << triFreq[i] << std::endl;
        }

        //anyhting but the last char

        else{

            //prints index follewed by space

            std::cout << triFreq[i] << ' ';
        }
    }

}
