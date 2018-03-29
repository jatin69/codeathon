# Q4

On being caught and sentenced to death by the East India Trading company, the famous pirate, Blackbeard confessed that he had hidden all his treasures on the island of Isla de Muerta. On being asked about it he only replied, 
“21 and step”. Now 200 years later his diary has been found aboard the wrecks of his prized galleon Queen’s Anne’s Revenge. The diary was filled with gibberish, except on one page. 
It had two lines,
- The first line being , ” DMDREHHERH”,
And  scribbled below it, “moving each to the 21st in line gives mirror words”. 
Which may have been someone who had an idea of what it all meant and a possible clue to the lost treasure.
- The second ,“DFDFFDGHHG”, And scribbled below it, “moving each to the 10th  in line gives …….” The rest of the writing being worn out….
And at the bottom “Steps to my Revenge”. 

Continue reading to find a way to calculate the steps required to find the treasure?

## Input format:
First line of input will contain a String, the next line will contain a single input integer specified in the scribbled line. The third line contains a string of the second line scribbled in the diary. The 4th line contains an integer, scribbled below the second line in the diary.

## Output format:
The output will be an integer in a single line.
This integer represent the product of the results of the above two strings

## Sample Input: 
```
DMDREHHERH
21
DFDFFDGHHG
10
```
		
## Sample output: 
```
24
```

## Explanation: +

The first string “DMREHHERH”, scribbled text being 21, we add  21 to each character to find the new string. The new string contains 4 mirror substrings. The second string “DFDFFDGHHG” scribbled text being 10, we add each character with 10 to get a new string. The new string contains 6 mirror substrings. Multiplying 4 and 6 we get 24, the steps to the treasure box.
Mirror substrings are just like normal strings, but when a mirror is placed at the correct position, it resembles the original string but reversed in order.