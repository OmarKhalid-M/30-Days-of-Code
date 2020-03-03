function main() {
    const N = parseInt(readLine(), 10);

   
    if((N%2) !== 0){                    /*Odd Number*/
        console.log("Weird");
    }
    else{                               /*Even Numer */

        if(N >= 2 && N <= 5){
            console.log("Not Weird");
        }
        else if(N >= 6 && N <= 20){
            console.log("Weird");
        }
        else{
            console.log("Not Weird");
        }

    }
}
