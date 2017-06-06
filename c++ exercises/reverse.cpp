//Currenty reverses a string correctly but cuts off the first letter.
//Doesn't work for spaces prob bc length ends at \0 which a space would equal

#include <iostream>
#include <string>
#include <math.h>
using std::string;
using namespace std;

void ReverseString(string &str) {
    int len = str.length();
    for (int i = 0; i < ((len/2)+1); i++) {
        char temp = str[i];
        str[i] = str[len-i];
        str[len-i] = temp;
    }
}

int main() {
    cout << "Enter a string to be reversed: " << endl;
    string s;
    cin >> s;
    ReverseString(s);
    cout << "Your reversed string is: " << s;

}
