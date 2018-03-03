/*
 * ThreadQueue.cpp
 *
 *  Created on: Mar 3, 2018
 *      Author: garrison
 */

#include "ThreadQueue.h";

template<typename T>
ThreadQueue<T>::ThreadQueue() {
	pthread_mutex_init(&mutex, NULL);
	pthread_cond_init(&cond, NULL);
}

template<typename T>
ThreadQueue<T>::~ThreadQueue() {
	pthread_mutex_destroy(&mutex);
	pthread_cond_destroy(&cond);
}

template<typename T>
void ThreadQueue<T>::enqueue(T element) {
	pthread_mutex_lock(&mutex);
	queue.push_back(element);
	pthread_cond_signal(&cond);
	pthread_mutex_unlock(&mutex);
}

template<typename T>
T ThreadQueue<T>::dequeue() {
	pthread_mutex_lock(&mutex);
	while (queue.size() == 0) {
		pthread_cond_wait(&cond, &mutex);
	}
	T item = queue.front();
	queue.pop_front();
	pthread_mutex_unlock(&mutex);
}
