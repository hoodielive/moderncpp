#include <iostream>
#include <cstring>

using namespace std;

void WhatYouSaid();

char* ReverseCopy(char* phrase);


int main(int argc, char *argv[])
{
  // 256 Characters.

  const int MAX_BUFFER_LENGTH = 256;

  // Buffers are arrays of characters.

  char buffer[MAX_BUFFER_LENGTH];

  cout << "Please enter a phrase: ";


  // Pass it your buffer. -1 because it add 
  // a null character at the end.

  cin.get(buffer, MAX_BUFFER_LENGTH - 1);


  cout << "Your input was: " << buffer << endl;


  char* optrReversePhrase  = ReverseCopy(buffer);

  cout << "The reversed phrase is: " << optrReversePhrase << endl;

  delete[] optrReversePhrase;

  return 0;
}

void WhatYouSaid(string said)
{
  cout << "You said: " << said << endl;
};

char* ReverseCopy(char* phrase)
{
  int length = strlen(phrase);

  // +1 For the null character.

  char* reverseString = new char [length + 1];

  int j = 0;

  // Decrement to cause a reversal.

  for (int i = length - 1; i >= 0; i--)
  {
    reverseString[j] = phrase[i];
    j++;
  }
  
  reverseString[j] = '\0';
  return reverseString;

}
