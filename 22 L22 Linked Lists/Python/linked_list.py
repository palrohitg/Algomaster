class Node:
	def __init__(self, data=None, next=None):
		self.data = data
		self.next = next 


def printList(head):

	ptr = head 
	while ptr is not None:
		print(ptr.data , end='=>')
		ptr = ptr.next


def construct():

	first = Node(1)
	second = Node(2)
	third = Node(3)

	head = first
	first.next = second
	second.next = third


	return head



if __name__ == '__main__':
	
	head = construct()
	printList(head)

