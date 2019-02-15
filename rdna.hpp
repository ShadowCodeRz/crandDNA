#include<string>
#include<iostream>
#include<random>
using namespace std;

string randDNA(int seed,string bases,int n) {
	
mt19937 eng1(seed);
int min = 0; // minimum number to generate
int max = 3; // maximum number to generate
uniform_int_distribution<> uniform(min, max);// random stuff to get random number generation to work
int index =0;
string dna ="";

char DnaBases[4] = {'A','C','G','T'};// Create an array with the 4 symbols of dna

 for(int i=0 ;  i < n ;  i++) 
   {
        index = uniform(eng1);
        dna = dna + DnaBases[index];
        cout << index;
   }// adds A C G T to the output string


return dna;// returns the output string
}

//The DNA molecule is composed of two chains of nucleotides, 
//each composed of one of four bases: cytosine (which we will denote by the single character 'C'), 
//guanine (denoted by 'G'), adenine (denoted by 'A') or thymine (denoted by 'T'). 
//In this Lab you are going to complete a program which will generate a random DNA sequence (i.e. a string of the letter bases - eg. "ACTTCAGG") 
//assuming a uniform distribution of each letter.
//I kinda had randomly picked the uniform distribution but it was actually required, welp. Anywho my implementaion only uses the 4 characters that he said^^^^^
//sooooo the input seed for the bases is useless
