### 7.3-1
***
Why do we analyze the expected running time of a randomized algorithm and not its worst-case running time?

### `Answer`
Because we can have better expected performance.


### 7.3-2
***
When RANDOMIZED-QUICKSORT runs, how many calls are made to the random-number generator RANDOM in the worst case? How about in the best case? Give your answer in terms of ![](http://latex.codecogs.com/gif.latex?\Theta) notation.

### `Answer`

Worst case:  Same as it's Height, which is ![](http://latex.codecogs.com/gif.latex?\Theta\left(lgn\right)).

Best case: Half of the worst-case, which is ![](http://latex.codecogs.com/gif.latex?\Theta) ![](http://latex.codecogs.com/gif.latex?(lg\left(\frac{n}{2}\right)))