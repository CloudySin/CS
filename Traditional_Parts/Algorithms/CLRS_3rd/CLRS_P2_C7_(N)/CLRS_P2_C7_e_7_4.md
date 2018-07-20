![](http://latex.codecogs.com/gif.latex?)

### Exercises 7.4-1
***
Show that in the recurrence
![](http://latex.codecogs.com/gif.latex?%20T\(n\)%20=%20\\max%20\\limits_{0%20\\le%20q%20\\le%20n-1}%20\(T\(q\)%20+%20T\(n-q-1\)\)+\\Theta\(n\)%20\\\\%0d%0aT\(n\)%20=%20\\Omega%20\(n^2\)%0d%0a)

### `Answer`

![](http://latex.codecogs.com/gif.latex?%20T\(n\)%20=%20\\max%20\\limits_{0%20\\le%20q%20\\le%20n-1}%20\(T\(q\)%20+%20T\(n-q-1\)\)+\\Theta\(n\)%20\\\\%20~\\hspace{15%20mm}%0d%0a=%20T\(n-1\)%20+%20\\Theta\(n\)%20\\\\%20~\\hspace{15%20mm}%0d%0a=%20\\Theta\(n^2\)%20\\\\%0d%0a\\quad\\text{because%20it%20is%20}%20\\Theta\(n^2\)%0d%0a\quad\\text{so%20it%20is%20also%20}%20\\Omega\(n^2\)%0d%0a)

