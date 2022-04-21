# Recursively remove all adjacent duplicates
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string s, remove all its adjacent duplicate characters recursively.&nbsp;</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
S = "geeksforgeek"
<strong style="user-select: auto;">Output:</strong> "gksforgk"
<strong style="user-select: auto;">Explanation: </strong>
g(ee)ksforg(ee)k -&gt; gksforgk</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>S = "abccbccba"
<strong style="user-select: auto;">Output:</strong> ""
<strong style="user-select: auto;">Explanation: 
</strong>ab(cc)b(cc)ba-&gt;abbba-&gt;a(bbb)a-&gt;aa-&gt;(aa)-&gt;""(empty string)</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">remove()</strong> which takes the string S as input parameter and returns the resultant string.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong> For some test cases, the resultant string would be an <strong style="user-select: auto;">empty</strong> string. For that case, the function should return the empty string only.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(|S|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(|S|)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=|S|&lt;=10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>