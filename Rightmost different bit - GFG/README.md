# Rightmost different bit
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two numbers <strong style="user-select: auto;">M</strong> and <strong style="user-select: auto;">N</strong>. The task is to find the position of the&nbsp;<strong style="user-select: auto;">rightmost different</strong> bit in the binary representation of numbers.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:&nbsp;</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>M = 11, N = 9
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Binary representation of the given 
numbers are: 1011 and 1001, 
2nd bit from right is different.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>M = 52, N = 4
<strong style="user-select: auto;">Output</strong>: 5
<strong style="user-select: auto;">Explanation</strong>: Binary representation of the given 
numbers are: 110100 </span><span style="font-size: 18px; user-select: auto;">and 0100, 
5th-bit from right is different.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">User Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">posOfRightMostDiffBit</strong>() which takes<strong style="user-select: auto;"> two arguments m and n</strong> and <strong style="user-select: auto;">returns</strong> the <strong style="user-select: auto;">position of first different bits in m and n</strong>.&nbsp;If both m&nbsp;and n&nbsp;are the same then return&nbsp;<strong style="user-select: auto;">-1</strong> in this case.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(max(log m, log n)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
0 &lt;= M &lt;= 10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
0 &lt;= N &lt;= 10<sup style="user-select: auto;">9</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>