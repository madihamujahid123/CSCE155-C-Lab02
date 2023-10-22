
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.
Answer: Today is 22/10/2023
His birthday was 9/9/1941.Hello Dennis you are 82 years 6 weeeks and 2day old today. 




2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?
 Answer:
 Today is 22/10/2023
His birthday was 30/12/1950.Hello bjarne.
 you are 72 years 42weeeks and 3day old today. 




3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.
Answer:
Example: Bad input:Madiha Mujahid 1900 4
result: today was 
Hello Madiha you are 0 years 0 months 0 days today.
Example: Bad input :99/0m12
your birthday was 
Hello, 99 yor are 0 years 0 months 0days today.



4. Complete all the size and range entries below.
Answer:

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 byte
  range:-32768 to 32767
* `int`
  size:4 byte 
  range: -2147483648 to 2147483648
* `long int`
  size:4 byte 
  range:-2147483648 to 2147483648
* `float`
  size:4 bytes
  range: 7 digits of accuracy
* `double`
  size:8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
  Answer:
  exchangefee: 25.02
  Half of Dollar exchange to 88.96GBP
  Half of Dollar exchange to 14375 JPY

  b) $1,000.52
  Answer: 
  exchangefee: 100.05
  Half of Dollar exchange to 355.68 GBP
  Half of Dollar exchange to 57472 JPY

  c) $968,410.12
  Answer:
  exchangefee:98641.01
  Half of Dollar exchange to 350668.81 GBP
  Half of Dollar exchange to 56661864 JPY


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?
Answer:
No! because int can store number upto 32 bits and the given number greater so 32 bits are not sufficient for that because it is limited to 32 bits.  



7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?
input:enter base of triangle:3
      enter height of triangle:4
      result =0.000000
      This is not a correct answer as by not adding perenthises for precedence of * and /.


b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?
input:enter base of triangle:3
      enter height of triangle:5
      result:0.000000
      it gives incorrect result as  multiplication of two int gives an int value but in the  formula 1/2 give 0.5 which is float. 


c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
The area is =8.0000000 sq units 
increaed precedence of * by perenthesis.