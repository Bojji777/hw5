// CSCI 1300 Fall 2022
// Author: Alejandro Chumil
// Recitation: 304 – Nikhith Sannidhi
// Homework 5 - Problem # 3b

#include <iostream>

using namespace std;

bool insertAfter(string input_strings[], int num_elements, int arr_size, int index, string string_to_insert)
{
    if(index > arr_size)
    {
        return false;
    }
    if(index + 1 >= arr_size)
    {
        return false;
    }
    else
    {
        for(int i = num_elements-1; i >= index; i--)
        {
            input_strings[i+1] = input_strings[i];
        }
        input_strings[index + 1] =  string_to_insert; // we insert the string once we get to the index 
    }
    
    return true;

}

int secondPlace(string input_strings[], string string_to_insert, string string_to_find,int num_elements, int arr_size, int size, int count)
{
    int newIndex;
    for(int i = 0; i < num_elements; i++)
    {
        if(input_strings[i] == string_to_find)
        {
            newIndex = i;
        }
    }
    
    if(!(insertAfter(input_strings, num_elements,arr_size,newIndex,string_to_insert)))
    {
        return num_elements;
    }
    else
    {
        return num_elements+1;
    }
    
}

int main()
{
    int size = 5;
    string input_strings[size] = {"clefairy", "meowth", "snorlax"};
    int num_elements = 3;
    int count = 1;
    string string_to_insert = "charizard";
    string string_to_find = "meowth";
    // updating num_elements with the updated value returned by secondPlace
    num_elements = secondPlace(input_strings, string_to_insert, string_to_find, num_elements, size, count);
    // print num_elements
    cout << "Function returned value: " << num_elements << endl;
    // print array contents
    for(int i = 0; i < size; i++)
    {
        cout << input_strings[i] << endl;
    }
}