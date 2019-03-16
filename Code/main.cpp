#include <iostream>
#include <random>
#include <string>
using namespace std;


/*
The DNA molecule is composed of two chains of nucleotides, each composed of one
of four bases: cytosine (which we will denote by the single character 'C'),
guanine (denoted by 'G'), adenine (denoted by 'A') or thymine (denoted by 'T').
In this Lab you are going to complete a program which will generate a random DNA
sequence (i.e. a string of the letter bases - eg. "ACTTCAGG") assuming a uniform
distribution of each letter.
I kinda had randomly picked the uniform distribution but it was actually
required, welp. Anywho my implementaion only uses the 4 characters that he
said^^^^^ sooooo the input seed for the bases is useless and i removed it
*/

string randDNA(int seed, int n) {
	mt19937 eng1(seed);
	int min = 0; // minimum number to generate
	int max = 3; // maximum number to generate
	uniform_int_distribution<> uniform(min, max);// random stuff to get random number generation to work
	int index = 0;
	string dna = "";
	char DnaBases[4] = { 'A','C','G','T' };// Create an array with the 4 symbols of dna

	for (int i = 0; i < n; i++)
	{
		index = uniform(eng1);
		dna = dna + DnaBases[index];
	}// adds A C G T to the output string
	return dna;// returns the output string
}

string randDNA(int seed, string bases, int n) {
	mt19937 eng1(seed);
	int min = 0; // minimum number to generate
	int max = bases.size() - 1; // maximum number to generate which would be the size of the string
	uniform_int_distribution<> uniform(min, max);// random stuff to get random number generation to work
	int index = 0;
	string dna = "";

	for (int i = 0; i < n; i++)
	{
		index = uniform(eng1);
		dna = dna + bases[index];
	}// adds the letters provided in the string to the output string
	return dna;// returns the output string
}

int main(){
	int seed = -1, n = -1;
	string Input = "";
	string bases = "";
	cout << "Do you want to use the normal dna letters(N) or enter your own(O)?" << endl;
	cin >> Input;

	if (Input == "N") {
		cout << "\nWelcome to the DNA generator\n\n\tPlease enter a seed\n\n\t>>> ";
		cin >> seed;
		cout << "\n\tand the length of the DNA sequence to be generated\n\n\t>>> ";
		cin >> n;
		cout << "\n\nOutput:\n\t" << randDNA(seed, n) << endl; //print output  
	}
	else {
		cout << "\nWelcome to the DNA generator\n\n\tPlease enter a seed\n\n\t>>> ";
		cin >> seed;
		cout << "\n\tand the letters of the DNA sequence to be generated\n\n\t>>> ";
		cin >> bases;
		cout << "\n\tand the length of the DNA sequence to be generated\n\n\t>>> ";
		cin >> n;
		cout << "\n\nOutput:\n\t" << randDNA(seed, bases, n) << endl; //print output  
	}
	system("pause");
}
