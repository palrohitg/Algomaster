def merge(arr, start, end):
	pass



def mergeSort(arr, start, end):
	if start < end:
		# find the middle elements in the arrays
		mid = (start + end) // 2
		mergeSort(arr, start, mid)
		mergeSort(arr, mid+1, end)
		merge(arr, start, mid, end)

if __name__ == '__main__':
	arr = [2,1,3]
	mergeSort(arr, 0, n - 1)
	pass