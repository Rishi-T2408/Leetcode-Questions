# Minimum times A has to be repeated such that B is a substring of it
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings <strong style="user-select: auto;">A </strong>and<strong style="user-select: auto;"> B. </strong>Find minimum number of times A has to be repeated such that B is a Substring of it. If <strong style="user-select: auto;">B</strong> can never be a substring then return <strong style="user-select: auto;">-1</strong>.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>A = "abcd"
B = "cdabcdab"
<strong style="user-select: auto;">Output:
</strong>3
<strong style="user-select: auto;">Explanation:</strong>
</span><span style="font-size: 18px; user-select: auto;">Repeating A three times (“abcdabcdabcd”),
B is a substring of it. B is not a substring
of A when it is repeated less than 3 times.</span>
</pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>A = "ab"
B = "cab"
<strong style="user-select: auto;">Output :</strong>
-1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong>
No matter how many times we repeat A, we can't
get a string such that B is a substring of it.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">minRepeats()</strong>&nbsp;which takes 2 strings A, and B respectively and returns the minimum number of times A has to be repeated such that B is a substring of it. Return -1 if it's not possible.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(|A| * |B|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(|B|)</span></p>

<div style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ |A|, |B| ≤ 10<sup style="user-select: auto;">3</sup></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">String A and B consists of lower case alphabets</span></div>
 <p style="user-select: auto;"></p>
            </div>