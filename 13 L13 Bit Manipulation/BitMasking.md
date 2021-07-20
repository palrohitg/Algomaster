### Check Set Bit

```cpp
x = num & (1 << (i - 1));
if (x) cout << "set" << endl; // no zero values
else cout << "not set" << endl; // zero

/*
example :
suppose we want to check the 10(1010) check second bits is set or not
10 &(1 << 1)
so 1 << 1 // 1 * pow(2,1)
10 & 2 // no zero values then we says it set or not
*/
```


### TO FLIP ith BIT OF A NUMBER :-
```cpp
x = num ^ (1 << (i - 1));

/*Approach :-
suppose we want to flip the second bit of 10 (1010) 1 to 0 (bits counting always start from right )
10 ^ (1<<1)
so 1<<1 corresponds to 1*pow(2,1)=2=0010(binary)
10 ^ 2
1010 ^ 0010 = 1000 and here in both operand our second bit is 1 and according to ^ properties when two bits are same then resultant is 0 so in this way second bit of 10 flips to 0 from 1.
*/
```


### To count all the set bit of an number:
```cpp
int count = 0;
while (num) {
	num &= (num - 1);
	count++;
}
return count;

//or

cout << __builtin_popcount(num) ;

// O(K) no of set bits in the nums
```


