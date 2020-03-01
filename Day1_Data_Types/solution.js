
function main() {
    var i = 4
    var d = 4.0
    var s = "HackerRank "
    // Declare second integer, double, and String variables.
    var second_integer;
    var second_double;
    var second_string;

    // Read and save an integer, double, and String to your variables.
    second_integer  =  parseInt(readLine());
    second_double   =  parseFloat(readLine());;
    second_string   = readLine();

    // Print the sum of both integer variables on a new line.
    console.log(i + second_integer);
    // Print the sum of the double variables on a new line.
    console.log((d + second_double).toFixed(1));
    // Concatenate and print the String variables on a new line
     console.log(s + second_string);
    // The 's' variable above should be printed first.

}