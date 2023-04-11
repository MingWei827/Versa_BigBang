#include <iostream>
#include <string>
#include <fstream>  // for file stream objects

using namespace std;


int main() {
    // create a file stream object for output
    ofstream file("output.json");
    string arr[100];

    for (int num = 0; num < 100; num++) {

        if ((num + 1) % 3 == 0 && (num + 1) % 5 == 0) {
           arr[num] = "BIGBANG";
        }
        else if ((num + 1) % 3 == 0 && (num + 1) % 5 != 0) {
            arr[num] = "BIG";
        }
        else if ((num + 1) % 3 != 0 && (num + 1) % 5 == 0) {
            arr[num] = "BANG";
        }
        else {
            arr[num] = to_string(num + 1);
        }
    }

    file << "[";

    //write into output.json
    for (int x = 0; x < 100; x++) {
        if (x < 99) {
            file << '\"' << arr[x] << '\"' << ",";
        }
        else {
            file << '\"' << arr[x] << '\"';
        }
    }

    file << "]";

    // close the file
    file.close();

    return 0;
}
