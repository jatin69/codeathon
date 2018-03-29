# Q8

There is a town where you are planning to host a party of the decade. As a party planner you have selected a palace for the party which is connected to  road(s) in the town. You want to make the directions easier for the people ( it's the time when GPS wasn't there). For a hassle free arrival of guests to the venue you decide to place signs for directions on the road turns for the party. Also, you suffer from Obsessive–compulsive disorder which makes you want to put different colors on two adjacent road signs to make it look attractive for the party ( these OCD people are crazy) and you don’t want any to adjacent occuring road signs to have same color.  You also have limited number of colors and if you can’t do it with the number of available colors then you are going to cancel the party ( that's really harsh!). So, you have to make it possible if it can actually be done.
 
## Input: 
1. A 2D array of size  S*S where S are the number road signs at the road turns. If there is road between the two given road signs then the corresponding value to that position in 2d array will be 1 otherwise 0.

2. An integer C which is maximum number of colors that can be used.

## Output:
An array paint[S] that should have numbers from 1 to m. paint[i] should represent the color assigned to the ith road sign. The code should also return false if it can’t be done with C colors.

## Constraints
1<=S<=10^3
1<=C<=S

## Sample Input
0 1 1 1								
1 0 1 1
1 1 0 1
0 0 1 0
3
  
## Sample Output 
1 2 3 1
 
 


 
 
 

