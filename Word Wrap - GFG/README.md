# Word Wrap
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><div class="row bottom" style="user-select: auto;">
<div class="col-xs-12 textAlign" style="user-select: auto;">
<div class="modifiedAnswer" style="user-select: auto;">
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">nums[]</strong> of size <strong style="user-select: auto;">n</strong>, where&nbsp;<strong style="user-select: auto;">nums[i]</strong>&nbsp;denotes the number of characters in one word.</span><span style="font-size: 18px; user-select: auto;">&nbsp;Let <strong style="user-select: auto;">K</strong>&nbsp;be the&nbsp;limit on the number of characters that can be put in one line (line width). Put line breaks in the given sequence such that the lines are printed neatly.<br style="user-select: auto;">
Assume that the length of each word is smaller than the line width. When line breaks are inserted there is a possibility that extra spaces are present in each line. The extra spaces include spaces put at the end of every line <strong style="user-select: auto;">except the last one</strong>.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You have&nbsp;to <strong style="user-select: auto;">minimize </strong>the following total cost where <strong style="user-select: auto;">total cost </strong>= Sum of cost of all lines, where cost of line is = (Number of extra spaces in the line)<sup style="user-select: auto;">2</sup>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>nums = {3,2,2,5}, k = 6
<strong style="user-select: auto;">Output: </strong>10
<strong style="user-select: auto;">Explanation</strong>: Given a line can have 6
characters,
Line number 1: From word no. 1 to 1
Line number 2: From word no. 2 to 3
Line number 3: From word no. 4 to 4
So total cost = (6-3)<sup style="user-select: auto;">2</sup> + (6-2-2-1)<sup style="user-select: auto;">2</sup> = 3<sup style="user-select: auto;">2</sup>+1<sup style="user-select: auto;">2</sup> = 10.
As in the first line word length = 3 thus
extra spaces = 6 - 3 = 3 and in the second line
there are two word of length 2 and there already
1 space between two word thus extra spaces
= 6 - 2 -2 -1 = 1. As mentioned in the problem
description there will be no extra spaces in
the last line. Placing first and second word
in first line and third word on second line
would take a cost of 0<sup style="user-select: auto;">2</sup> + 4<sup style="user-select: auto;">2</sup> = 16 (zero spaces
on first line and 6-2 = 4 spaces on second),
which isn't the minimum possible cost.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>nums = {3,2,2}, k = 4
<strong style="user-select: auto;">Output: </strong>5
<strong style="user-select: auto;">Explanation: </strong>Given a line can have 4 
characters,
Line number 1: From word no. 1 to 1
Line number 2: From word no. 2 to 2
Line number 3: From word no. 3 to 3
Same explaination as above total cost
= (4 - 3)<sup style="user-select: auto;">2</sup> + (4 - 2)<sup style="user-select: auto;">2</sup> = 5<strong style="user-select: auto;">.</strong></span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong style="user-select: auto;">solveWordWrap()&nbsp;</strong>which takes nums and k as input paramater and returns the minimized total cost.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(n)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n ≤ 500<br style="user-select: auto;">
1 ≤ nums[i] ≤ 1000<br style="user-select: auto;">
max(nums[i]) ≤ k ≤ 2000</span></p>
</div>
</div>
</div>
 <p style="user-select: auto;"></p>
            </div>