#include <iostream>
#include <string>
#include <algorithm> //std::copy
using namespace std;

//get size of string
int get_size(string s) {
    int i = 0;
    int size = 0;
    while (s[i] != '\0') {
        size++;
        i++;
    }
    return size;
}


int main() {

    cout << "Enter string: " << '\n';
    string s;
    cin >> s;

    int size = get_size(s);

    char* input = new char[size];
    for (int z = 0; z < size; z++) {
        input[z] = s[z];
    }

    const int half_size = (size/2);
    char* letters = new char[half_size];
    int* freq = new int[half_size];

    //add elements in even positions to the letters array
    for (int j = 0; j < size/2; j+=2) {
        int m = 0;
        letters[m] = input[j];
        m++;
        cout << letters[m] << '\n';
    }

    //add elements in odd positions to the freqs array
    for (int k = 1; k < size/2; k+=2) {
        int n = 0;
        freq[n] = input[k];
        n++;
        cout << freq[n] << '\n';
    }


    //print output, each character x times based on input string
    // for (int p = 0; p < size/2; p++) {
    //     int frequency;
    //     frequency = freq[p];
    //     cout << freq << '\n';
    //     for (int q = 0; q < frequency; q++) {
    //         cout << letters[p] << '\n';
    //     }
    // }

    //delete allocated memory
    delete[] input;
    delete[] letters;
    delete[] freq;

    return 0;
}
