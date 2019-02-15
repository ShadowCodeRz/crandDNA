#include <iostream>
#include <string>
#include "rdna.hpp"
#include <random>

using namespace std;
std::string randDNA(int seed,string bases,int n);

int main()
{
    int seed = -1, n = -1;
    string bases = "";


    cout<<"\nWelcome to the DNA generator\n\n\tPlease enter a seed, the letter bases to be used (e.g. TGAC) \n\tand the length of the DNA sequence to be generated\n\n\t>>> ";   

    cin>>seed>>bases>>n;//read the three inputs

    cout <<"\n\nOutput:\n\t"<<randDNA(seed,bases,n)<<endl; //print output  
}

