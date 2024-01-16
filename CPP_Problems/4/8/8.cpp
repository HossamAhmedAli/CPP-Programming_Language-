#include <iostream>
#include <fstream>
using namespace std;

// Function to encrypt the file
void encryptFile(string fileName, int key) {
  // Open the input file in read mode
  ifstream fin(fileName);

  // Check if the file is opened successfully
  if (!fin) {
    cout << "Error opening the file " << fileName << endl;
    return;
  }

  // Create a new file name for the encrypted file
  string newFileName = fileName + ".enc";

  // Open the output file in write mode
  ofstream fout(newFileName);

  // Check if the file is opened successfully
  if (!fout) {
    cout << "Error creating the file " << newFileName << endl;
    return;
  }

  // Read each character from the input file and encrypt it
  char ch;
  while (fin.get(ch)) {
    // Apply the key to the character
    ch = ch + key;

    // Write the encrypted character to the output file
    fout.put(ch);
  }

  // Close the files
  fin.close();
  fout.close();

  // Display a success message
  cout << "The file " << fileName << " has been encrypted and saved as " << newFileName << endl;
}

// Function to decrypt the file
void decryptFile(string fileName, int key) {
  // Open the input file in read mode
  ifstream fin(fileName);

  // Check if the file is opened successfully
  if (!fin) {
    cout << "Error opening the file " << fileName << endl;
    return;
  }

  // Create a new file name for the decrypted file
  string newFileName = fileName + ".dec";

  // Open the output file in write mode
  ofstream fout(newFileName);

  // Check if the file is opened successfully
  if (!fout) {
    cout << "Error creating the file " << newFileName << endl;
    return;
  }

  // Read each character from the input file and decrypt it
  char ch;
  while (fin.get(ch)) {
    // Apply the key to the character
    ch = ch - key;

    // Write the decrypted character to the output file
    fout.put(ch);
  }

  // Close the files
  fin.close();
  fout.close();

  // Display a success message
  cout << "The file " << fileName << " has been decrypted and saved as " << newFileName << endl;
}

// Main function to test the program
int main() {
  // Ask the user to enter the file name and the key
  string fileName;
  int key;
  cout << "Enter the file name: ";
  cin >> fileName;
  cout << "Enter the key: ";
  cin >> key;

  // Encrypt the file
  encryptFile(fileName, key);

  // Decrypt the file
  decryptFile(fileName + ".enc", key);

  return 0;
}
