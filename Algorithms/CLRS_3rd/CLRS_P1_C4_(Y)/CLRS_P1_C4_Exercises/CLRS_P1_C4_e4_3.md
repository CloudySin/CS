##4.3-1	Show that the solution of T(n) = T(n-1) + n is O(n^(2)).
- So:
		T(n - 1) = c(n-1)^(2)
- So:
		T(n) <= c(n-1)^(2) + n = cn^(2) - 2cn + c + n <= cn^(2).	(  c  >  1/2  )

##4.3-2	Show that the solution of T(n) = T(|^(n/2)^|) + 1 is O( lg(n) ).
- So:
		T(|^(n/2)^|) <= c|^(lg2)^|;
- So:
		T(n) <= c|^(lg2)^| + 1 <= clg(n) - clg(2) + 1 = clg(n) + ( 1 - c ) <= clg(n).	(  c  >  1  )

##4.3-3	We saw that the solution of T(n) = 2T(|_(n/2)_|) + n is O( nlg(n) ). Show that the solution of this recurrence is also Big_Omega(nlg(n)). Conclude that the solution is Big_Theta(nlg(n)).
-

