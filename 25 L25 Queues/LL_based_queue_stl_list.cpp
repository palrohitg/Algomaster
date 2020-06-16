// STL List based implementations of the circular Queues 
/*




	To leverage the Queue Functionality two functions is useful :
		1. Insert at tails
		2. Remove at head
		3. The size will be automatically grow and shrink according to the need 

*/
#include<iostream>
#include<list>

using namespace std;

class Queue{
	// Data member of the class
	int cs;
	list <int>qu;

	public :

		Queue() {
			this->cs = 0;
		} 

		bool isEmpty() {
			return this->cs == 0;
		}



		void enQueue(int data) {
				qu.push_back(data);
				this->cs += 1;
		}

		void deQueue() {
			if(!isEmpty()) {
				qu.pop_front();
				this->cs -= 1;
			}
		}

		int getFront() {
			return qu.front();
		}
};
int main() {
	Queue q;
	for(int i=1; i<5; i++) {
		q.enQueue(i);
	}
	q.deQueue();
	while(!(q.isEmpty())) {
		cout << q.getFront() << " ";
		q.deQueue();
	}
	return 0;
}