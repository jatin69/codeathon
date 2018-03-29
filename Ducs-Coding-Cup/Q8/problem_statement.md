# Q8

There is a town where you are planning to host a party of the decade. As a party planner you have selected a palace for the party which is connected to  road(s) in the town. You want to make the directions easier for the people ( it's the time when GPS wasn't there). For a hassle free arrival of guests who are coming from many different countries to the venue you decide to place signs for directions on the road turns to the party and a country flag along with it. Also, you suffer from Obsessive–compulsive disorder which makes you want to put different flags on two adjacent road signs to make it look like you are not country biased for the party and you don’t want any two adjacent occuring road signs to have same country flags. When faced with many options of flags for a single road, choose the one which is lower numerical value.
You also have limited number of countries and if you can’t do it with the number of available country flags then you are going to cancel the party ( that's really harsh!). So, you have to make it possible if it can actually be done. Find a way to arrange the flags on roads with given condition.
 
## Input: 
1. S i.e Dimension of Matrix

2. A matrix of size S*S where S are the number road signs, one at each road turns. If there is road between the two given road signs then the corresponding value to that position in the matrix will be 1 otherwise 0.

3. An integer C which is maximum number of flags that can be used to place on roads.

## Output:
On each line `i` display the flag number assigned to the `i`th road.
Display `-1` if it can't be done with given flags. 

## Constraints
```
1<=S<=50
S[i] = 0 or 1
1<=C<=S
```

## Sample Input
```
4
0 1 1 1
1 0 0 1
1 0 0 1
1 1 1 0
3
```

## Sample Output 
```
1
2
2
3
```

## Explanation
```
Roads 1, 2, 4 are adjacent to each other, 
so they need to have different flags. So we assign,
Road 1 -> Flag 1
Road 2 -> Flag 2
Road 4 -> Flag 3

Now Road 3 is left.
It is adjacent to only Road 1 and 4, so, Flag 2 can be used here.
Road 3 -> Flag 2
```