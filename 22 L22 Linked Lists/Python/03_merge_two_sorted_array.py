def sortedMerge(a, b):
 
    # base cases
    if a is None:
        return b
    elif b is None:
        return a
 
    # pick either `a` or `b`, and recur
    if a.data <= b.data:
        result = a
        result.next = sortedMerge(a.next, b)
    else:
        result = b
        result.next = sortedMerge(a, b.next)
 
    return result