# Q2

President Snow has added a new section in the Hunger Games, this new game is as follows. Initially, he selects  n champions from all districts and each champion has a strength value. The n champions are divided into k teams, and each champion belongs exactly one team. For each fight, President Snow chooses two teams:  x and y, that must fight each other to the death. The teams attack each other in alternating turns, with team x always launching the first attack. The fight ends when all the champions on one of the teams are dead.
Assume each team always attacks optimally. Each attack is performed as follows:
1. The attacking team chooses a champion from their team with strength s.
2. The chosen champion chooses at most s champions from other team and kills all of them.

President Snow doesn't want to see his favourite champions fall in battle, so he wants to build the teams carefully and know who will win different team matchups. He wants you to perform two types of queries:
1.  `1 p x` Add a new champion with strength p to team x. It is guaranteed that this new champion's strength value will not be less than any current member of team x.
2. `2 x y` Print the name of the team that would win a matchup between teams x and y in their current state (recall that team x always starts first). It is guaranteed that x<>y.

Given the initial configuration of the teams and queries, perform each query so that President Snow can plan the next fight.
 
Note: You are determining the team that would be the winner if the two teams fought. No champions are actually dying in these matchups so, once added to a team, a champion is available for all future potential matchups.

## Input Format
The first line contains three space-separated integers describing the respective values of  n(the number of champions), k (the number of teams), and  q(the number of queries). 
Each line  of the  subsequent lines contains two space-separated integers describing the respective values of champion i's strength,si , and team number, ti.
Each of the q subsequent lines contains a space-separated query in one of the two formats defined in the Problem Statement above (i.e., 1 p x or 2 x y).

## Constraints
```
1<=n, q<=2x10^5
2<=k<=2 x 10^5·        
1<=x,y,ti<=k 
1<=si, p<=2 x 10^5
```

## Scoring
This challenge has binary scoring. This means you will get a
full score if your solution passes all test cases; otherwise, you will get 0
points.

## Output Format
After each type 2  query, print the name of the winning team on a new line. For example, if  x=1 and y=2  are matched up and x  wins, you would print 1.
It is guaranteed that both teams in a query matchup will always
have at least one champion.

## Sample Input
```
7 2 6
1 1
2 1
1 1
1 2
1 2
1 2
2 2
2 1 2
2 2 1
1 2 1
1 2 1
2 1 2
2 2 1
```

## Sample Output
```
1
2
1
1
```

## Explanation
Team 1 has three champions with the following strength levels S1={1,1,2}.
Team 2 has four champions with the following strength levels S1={1,1,1,2}.

The first query matching up team x=1 and y=2  would play out as follows:

1. Team x=1 attacks . The champion with strength 2 can kill one champion with strength  2 and one champion with strength 1 . 
Now, s1={1,1,2} , and S2={1,1}.

2. Team x=2  attacks.  The champion with strength 1 can kill the champion with strength 2. Now, S1={1,1} , and S2={1,1}.

3. Team x=1  attacks . The champion with strength 1 can kill one champion with strength 1. Now,S1={1,1} , and S2={1}.

4. Team x=2 attacks .The champion with strength 1 can kill one champion with strength 1. Now,S1={1} , and S2={1} .

5. Team x=1 attacks . The champion with strength 1  can kill
the last champion with strength 1. Now,S1={1} , and S2={} .

After this last attack, all of Team 2's champions would be dead. Thus, we print 1 as team  1 would win that fight.
