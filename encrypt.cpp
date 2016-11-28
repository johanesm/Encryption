#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

string encrypt(string key, string sentence);

int main(){
	string key, sentence;
	cout << "Key: ";
	getline(cin, key);

	cout << "Sentence: ";
	getline(cin, sentence);

	sentence = encrypt(key, sentence);
	cout << "encrypted: " << sentence << endl;

	sentence = encrypt(key, sentence);
	cout << "decrypted: " << sentence << endl;
	//system("pause");
	return 0;
}

string encrypt(string key, string sentence){
	string output;
	for (unsigned int i = 0; key.length() < sentence.length(); i++){
		key.push_back(key[i]);
	}

	for(unsigned int i = 0; i < sentence.length(); i++){
		output.push_back(key[i] ^ sentence[i]);
	}

	return output;
}