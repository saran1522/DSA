<h2><a href="https://leetcode.com/problems/maximum-candies-allocated-to-k-children/">2226. Maximum Candies Allocated to K Children</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">candies</code>. Each element in the array denotes a pile of candies of size <code style="user-select: auto;">candies[i]</code>. You can divide each pile into any number of <strong style="user-select: auto;">sub piles</strong>, but you <strong style="user-select: auto;">cannot</strong> merge two piles together.</p>

<p style="user-select: auto;">You are also given an integer <code style="user-select: auto;">k</code>. You should allocate piles of candies to <code style="user-select: auto;">k</code> children such that each child gets the <strong style="user-select: auto;">same</strong> number of candies. Each child can take <strong style="user-select: auto;">at most one</strong> pile of candies and some piles of candies may go unused.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum number of candies</strong> each child can get.</em></p>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> candies = [5,8,6], k = 3
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> We can divide candies[1] into 2 piles of size 5 and 3, and candies[2] into 2 piles of size 5 and 1. We now have five piles of candies of sizes 5, 5, 3, 5, and 1. We can allocate the 3 piles of size 5 to 3 children. It can be proven that each child cannot receive more than 5 candies.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> candies = [2,5], k = 11
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There are 11 children but only 7 candies in total, so it is impossible to ensure each child receives at least one candy. Thus, each child gets no candy and the answer is 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= candies.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= candies[i] &lt;= 10<sup style="user-select: auto;">7</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">12</sup></code></li>
</ul>
</div>