
#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

void binaryRepresentation(int);
int setBit(int, int);
bool getBit(int, int);
int countBits(int); 

int main() {

    int i;
    
    cout << "Enter an integer: ";
    cin >> i;

    if (cin){
        int numberOfBits = countBits(i);
        
        cout << "Number of bits: " << numberOfBits << endl;
        cout << "Hex representation: " << hex << i << endl;

        binaryRepresentation(i);
        
        cout << "First bit: " << getBit(i, 0) << endl;
        cout << "Second bit: " << getBit(i, 1) << endl;
    }

    return 0;
}

void binaryRepresentation(int num){
    cout << "Binary representation: " << bitset<32>(num) << endl;
}

int setBit(int num, int position){
	int mask = 1 << position;
	return num | mask;
}

bool getBit(int num, int position){
	bool bit = num & (1 << position);
	return bit;
}

int countBits(int n) { 
    unsigned int count = 0; 
    
    if (n==0) 
        return 0;
    
    for(int i = 0; i < 32; i++){
        if(getBit(n, i))
            count = i;
    }

    return ++count;
}