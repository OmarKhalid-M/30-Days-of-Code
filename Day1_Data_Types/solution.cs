using System;
using System.Collections.Generic;
using System.IO;

class Solution {
    static void Main(String[] args) {
        int i = 4;
        double d = 4.0;
        string s = "HackerRank ";

        
        // Declare second integer, double, and String variables.
        int second_integer; 
        double second_double;
        string second_string;
        
        // Read and save an integer, double, and String to your variables.
        second_integer = Convert.ToInt32(Console.ReadLine());
        second_double = Convert.ToDouble(Console.ReadLine());
        second_string = Console.ReadLine();

        // Print the sum of both integer variables on a new line.
        Console.WriteLine(second_integer + i);

        // Print the sum of the double variables on a new line.
        Console.WriteLine(String.Format("{0:0.0}", second_double + d));

        // Concatenate and print the String variables on a new line
        Console.WriteLine(s + second_string);
        // The 's' variable above should be printed first.

    }