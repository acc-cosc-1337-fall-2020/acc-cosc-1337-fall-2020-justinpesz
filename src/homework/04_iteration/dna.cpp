#include "dna.h"
#include<string>
#include<iostream>
#include<iomanip>
/* #include<bits/stdc++.h> */

using std::string;
using std::cout;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& content)
{
    double count = 0;
    int value = 0;
    int size = content.size();

    do
    {
        if (content[value] == 'C')
        {
            count += 1;   
        }
        else if (content[value] == 'G')
            count += 1;
        
        value++;
        
    }while (value < size);
     
    return count / size;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string forward)
{   
    string reverse;

    for(std::size_t i=forward.size(); i > 0; --i)
    {
        reverse.push_back(forward[i-1]);
    }
    
    return reverse;
}



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string
*/

string get_dna_complement(string complement)
{
    string result = get_reverse_string(complement);
    
    for (std::size_t i=0; i < result.size(); ++i)
    {
        if (result[i] == 'A')
        {
            result[i] = 'T';
        }
        else if (result[i] == 'T')
        {
            result[i] = 'A';
        }
        else if (result[i] == 'G')
        {
            result[i] = 'C';
        }
        else if (result[i] == 'C')
        {
            result[i] = 'G';
        }
    }
    
    return result;
}
