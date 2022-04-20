# Theft at World Bank
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The worlds most successful thief Albert Spaggiari was planning for his next heist on the world bank. He decides to carry a sack with him, which can carry a maximum weight&nbsp;of <strong style="user-select: auto;">C</strong> kgs. Inside the world bank there were <strong style="user-select: auto;">N</strong>&nbsp;large blocks of gold. All the blocks have some profit value associated with them<em style="user-select: auto;"> i.e.</em> if he steals <strong style="user-select: auto;">i<sup style="user-select: auto;">th</sup></strong> block of weight <strong style="user-select: auto;">w[i]</strong> then he will have <strong style="user-select: auto;">p[i] </strong>profit. As blocks were heavy he decided to steal some part of them by cutting them&nbsp;with his cutter.<br style="user-select: auto;">
The thief does not like symmetry, hence, he wishes to not take blocks or parts of them whose weight is a perfect square. Now, you need to find out the maximum profit that he can earn given that he can only carry blocks of gold in his sack.&nbsp;<br style="user-select: auto;">
<strong style="user-select: auto;">Note</strong>: The answer should be precise upto 3 decimal places.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1 :</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">N = 3, C = 10
w[] = {4, 5, 7}
p[] = {8, 5, 4)
<strong style="user-select: auto;">Output: </strong>
7.857
<strong style="user-select: auto;">Explanation: </strong>As first blocks weight is 4
which is a perfect square, he will not use 
this block. Now with the remaining blocks 
the most optimal way is to use 2<sup style="user-select: auto;">nd</sup> block 
completely and cut 5kg piece from the 3<sup style="user-select: auto;">rd</sup> 
block to get a total profit of 5 + 2.857 
= 7.857</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">maximumProfit()</strong>&nbsp;which takes N, C, w[ ] and p[ ]&nbsp;as input parameters and returns the maximum profit thief can achieve with precision&nbsp;upto 3 decimal places.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N * LogN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity :&nbsp;</strong>O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤&nbsp;10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1&nbsp;≤&nbsp;C ≤&nbsp;10<sup style="user-select: auto;">18</sup><br style="user-select: auto;">
1 ≤&nbsp;W<sub style="user-select: auto;">i&nbsp;</sub>≤&nbsp;10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
1 ≤&nbsp;P<sub style="user-select: auto;">i&nbsp;</sub>≤&nbsp;10<sup style="user-select: auto;">9</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>