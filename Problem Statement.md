Krish has a limited vocabulary and he accidentally forgot his laptop at his uncle’s house yesterday but today he needs some documents urgently from his laptop. 
So he mailed his uncle the password of his laptop, which is an English sentence made from his vocabulary. But one of his naughty friends, Prachi cleverly changed the password and this is how she did that: 
she first jumbled each word of the sentence and then remove the spaces between the jumbled words. Now, you have to tell what are the maximum possible tries, the uncle has to make to open the laptop.



Input Format:


First line of the input contains an integer t (1 <= t <= 100)-the number of test cases. Description of each test case :
Fisrt line of each test case contains two integers n, q (1 <= n <= 50, 1 <= q <= 50)-the number of words in Krish’s vocabulary and number of queries
Then, follow n lines each containing a word in his vocabulary.Length of each word <= 50. Then,follow q lines each containing the password after the changes made by Prachi.




Output Format:


Print t number of lines, and in ith line print q integers a1,a2,a3,... where aj=maximum number of tries that uncle has to made in order to unlock the laptop for jth query of ith test case.


Sample test case: 

Input:

1

5 1

is

this

a

animal

manali

isthsianamila

Output: 8

Explanation:

A maximum of 8 passwords are possible: is this a animal

is this a manali

this is a animal

this is a manali

is this animal a

is this manali a

this is animal a

this is manali a
