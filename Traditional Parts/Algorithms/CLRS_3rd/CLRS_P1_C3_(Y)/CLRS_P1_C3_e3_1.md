##3.1-1	Let f(n) and g(n) be asymptotically nonnegative functions. Using the basic definition of Theta-notation, prove that max(f(n), g(n)) = Theta(f(n)+g(n)).
- We have that: k1(f(n)+g(n)) < max(f(n), g(n)) < k2(f(n)+g(n));
- So max(f(n), g(n)) = Theta(f(n)+g(n)).

##3.1-2	Show that for any real constants a and b, where b > 0, (n+a)^(b) = Theta(n^(b)).
- We have that: (n^(b)) <= (n+a)^(b) <= (a^(b))(n^(b));
- So (n+a)^(b) = Theta(n^(b)).

##3.1-3	Explain why the statement, “The running time of algorithm A is at least O(n^(2)) is meaningless.
- O() notation only determines the upper limit.

##3.1-4	Is 2^(n+1) = O(2^(n))? Is 2^(2n) = O(2^(n))?
- First one : 2^(n+1) = 2^(n) * 2 <= c2^(n) for c >= 2;
- Second one : 2^(2n) = (2^(n))^(n) cannot be factorized into "c * 2^(n)" for constant c.

##3.1-5	Prove Theorem 3.1: For any two functions f(n) and g(n), we have f(n) = Theta(g(n)) 
##																if and only if f(n) = O(g(n)) and f(n) = 􏰉Omega(g(n)).
- Proof:
		If f(n) = O(g(n)), we have constant c1 that f(n) <= c1g(n);
		If f(n) = 􏰉Omega(g(n)), we have constant c2 that f(n) >= c2g(n);
		Thus, we have: c2g(n) <= f(n) <= c1g(n);
		Thus, f(n) = Theta(g(n)).

##3.1-6	Prove that the running time of an algorithm is Theta(g(n)) if and only if its worst-case running time is O(g(n)) and its best-case running time is Omega(g(n)).
- Same as 3.1-5:
		We have constant c1 that g(n) <= c1g(n);
		We have constant c2 that g(n) >= c2g(n);
		Thus, we have: c2g(n) <= g(n) <= c1g(n);
		Thus, time of g(n) = Theta(g(n)).

##3.1-7	Prove that o(g(n)) |^| omega(g(n)) is the empty set.
- Proof:
	Suppose a certain function f(n) = o(g(n)), 
													so, for all constant c1, f(n) < c1g(n);
	Suppose the same function f(n) = omega(g(n)), 
													so, for all constant c2, f(n) > c2g(n);
	Apparently, this is a paradox.

##3.1-8
- Omitted.