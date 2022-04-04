# Previous number in one swap
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a non-negative number N in the form of string. The task is to apply at most one swap operation on the number N so that the result is just a previous possible number.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp; </strong>Leading zeros are not allowed.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :
</strong>S = "12435"
<strong style="user-select: auto;">Output: 
</strong>12345
<strong style="user-select: auto;">Explanation:
</strong>Although the number 12354 
will be the largest smaller 
number from 12435. But it is 
not possible to make it using 
only one swap. So swap 
4 and 3 and get 12345.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>S = " 12345"
<strong style="user-select: auto;">Output: 
</strong>-1
<strong style="user-select: auto;">Explanation:
</strong>Digits are in increasing order. 
So it is not possible to 
make a smaller number from it.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function previousNumber() which takes the string S and returns the previous number of S. If no such number exists return -1;</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Expected Time Complexity: O(N)<br style="user-select: auto;">
Expected Auxiliary Space: O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2&lt;=|Number length |&lt;=10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>