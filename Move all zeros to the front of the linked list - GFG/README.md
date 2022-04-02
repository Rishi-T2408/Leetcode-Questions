# Move all zeros to the front of the linked list
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a linked list, the task is to move all 0’s to the front of the linked list. The order of all another element except 0 should be same after rearrangement. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
The first line of input contains an integer <strong style="user-select: auto;">T </strong>denoting the number of test cases. For each test case, the first line contains an integer <strong style="user-select: auto;">N </strong>denoting&nbsp;the number of elements in the Linked List and the second line&nbsp;contains N-space&nbsp;separated integer inputs i.e. elements&nbsp;in the Linked List. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
For each test case, the output is the modified linked list having all 0's in front.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">User Task:</strong><br style="user-select: auto;">
The task is to complete the function&nbsp;<strong style="user-select: auto;">moveZeroes</strong>() which should move all the 0's to the front of the list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= T &lt;= 100<br style="user-select: auto;">
1 &lt;= N &lt;= 50<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>List is from back to front.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:<br style="user-select: auto;">
Input:</strong><br style="user-select: auto;">
2<br style="user-select: auto;">
10<br style="user-select: auto;">
0 1 0 1 2 0 5 0 4 0<br style="user-select: auto;">
7<br style="user-select: auto;">
0 0 0 3 2 1 1</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
0 0 0 0 0&nbsp;4 5 2 1 1<br style="user-select: auto;">
0 0 0 1 1 2 3</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:<br style="user-select: auto;">
1.&nbsp;</strong>Original list was 0-&gt;4-&gt;0-&gt;5-&gt;0-&gt;2-&gt;1-&gt;0-&gt;1-&gt;0-&gt;NULL.<br style="user-select: auto;">
&nbsp; &nbsp; &nbsp;After processing list becomes 0-&gt;0-&gt;0-&gt;0-&gt;0-&gt;4-&gt;5-&gt;2-&gt;1-&gt;1-&gt;NULL.<br style="user-select: auto;">
<strong style="user-select: auto;">2.</strong>&nbsp;Original list was 1-&gt;1-&gt;2-&gt;3-&gt;0-&gt;0-&gt;0-&gt;NULL.<br style="user-select: auto;">
&nbsp; &nbsp; After processing&nbsp;list becomes 0-&gt;0-&gt;0-&gt;1-&gt;1-&gt;2-&gt;3-&gt;NULL.</span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>