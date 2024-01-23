# Hashing
- It is the process of finding a unique index for all elements to store them.
- This unique index is called hash value.
- The element upon which we apply function to find hash value is called hash function.
- Hash table is the storage area where we insert elements. It is divided into buckets/unique indices where we can store the elements. 

# Why Hashing?
- When we want to do insertion, deletion and searching of elements efficiently (in O(1)), we use hashing.
- Element is kept at a unique index, making the search in O(1).

# Hash Functions
1. Division Method: h(k) = k mod m (where m = number of buckets in hash table)

2. Mid Square Method: h(k) = k^2 and extract middle digits

3. Digit Folding Method: Fold key into equal size parts

4. Multiplication Method: h(k) = floor(M(kA mod 1)) where 0 < A < 1 and M is the size of the hash table

