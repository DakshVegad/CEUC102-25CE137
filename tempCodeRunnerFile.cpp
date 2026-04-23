#include <iostream>
#include <string>
#include <cctype>   // for tolower()
using namespace std;

int main() {
    string paragraph;

    // 1. Read full paragraph
    cout << "Enter a paragraph:\n";
    getline(cin, paragraph);

    // Array to store words
    string words[100];
    int count[100] = {0};
    int wordCount = 0;

    // 2. Convert paragraph to lowercase (case-insensitive)
    for (int i = 0; i < paragraph.length(); i++) {
        paragraph[i] = tolower(paragraph[i]);
    }

    // 3. Split into words manually
    string temp = "";
    for (int i = 0; i < paragraph.length(); i++) {
        if (paragraph[i] != ' ' && paragraph[i] != ',' && paragraph[i] != '.') {
            temp += paragraph[i];
        } else {
            if (temp != "") {
                words[wordCount++] = temp;
                temp = "";
            }
        }
    }

    // Add last word if exists
    if (temp != "") {
        words[wordCount++] = temp;
    }

    // 4. Count frequency manually
    for (int i = 0; i < wordCount; i++) {
        if (count[i] == -1) continue;

        int freq = 1;
        for (int j = i + 1; j < wordCount; j++) {
            if (words[i] == words[j]) {
                freq++;
                count[j] = -1; // mark counted
            }
        }
        count[i] = freq;
    }

    // 5. Display result
    cout << "\nWord Frequencies:\n";
    for (int i = 0; i < wordCount; i++) {
        if (count[i] != -1) {
            cout << words[i] << " : " << count[i] << endl;
        }
    }

    return 0;
}