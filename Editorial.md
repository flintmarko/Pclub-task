This solution is based on dynamic programming.  
First of all we will calculate the frequencies of words which share same letters(like abcdefu,abcdfeu,cdaefub etc).You can do this by first sorting all words and increase the  
frequency of each sorted word,use map data structure (in c++).Define dp, whose state is : dp[i] will store all possible number of ways in which the string  
[s[i],s[i+1],...,s[n-1]] can be decoded.Also define a function , int solve(int index): which returns dp[index] And the answer to problem will therefore be "solve(0)" or "dp[0]".  
So for a given index i,iterate over all index j greater than equal to i, and check in how many ways the string S="s[i]s[i+1]...s[j]" can be decoded which is equal to  
frequency of sorted version of the S. and add freq[sorted(S)]*solve(j+1) to dp[i].When argument of solve function becomes equal to length of the parent disordered string
return 1.
