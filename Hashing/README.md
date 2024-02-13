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

# Collisions in Hashing
- When 2 elements have same hash value, then a collision is said to have occurred.
To handle collisions, there are two ways:
(1) Open Hashing
(2) Closed Hashing

## Open Hashing or Closed Addressing
- Method that handles collisions is called Separate Chaining.
- In every bucket, we will store values with same hash value using Linked List.
- Time Complexity of Search: O(l) where l = length of the list
- Due to the chain being made, this method is called Separate Chaining.

### Advantages:
- It is simple to implement.
- We use this method when we don't know the frequency of elements to be added.
- The table will never be entirely filled.

### Disadvantages:
- There will be some values/buckets that won't get filled. 
- If all values come in one bucket, time complexity will increase to O(n).

## Closed Hashing or Open Addressing
(1) Linear Probing: (h(k) + i) mod 10 where 0 <= i <= 9
Value of i changes conditionally.

#### Disadvantages:
- Clusters might be created in linear probing.

(2) Quadratic Probing: (h(k) + i*i) mod 10 where 0 <= i <= ,M and M = size of hash table

(3) Double Hashing: Two hash functions are used; (h1(k) + i * h2(k)) mod M where 0 <= i <= M
It is more complex than other methods.

# Load Factor
- Load factor gives the average number of entries in one bucket.
- If n = number of elements and m = number of buckets, then
>> Load Factor = n/m
- Load factor should be a low value as search would become inefficient.
- If the limit of load factor (which is 0.75) crosses, we focus on Rehashing.

# Rehashing
- Increasing size of hash table and redistributing elements in it is called rehashing.
- It is a very costly operation as we need to create a new hash table and find new hash values.
- But it is an important step to avoid collisions and reduce time complexity to O(1).