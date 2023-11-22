#include <iostream>

using namespace std;

int main() {
    cout << "hello world" << endl;

    return 0;
}


/*
TODAY'S LECTURE: LOOPS AND ARRAYS YAAAAAAAAAAY


loop:
> meets a condition
> repeats a section of code for a certain amount of time
> once condition is no longer met, loop will stop

there are:
> "while" loops
> "for" loops
> "do while" loops



"while" loop condition:
> while a boolean condition is true
> keep repeating block of code



"do while" loop condition:
> condition is checked after code is executed




-------------EXAMPLE DO WHILE LOOP CODE:--------------
do {
    // code to repeat
} while (boolean condition);
------------------------------------------------------



> special cases include connecting a client to a server
    > using a while loop wouldn't be good for this case



"for" loop condition:
> initialisation variable
> condition to meet
> update variable after executing code



----------------EXAMPLE FOR LOOP CODE:---------------
for (i=0; i<10; i++) {
    // code to repeat
}
-----------------------------------------------------



common control variable for loops:
> use some counter to iterate, like i = 0;
> iterate with i++;
    > not having this creates an infinte loop



IMPORTANT!!!!1
"while" and "for" loops check the condition, then loop
"do while" does the loop first, then check the condition
^ know this for when you make code



EXTRAS:
> use "ifstream" and "fstream" to get input from files
    > in_file.open("file name");
    > if (in_file) {
        // process file
    } else {
        std::cerr << "Error reading File";
    }
    > if_file.close();


HOW TO INITIALISE:
#include <fstream>
std::ifstream in_file;

<----------------------LOOPS TO ARRAYS------------------------------->
arrays:
> a data structure of the same type, from 0 to size-1
    > int primes[] = {2, 3, 5, 7, 11}; (throwback to yr1 Sets)

> can set capacity of array
    > use variable to keep track of size
    > put number/variable into this -> []

>#include <array>
    >array.size() -> outpputs size of array




---------------------EXTRA: CODE CHECKING PRIME-----------------
#include <iostream>

int main(){

  int number;
  std::cout << "Enter an integer: ";
  std::cin >> number;

  // test divisors of number, if a divisor other than 1 and number is
  // found, then number is not prime.
  bool isPrime = true;
  for (int i = 2; i <= number; i++)
    if (!(number % i))
      isPrime = false;

  if (isPrime)
    std::cout << "Prime\n";
  else
    std::cout << "Not prime\n";
  
  return 0;
}
---------------------EXTRA: CODE CHECKING PRIME-----------------
*/