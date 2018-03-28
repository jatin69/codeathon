# Q5

Arya Stark has a kill list. She wants to kill Cersei Lannister, Ilyn Payne, Melisandre, Thoros of Myr,Polliver, Gregor Clegane, Meryn Trant etc. She maps these names to number , and stores it in an array.She wants to find the value in the array to select her next target.She follows some rules to do so. Arya  XOR the numbers in the adjacent subarrays. Then she  XOR the values thus obtained. Can you help her in this task?

## Input Format
First line contains an integer , number of the test cases. 
The first line of each test case contains an integer , number of elements in the array. 
The second line of each test case contains  integers that are elements of the array.

## Constraints
1<=T<=5
2<=N<=10^5
1<=numbers in array<=10^8
 
## Output Format
Print the answer corresponding to each test case in a separate line.

## Sample Input 
2
3
1 2 3
4
4 5 7 5

## Sample Output
2
0

## Explanation 

Test case 0: 
1 ^ 2 ^ 3 ^ (1^2)^(2^3)^(1^2^3)=2
 
Test case 1: 
4^5^7^5^(4^5)^(5^7)^(7^5)^(4^5^7)^(5^7^5)^(4^5^7^5)=0
