# Moving on grid
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a grid with dimensions r&nbsp;x c, the two&nbsp;players (say JON&nbsp;and ARYA&nbsp;) can move the coin over the grid satisfying the following rules:</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">There is a coin on (1,1) cell initially.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">JON&nbsp;will move first.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Both will play on alternate moves.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">In each move they can place coin on following positions if current position of coin is x,y<br style="user-select: auto;">
	(x+1,y), (x+2,y), (x+3,y), (x,y+1), (x,y+2), (x,y+3), (x,y+4), (x,y+5), (x,y+6)</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">They can't go outside the grid.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Player who cannot make any move will lose this game.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Both play optimally.</span></li>
</ul>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: r = 1, c = 2
<strong style="user-select: auto;">Output:</strong>&nbsp;JON&nbsp;
<strong style="user-select: auto;">Explanation</strong>: ARYA lost the game because
he won't able to move after JON's move.  </span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>r = 2, c = 2
<strong style="user-select: auto;">Output:&nbsp;</strong>ARYA
<strong style="user-select: auto;">Explanation</strong>: After first move by JON(1,2 or 2,1)
and second move by ARYA(2,2) JON won't able to
move so ARYA wins.   </span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You dont need to read input or print anything. Complete the function <strong style="user-select: auto;">movOnGrid()&nbsp;</strong>which takes r&nbsp;and c&nbsp;as input parameter and returns the name of the winner ( either JON&nbsp;or ARYA)</span><span style="font-size: 18px; user-select: auto;">.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(1)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= r, c&nbsp;&lt;=10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>