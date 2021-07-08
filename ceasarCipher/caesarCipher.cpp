#include <iostream>
#include <string>

using namespace std;


int rot_n(int letter, int key, int value){
    int rotted;
    rotted = ((letter - value + key) % 26 ) + value;
    return rotted;
}

int caesar(int letter, int key){
    if(letter > 64 and letter < 91)
        return rot_n(letter, key, 65);
    else if(letter > 96 and letter < 123)
        return rot_n(letter, key, 97);
    return letter;
}

int main(){
    string original;
    string cipher;
    int key;
    cout << "Insert the original text:" << endl;
    getline(cin, original);
    cout << "Insert the Key Value" << endl;
    cin >> key;

    for(int i = 0; i < original.size(); ++i){
        cipher += caesar(original[i], key);
    }
    
    cout << cipher << endl;

    return 0;
}
