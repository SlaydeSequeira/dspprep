#include <iostream>
#include <string>
using namespace std;
string encrypt(string text, string key) {
    string encrypted_text = "";
    int key_length = key.length();

    for (int i = 0; i < text.length(); i++) {
        encrypted_text += text[i] ^ key[i % key_length];
        key[i % key_length] = (key[i % key_length] + 1) % 256;
    }
    
    return encrypted_text;
}
string decrypt(string encrypted_text, string key) {
    string decrypted_text = "";
    int key_length = key.length();

    for (int i = 0; i < encrypted_text.length(); i++) {
        decrypted_text += encrypted_text[i] ^ key[i % key_length];
        key[i % key_length] = (key[i % key_length] + 1) % 256;
    }
    
    return decrypted_text;
}

int main() {
    string plain_text = "SensitiveBankData123";
    string key = "SecretKey"; 
    string encrypted = encrypt(plain_text, key);
    string decrypted = decrypt(encrypted, key);
    cout << "Original Text: " << plain_text << endl;
    cout << "Encrypted Text: ";
    for (char c : encrypted) {
        cout << std::hex << (int)(unsigned char)c << " "; 
    }
    cout << endl;
    cout << "Decrypted Text: " << decrypted << endl;
    return 0;
}