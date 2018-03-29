# Q5

Arya Stark has a kill list. She wants to kill Cersei Lannister, Ilyn Payne, Melisandre, Thoros of Myr,Polliver, Gregor Clegane, Meryn Trant etc. 

She maps these names to number, and stores it in a list. She wants to find her next target. She has an idea on how to do so. 

Arya makes them stand in a line. No one is allowed to move from their place and can only talk to the person adjacent to them. She then starts grouping adjacent members, in any possible combination. Iterating all possible combinations one by one. A single person can be part of any number of groups as long as he is adjacent to that group.
```
Line = [A B C D] can form groups as follows
> A, B, C, D
> AB, BC, CD
> ABC, BCD
> ABCD
```

After every iteration, she applies the function XOR to everyone in the line to finds the winner of that iteration. At the end of the day, she does the same with all the winners to find the ultimate winner.

She then kills the ultimate winner.
Can you help her find here next target ?

## Input Format
First line contains an integer , number of the test cases. 
The first line of each test case contains an integer , number of elements in the array. 
The second line of each test case contains  integers that are elements of the array.

## Constraints
```
1<=T<=5
2<=N<=10^5
1<=numbers in list<=10^8
```

## Output Format
Print the answer corresponding to each test case in a separate line.

## Sample Input 
```
1
3
4 2 7
```
## Sample Output
```
3
```
## Explanation 

Test case 0: 
```
iteration 1 : (4) XOR (2) XOR (7) = winner w1 = 1
iteration 2 : (4 XOR 2) XOR (2 XOR 7) = winner w2 = 3
iteration 3 : (4 XOR 2 XOR 7) = winner w3 = 1

Ultimate winner 
= w1 ^ w2 ^ w3 
= 1 ^ 3 ^ 1 
= 3
```
