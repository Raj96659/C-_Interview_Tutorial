#include<iostream>
using namespace std;

int main()
{
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);  // Takes the full line as input

    for(int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]); // Convert to lowercase for simplicity

        if((ch >= 'a' && ch <= 'z')) // Check if it's a letter
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
