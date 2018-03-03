/*
 * ThreadQueue.h
 *
 *  Created on: Mar 3, 2018
 *      Author: garrison
 */

#ifndef THREADQUEUE_H_
#define THREADQUEUE_H_

#include <list>;
#include <pthread.h>;

using namespace std;

template<typename T>
class ThreadQueue {
public:
	ThreadQueue();
	virtual ~ThreadQueue();
	void enqueue(T);
	T dequeue();
	int size();
private:
	list<T> queue;
	pthread_mutex_t mutex;
	pthread_cond_t cond;
};

#endif /* THREADQUEUE_H_ */
