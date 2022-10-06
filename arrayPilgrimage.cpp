// CSCI 1300 Fall 2022
// Author: Alejandro Chumil
// Recitation: 304 – Nikhith Sannidhi
// Homework 5 - Problem # 1

#include <iostream>

using namespace std;

int main()
{
    //an array of 10 int starting at 5
    int distance[15] = {};
    for(int i = 4; i < 14; i++)
    {
        distance[i] = i + 1;
    }
   
    //an array of strings populated by cities
    string cities[5] = {"Boulder", "NYC", "LA", "Chicago", "Houston"};

    
    //an array of int that is populated by divisibility of 6 for first 100 numbers
    int sequence[100] = {};
    int n = 0;
    for(int j = 0; j < 100; j++)
    {
        n += 6;
        sequence[j] = n;
    }

    //an array of char populated with upper and lower case alphabet
    char letters[52] = {};
    int firstAscii = 65;
    int secondAscii = 97;
    
    for(int i = 0; i < 52; i++) // looping until we reach the size of Upper plus lower case alphabet size
    {
        if(i % 2 == 0)
        {
            letters[i] = ((char)firstAscii); //converts int to char Uppercase
            firstAscii++;
        }
        else
        {
            letters[i] = ((char)secondAscii); // convert int to char Lowercase
            secondAscii++;
        }
    }
}