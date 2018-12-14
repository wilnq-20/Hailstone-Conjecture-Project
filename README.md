# Hailstone-Conjecture-Project

hailstone.cpp:
The project centers on the following simple algorithm:
  Start with any number.
  Keep replacing the number repeatedly:
  if it is even, divide it by two.
  if it is odd, multiply it by three then add one.

Goal was to write a program to help perform this algorithm on any given input, which will be a lot faster than doing it by hand. 
It should stop when it hits the number 1 (since it will loop 4, 2, 1 forever after that) and it should output the length, 
which we'll define as the number of steps it took to hit 1 (i.e. if we enter the number 1, then we do not need to take any steps to
reach 1 so the length would be 0).

------------------------------------------

hailstats.cpp:
program helps to understand the behavior of hailstone sequences
searches through a range of numbers that the user specifies, and reports the shortest and longest lengths in that range
