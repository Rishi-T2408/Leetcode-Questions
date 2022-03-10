# 7 Segment Display
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Using <a href="https://www.electronics-tutorials.ws/blog/7-segment-display-tutorial.html" target="_blank" style="user-select: auto;">seven segment display</a>, you can write down any digit from 0 to 9 using at most seven segments. Given a positive number <strong style="user-select: auto;">N</strong> and then a string <strong style="user-select: auto;">S</strong> representing a number of<strong style="user-select: auto;"> </strong>N digits. You have to rearrange the segments in this N digit number to get the smallest possible N digit number. This number can have leading zeros. You can not waste any segment or add any segment from your own. You have to use all of the segments of the given N digits. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> You can refer this diagram for more details</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><img alt="" src="https://media.geeksforgeeks.org/img-practice/ScreenShot2022-02-17at11-1646053217.png" style="height: 104px; width: 500px; user-select: auto;" class="img-responsive"></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong></span><strong style="user-select: auto;">:</strong>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong>6</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">S = </strong>"234567"</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">000011</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">234567 has a total of 28 segments and
we can rearrange them to form 000011
which has 28 segments too. 000011 is the
smallest possible number which can be
formed on rearrangement.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong></span><strong style="user-select: auto;">:</strong>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong>3</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">S = </strong>"011"</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">011</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">011 has a total of 10 segments and this
is the smallest number with 10 segments.
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">sevenSegments()</strong> which takes an Integer N and a String S of length N as input and returns the smallest possible N digit number which can be made using all of the segments given.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>