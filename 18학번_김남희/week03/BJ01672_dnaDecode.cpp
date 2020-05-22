/* 201824421 Kim Namhee
 *	Baekjoon 1672 : DNA decode
 *	Language : C++11
 *	Code Length : 1124 B, Time : 4 ms, Mem : 2,476 KB
 */

#include <iostream>
#include <string>

using namespace std;

char decodeDna(string& dna, int len);
char decode(char& necleicAcid1, char& necleicAcid2);

//1. Declare table
char decodeTable[4][4] = 
{
	{'A', 'C', 'A', 'G'},
	{'C', 'G', 'T', 'A'},
	{'A', 'T', 'C', 'G'},
	{'G', 'A', 'G', 'T'},
};

int main() {
	//2. Input data
	int len; //dna's length
	string dna;
	cin >> len >> dna;
	
	//3. Decode dna
	char nucleicAcid = decodeDna(dna, len);
	
	//4. Output final nucleic acid
	cout << nucleicAcid;
}

char decodeDna(string& dna, int len) {
	char res;
	for (int i = len-1; i > 0; i--) {
		if (i == len-1) {
			res = decode(dna.at(i-1), dna.at(i));
		} else {
			res = decode(dna.at(i-1), res);			
		}
	}
	
	return res;
}

char decode(char& necleicAcid1, char& necleicAcid2) {
	int i, j;
	//get row index for decoding
	if (necleicAcid1 == 'A') i = 0;
	else if (necleicAcid1 == 'G') i = 1;
	else if (necleicAcid1 == 'C') i = 2;
	else i = 3;

	//get col index for decoding	
	if (necleicAcid2 == 'A') j = 0;
	else if (necleicAcid2 == 'G') j = 1;
	else if (necleicAcid2 == 'C') j = 2;
	else j = 3;
	
	return decodeTable[i][j];
}
