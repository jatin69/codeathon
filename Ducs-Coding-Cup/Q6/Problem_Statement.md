# Q6

Mr. Zazoo Zizoo has just finished giving his 10th board exams. He has a month vacation now. Zazoo is feeling bored and so decides to play a game with his girlfriend, Zuzoo. He tells Zuzoo that if she wins the game, he will take her on a coffee date. For this, Zazoo gives Zuzoo a huge game board that has holes on it and some 	tetris-like shapes. These tetris-like shapes are not restricted in terms of quantity i.e there is unlimited source of these shapes. Now, Zuzoo has to place these tetris-like shapes on the board and cover the board as exactly as possible. 
The source is capable of generating the following pieces:

1)
```
%%%
.%%
```

2)
```
%%.
%%%
```

3)
```
%.%
%%%
```

4)
```
..%
%%%
%..
```

5)
```
.%.
%%%
.%.
```

Zazoo tells Zuzoo that she is allowed to flip and rotate pieces before placing them on the board.

## Input Format
The first line contains dimension of the board - the height, 100<=n and the width, m<=100 of the board. The next n lines, each containing m space-separated numbers, are the board description. The symbol '0' is a square which should be filled, the symbol '1' is a square which should not be filled.

## Constraints:
```
3<=n<=100
3<=m<=100
```

## Output Format
First output the “number of pieces” used, k < 106. Then write k “successive descriptions” of the used pieces. Each description should be of the form: t - the number of full squares of the piece, followed by t pairs of integers denoting the “coordinates” of the respective squares (using 0-based offsets, with the top-left of input written as (0,0) ).

## Sample Input:
```
3 3
0 0 0
0 0 0
1 0 0
```

## Sample Output:
```
1
5
0 0
1 0
1 1
1 2
0 2
```

## Explanation
Use shapes to fill maximum square boxes in the board.
Maximum number of pieces can be used when all the squares in the board has ‘0’ symbol. Output will be 0 when all the squares in the board has ‘1’ symbol since no any piece can be used, as shown in the first test case.

