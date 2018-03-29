# Q7

A technical festival is going to be organized in Computer Science Department , University of Delhi on the day of Sankalan.
The President needs some Programmers, Designers and some Volunteers to perform in this event. He decides to interview N number of people among the participants. Each one has ratings in all the three fields. He wants to choose right guys for the right job so that the festival can be celebrated in the best possible way. Thus he selects P Programmers, D Designers and V Volunteers. Help him in organizing the event.The strength of Technical Festival is the sum of ratings of the people in the corresponding field. You have to maximize the sum of their scores.

## Input Format
First line contains 4 integers N,P,D,V.
Next 3 lines contain 3 arrays each of size N denoting the rating of the i_th person in the corresponding field. The first one is the scores of N people on their programming skill, next on their designing skill and the third one on their Volunteering skills.

## Output Format
Print an integer denoting the maximum sum of scores that can be obtained

## Constraints:
```
1<=N,P,D,V<=2000
1<=P+D+V<=N
1<=ratings<=1000
```

## Sample Input:
```
3 1 1 1
1 2 3
1 3 3
4 5 6
```

## Sample Output:
```
10
```

## Explanation
Choose the 1st person for Programming , 2nd for Designing and 3rd for Volunteering (1+3+6=10) .
Or, you can also choose the 3rd person for Programming , 2nd for Designing and 1st for Volunteering(3+3+4=10) .
