// #include<iostream>
// using namespace std;

// int main()
// {
//     // Write a C++ program that uses an if-else-if statement to check if a number is positive, negative, or zero.
    // int num;
    // cin>>num;
    // if (num<0)
    // {
    //     cout<<"number is negative";
    // }
    // else{
    //     if (num>0)
    //     {
    //         cout<<"numer is positive";
    //     }
    //     else
    //     cout<<"zero";
        
    // }
    // 2--Write a C++ program that uses a nested if-else statement to check if a number is positive and even, or positive and odd.
    // int num;
    // cin>>num;
    // if (num>0)
    // {
    //     if (num%2==0)
    //     {
    //         cout<<"number is positive and even";
    //     }
    //     else
    //    cout<<"number is positive and odd";

        
        
    // }
// 3-Write a C++ program that uses a nested if-else statement to check if a number is within a certain range (e.g., 1-10, 11-20, etc.).

// cpp
// int num;
// cin>>num;
// if (num<=10)
// {
//     if (num%2==0)
    
//     cout<<"number is in the range of 1-10";
//     else{
//         cout<<"the number is in between 1-10 and 0dd"
//     }
// }
// else if (num<=20)
// {
//     cout<<"number is in the range of 11-20";

// }
// else if (num<=70)
// {
//     cout<<"number is in the range of 21-70";
// }
// else{
//     cout<<"you have entreed wrong credients";
// }




    
    
//     return 0;
// 4--Write a C++ program that uses an if-else-if statement to check if a character is a vowel, consonant, or digit.

// cpp
// char alphabets;
// cin>>alphabets;
// if (alphabets=='a'||alphabets=='e'||alphabets=='i'||alphabets=='o'||alphabets=='u')
// {
//     cout<<"its a vowel";

// else
//         cout<<"the letter is constants";}
//     if (alphabets<='9')
//     {
//         cout<<"digit";
//     }
    


    
// else if (alphabets>'0'&& alphabets<'9')
// {
//     cout<<"its a digit";
    
    
// }
// else{
//     cout<<"its not digit or letter";
// }
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "The character is a vowel.";
        } else {
            cout << "The character is a consonant.";
        }
    // } else if (ch >= '0' && ch <= '9') {
    //     cout << "The character is a digit.";
    // } else {
    //     cout << "The character is not a letter or digit.";
    // }

    return 0;
}}

