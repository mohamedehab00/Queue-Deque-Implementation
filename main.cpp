#include <bits/stdc++.h>
#include "queue.h"
#include "deque.h"
using namespace std;

int main()
{

    Queue<int> q;
    // Functionality Testing
    cout<<endl;
    cout<<"QUEUE!!!!"<<endl;
    cout<<endl;
    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 2147483647 and Queue back: 2147483647
	----------------------------------------------------
	*/

	q.push(10);
    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 10
	----------------------------------------------------
	*/

	q.push(20);
    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 20
	----------------------------------------------------
	*/

	q.push(30);
    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 30
	----------------------------------------------------
	*/

	q.push(40);
    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 40
	----------------------------------------------------
	*/

	q.push(50);
    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 50
	----------------------------------------------------
	*/

	while (q.get_NO_Elements() > 0) {
        cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
		q.pop();
		cout << "queue front has been deleted\n";
        cout << "----------------------------------------------------\n";
	}
	cout << "Queue is empty now\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 50
	queue front has been deleted
	----------------------------------------------------
	Queue front: 20 and Queue back: 50
	queue front has been deleted
	----------------------------------------------------
	Queue front: 30 and Queue back: 50
	queue front has been deleted
	----------------------------------------------------
	Queue front: 40 and Queue back: 50
	queue front has been deleted
	----------------------------------------------------
	Queue front: 50 and Queue back: 50
	queue front has been deleted
	----------------------------------------------------
	Queue is empty now
	*/

    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 2147483647 and Queue back: 2147483647
	----------------------------------------------------
	*/

	q.push(10);
    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 10
	----------------------------------------------------
	*/

	q.push(20);
    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 20
	----------------------------------------------------
	*/

	q.push(30);
    cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 30
	----------------------------------------------------
	*/

	while (q.get_NO_Elements() > 0) {
        cout << "Queue front: " << q.Front() << " and Queue back: " << q.Back() << '\n';
		q.pop();
		cout << "queue front has been deleted\n";
        cout << "----------------------------------------------------\n";
	}
	cout << "Queue is empty now\n";

	/* Expected Output:
	Queue front: 10 and Queue back: 30
	queue front has been deleted
	----------------------------------------------------
	Queue front: 20 and Queue back: 30
	queue front has been deleted
	----------------------------------------------------
	Queue front: 30 and Queue back: 30
	queue front has been deleted
	----------------------------------------------------
	Queue is empty now
	*/
	/////////////////////////////////////////////////////
    Deque<int> dq;

    // Functionality Testing
    cout<<endl;
    cout<<"DEQUE!!!!"<<endl;
    cout<<endl;
    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Deque front: 2147483647 and Deque back: 2147483647
	Deque items forward:
	Deque items backward:
	----------------------------------------------------
	*/

    cout << "adding the following elements 10 20 30 40 50\n";
	dq.insert_end(10);
	dq.insert_end(20);
	dq.insert_end(30);
	dq.insert_end(40);
	dq.insert_end(50);
    cout << "the above elements have been added to the deque\n";

	/* Expected Output:
	adding the following elements 10 20 30 40 50
	the above elements have been added to the deque
	*/

    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Deque front: 10 and Deque back: 50
	Deque items forward:  10 20 30 40 50
	Deque items backward: 50 40 30 20 10
	----------------------------------------------------
	*/

    cout << "add element 60 at the end of the deque\n";
	dq.insert_end(60);
    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	add element 60 at the end of the deque
	Deque front: 10 and Deque back: 60
	Deque items forward:  10 20 30 40 50 60
	Deque items backward: 60 50 40 30 20 10
	----------------------------------------------------
	*/

    cout << "add element 20 at the begin of the deque\n";
	dq.insert_begin(20);
    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	add element 20 at the begin of the deque
	Deque front: 20 and Deque back: 60
	Deque items forward:  20 10 20 30 40 50 60
	Deque items backward: 60 50 40 30 20 10 20
	----------------------------------------------------
	*/

    cout << "add element 70 at the begin of the deque\n";
	dq.insert_begin(70);
    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	add element 70 at the begin of the deque
	Deque front: 70 and Deque back: 60
	Deque items forward:  70 20 10 20 30 40 50 60
	Deque items backward: 60 50 40 30 20 10 20 70
	----------------------------------------------------
	*/

    cout << "delete the first element \n";
	dq.delete_begin();
    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	delete the first element
	Deque front: 20 and Deque back: 60
	Deque items forward:  20 10 20 30 40 50 60
	Deque items backward: 60 50 40 30 20 10 20
	----------------------------------------------------
	*/

    cout << "delete the last element \n";
	dq.delete_end();
    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	delete the last element
	Deque front: 20 and Deque back: 50
	Deque items forward:  20 10 20 30 40 50
	Deque items backward: 50 40 30 20 10 20
	----------------------------------------------------
	*/

    cout << "delete the first element \n";
	dq.delete_begin();
    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	delete the first element
	Deque front: 10 and Deque back: 50
	Deque items forward:  10 20 30 40 50
	Deque items backward: 50 40 30 20 10
	----------------------------------------------------
	*/

    cout << "delete the last element \n";
	dq.delete_end();
    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	delete the last element
	Deque front: 10 and Deque back: 40
	Deque items forward:  10 20 30 40
	Deque items backward: 40 30 20 10
	----------------------------------------------------
	*/

    cout << "deleting the following elements 10 20 30 40\n";
    dq.delete_end();
    dq.delete_end();
    dq.delete_end();
    dq.delete_end();
    cout << "the above elements have been deleted from the deque\n";

	/* Expected Output:
	deleting the following elements 10 20 30 40
	the above elements have been deleted from the deque
	*/

    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Deque front: 2147483647 and Deque back: 2147483647
	Deque items forward:
	Deque items backward:
	----------------------------------------------------
	*/

    cout << "adding the following elements 40 30 20 10\n";
	dq.insert_begin(10);
	dq.insert_begin(20);
	dq.insert_begin(30);
	dq.insert_begin(40);
    cout << "the above elements have been added to the deque\n";

	/* Expected Output:
	adding the following elements 40 30 20 10
	the above elements have been added to the deque
	*/

    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Deque front: 40 and Deque back: 10
	Deque items forward:  40 30 20 10
	Deque items backward: 10 20 30 40
	----------------------------------------------------
	*/

    cout << "deleting the following elements 40 30 20 10\n";
    dq.delete_begin();
    dq.delete_begin();
    dq.delete_begin();
    dq.delete_begin();
    cout << "the above elements have been deleted from the deque\n";

	/* Expected Output:
	deleting the following elements 40 30 20 10
	the above elements have been deleted from the deque
	*/

    cout << "Deque front: " << dq.Front() << " and Deque back: " << dq.Back() << '\n';
    cout << "Deque items forward:  ";
    dq.print_deque();
    cout << '\n';
    cout << "Deque items backward: ";
    dq.print_deque_reverse();
    cout << '\n';
    cout << "----------------------------------------------------\n";

	/* Expected Output:
	Deque front: 2147483647 and Deque back: 2147483647
	Deque items forward:
	Deque items backward:
	----------------------------------------------------
	*/

    return 0;
}
