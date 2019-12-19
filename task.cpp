*** Task 1 –Circus Night : ***

A number of n(1<n<11) couples go to the circus together and sit in a row of ( 2n ) seats. In how many ways can the ( 2n ) people
be arranged, if each couple sits together (i.e., for each couple, the two people are in adjacent seats).

Sample Input ----------------------------- Sample Output
2                                               8
5                                             3840
1                                               2

Collateral  tasksmay as wellbeintroduced in discussion:circular permutation –seating at a round table[36];
reduce the condition to sitting in any order, men sit together and women sit together;onecouple is arguing and they refuse to sit
together, the other couples can sit in any way they want.

=>> Task 1 –Circus Night : (Answer) ==>>
First, we consider the different ways of arranging the couples themselves, which is a permutation on nblocks.
Second, within each couple, there two ways to seat individuals. Since there are ( n )couples, we multiply two ( n )times : 
              P(n, n)x 2 x 2 x ...... x 2 = ( n!.(2)^n );


*** Task 2 –The BookShelf ***

For a given number n, 0<n<11, generate all ways to arrange in a shelf the books coded with the set {1, 2, ..., n} in
lexicographical order.

Sample Input ------------------------------ Sample Output
  3                                            1 2 3
  2                                            1 3 2
                                               2 1 3
                                               2 3 1
                                               3 1 2
                                               3 2 1

==>> Task 2 –The BookShelf ==>>
There are lots of algorithms for permutations generation : next permutation, iterative and recursive ones. 