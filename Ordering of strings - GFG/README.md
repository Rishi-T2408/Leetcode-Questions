# Ordering of strings
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;">You will be given <strong style="user-select: auto;">N</strong> number of strings. You have to find the lexicographically smallest string and the lexicographically largest string among these strings.</span></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 3
strings = a , ab , abc
<strong style="user-select: auto;">Output:</strong> a abc
<strong style="user-select: auto;">Explanation</strong>: Lexicographically smallest is
"a" and lexicographically largest is
"abc".</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 2
strings = abc , abc
<strong style="user-select: auto;">Output:</strong> abc abc
<strong style="user-select: auto;">Explanation</strong>: Lexicographically smallest is
"abc" and lexicographically largest is
"abc"</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task: &nbsp;</strong><br style="user-select: auto;">
You dont need to read input or print anything. Complete the function&nbsp;<strong style="user-select: auto;">orderStringâ€‹</strong><strong style="user-select: auto;">()</strong>&nbsp;which takes a 2d character array and an integer <strong style="user-select: auto;">N</strong> as&nbsp;input parameter and returns an array of size 2&nbsp;where first value&nbsp;should be lexicographically smallest string and second value should be lexicographically largest string.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N* max of all string length ).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N , length of each string &lt;= 10<sup style="user-select: auto;">3</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>