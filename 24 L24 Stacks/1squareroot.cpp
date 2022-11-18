// Binary search approaches
int mySqrt(int x) {
    long lo = 0, hi = x, mid = 0;
    while (lo < hi) {
        mid = lo + (hi - lo + 1) / 2;
        if (mid * mid <= long(x)) lo = mid;
        else hi = mid - 1;
    }
    return hi;
}


/*      m s   e                         e 
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
    log(n) Binary Search Approach 
*/


// Binary Search Approach to check whether a no is a perfect square or not 
class Solution {
public:
    bool isPerfectSquare(int num) {
        long left = 1, right = num;
        while (left <= right) {
            long mid = (left + right) / 2;
            if (mid * mid == num) return true; // check if mid is perfect square
            if (mid * mid < num) { // mid is small -> go right to increase mid
                left = mid + 1;
            } else {
                right = mid - 1; // mid is large -> to left to decrease mid
            }
        }
        return false;
    }
};


class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Map<Integer, Integer> map = new HashMap<>();
        Stack<Integer> stack = new Stack<>();

        for (int n : nums2) {
            while (!stack.isEmpty() && stack.peek() < n) {
                map.put(stack.pop(), n);
            }

            stack.push(n);
        }

        for (int i = 0; i < nums1.length; i++) {
            nums1[i] = map.getOrDefault(nums1[i], -1);
        }

        return nums1;
    }
}

// TC: O(n + m), SC: O(n + m)
 def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res = []
        stack = []
        mapping = {}
        
        for n in nums2:
            while stack and n > stack[-1]:
                mapping[stack.pop()] = n
            stack.append(n)
            
        while stack:
            mapping[stack.pop()] = -1
            
        for n in nums1:
            res.append(mapping[n])

        return res