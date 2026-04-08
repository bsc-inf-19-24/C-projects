/* THIS CONTAINS THE SOLUTION TO THE LAB 5 PROLEM 6*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;


// function to count vowels
int countVowels(string str)
{
    int count = 0;
    for(char c : str)
    {
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}

// function to count words
int countWords(string str)
{
    stringstream ss(str);
    string word;
    int count = 0;

    while (ss >> word){
        count++;
    }
    return count;
    
}

// function to capitalize second letter of each word
string capitalizeSecondLetter(string str)
{
    stringstream ss(str);
    string word, result = "";

    while(ss >> word)
    {
        if(word.length() >= 2)
        {
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }
    return result;
}

// function to reverse a string
string reverse(string str)
{
    string reversed = "";
    for(int i = str.length() - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    return reversed;
}

int main()
{
    ifstream file("text.txt");
    string fileData;

    //read the file content 
    if(file.is_open())
    {
        getline(file,fileData);
        file.close();
    }else{
        cout << "Error opening file" << endl;
        return 1;
    }

    // display original content
    cout << "Original text: " << fileData << endl;

    // count vowels
    cout << "Number of vowels: " << countVowels(fileData) << endl;

    // count words
    cout << "Number of words: " << countWords(fileData) << endl;

    // reverse text
    cout << "Reverse words: " << reverse(fileData) << endl;

    // capitalize second letter for each word
    cout << "Capitalised letters: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}