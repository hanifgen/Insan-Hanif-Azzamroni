#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengenkripsi menggunakan Vigenère Cipher
string encryptVigenere(string plaintext, string key) {
    string ciphertext = "";
    int keyLength = key.length();
    
    for (int i = 0; i < plaintext.length(); i++) {
        // Menghitung posisi karakter pada key
        char keyChar = key[i % keyLength];
        
        // Menggeser huruf sesuai key dan menambahkan ke ciphertext
        char encryptedChar = ((plaintext[i] - 'A') + (keyChar - 'A')) % 26 + 'A';
        ciphertext += encryptedChar;
    }
    
    return ciphertext;
}

int main() {
    string plaintext = "SISTEMINFORMASI";
    string key = "MASIF";
    
    // Mengenkripsi teks
    string encryptedText = encryptVigenere(plaintext, key);
    
    // Menampilkan hasil enkripsi
    cout << "Plaintext: " << plaintext << endl;
    cout << "Key: " << key << endl;
    cout << "Encrypted Text: " << encryptedText << endl;

    return 0;
}
