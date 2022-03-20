# Choose and Swap
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given a string <strong style="user-select: auto;">s</strong> of lower case english alphabets. You can choose any two characters in the string and replace all the occurences of the first character with the second character and replace all the occurences of the second character with the first character. Your aim is to find the lexicographically smallest string that can be obtained by doing this operation at most once.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
A = "ccad"
<strong style="user-select: auto;">Output:</strong>&nbsp;"aacd"
<strong style="user-select: auto;">Explanation</strong>:
In ccad, we choose a and c and after 
doing the replacement operation once we get, 
aacd and this is the lexicographically
smallest string possible. </span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
A = "abba"
<strong style="user-select: auto;">Output: </strong>"abba"
<strong style="user-select: auto;">Explanation:
</strong>In abba, we can get baab after doing the 
replacement operation once for a and b 
but that is not lexicographically smaller 
than abba. So, the answer is abba. </span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">chooseandswap()</strong>&nbsp;which takes the string A as input parameters and returns the <strong style="user-select: auto;">lexicographically smallest string</strong> that is possible after doing the operation at most once.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(|A|) length of the string A<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;= |A| &lt;=10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>