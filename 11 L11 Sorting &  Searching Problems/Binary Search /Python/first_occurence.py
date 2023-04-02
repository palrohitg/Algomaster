# Binary Search Approach 

def findElementUsingBS(arr:list)->int:
    start = 0
    end  = len(arr) - 1
    
    while start <= end:
        mid = (start + end) // 2
        if start == end:
            return arr[start] 
        elif mid % 2 != 0:
            if arr[mid-1] == arr[mid]:
                start = mid + 1
            else:
                end = mid - 1
        else:
            if (arr[mid] == arr[mid+1]):
                start = mid + 2
            else:
                end = mid 
                
    return arr[mid]