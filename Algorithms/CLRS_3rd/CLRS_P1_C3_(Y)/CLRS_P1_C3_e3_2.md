##3.2-1	Show that if f(n) and g(n) are monotonically increasing functions, then so are the functions f(n) + g(n) and f(g(n)), and if f(n) and g(n) are in addition nonnegative, then f(n) * g(n) is monotonically increasing.
- Suppose we have:
					x1 < x2;
	Thus, 			
					f(x1) < f(x2);
					g(x1) < g(x2);
	Thus, 
					{	f(x1) + g(x1) < f(x2) + g(x2);
					{
					{	f(g(x1)) < f(g(x2));
					{
					{	f(x1) * g(x1) < f(x2) * g(x1) < f(x2) * g(x2);
	Thus,			
					f(n) + g(n) 	is a monotonically increasing function.
					f(g(n))			is a monotonically increasing function.
					f(n) * g(n)		is a monotonically increasing function.

##3.2-2	Prove equation (3.16).
- Left:
		a^(log(^b^)(c)) = a^(log(^a^)(c) / a^(log(^a^)(b))) = c^( (log(^a^)(b)) ^ (-1)) = c^(log(^b^)(a)) = Right;

##3.2-3	Prove equation (3.19). Also prove that n! = omega(2^(n)) and n! = o(n^(n));
- Proof_1:
			We have: 			n! < n^(n)
- 			
			Thus: 				lg(n!) < lg(n^(n)) = nlg(n) = o(n^(n))
- 			
			We also have:		n! > 2^(n) for n > 5;
- 
			Thus:				lg(n!) > lg(2^(n)) = nlg(2) = n = omega(2^(n))
- 
			for n = 1, 			1! > 1 * lg (1) = 0
- 
			Thus:				lg(n!) = Theta(nlg(n));

#3.2-4	Is the function ( (|^) lg(n) (^|) )! polynomially bounded? Is the function ( (|^) lg(lg(n)) (^|) )! polynomially bounded?
- First one:
			Yes. You can always find a bigger n^(k).
- Second one:
			Yes. Same as the first one.

##3.2-5	Which is asymptotically larger: lg(lg(^ * ^)(n)) or lg􏰂(^ * ^)(lg(n))?
- 
	Latter one is bigger.

##3.2-6	Show that the golden ratio Phai and its conjugate Phai_^ both satisfy the equation x^(2) = x + 1.
- 
	Just taking the values inside the euqation sufficies the proof.(???)

##3.2-7 Prove by induction that the ith Fibonacci number satisfies the equality
##	F_i = (Phai - Phai_^) / sqrt(5), 
##	where Phai􏰋 is the golden ratio and 􏰋Phai_^ is its conjugate.
- Proof:
		F_0 = 0 (satisfying);
		F_1 = 1 (satisfying);
		F_i = F_(i-1) + F_(i-2) = (layout of the equations) = (satisfying 	inside);
		F_(i+1) = F_i + F_(i-1) = (layout of the equations) = (satisfying inside);

##3.2-8 Show that kln(k) = Theta(n) implies k = Theta(n/ln(n));
- We have:
			c1 * n <= kln(k) <= c2 * n;
- So:
			(c1 * n)/ln(k) <= k <= (c2 * n)/ln(k);
- So:
			(c3 * n)/ln(n) <= (c1 * n)/ln(k) <= k <= (c2 * n)/ln(k) <= (c4 * n)/ln(n);
- So:
			k = Theta(n/ln(n));
