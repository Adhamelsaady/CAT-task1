#include <iostream>
#include <assert.h>
using namespace std;
class Vector{
private:
		int *arr = nullptr;
		int size = { 0 };
		int capicity = {	  };
		void extend(){
				capicity *=2;
				int *arr2 = new int[capicity] { };
				for (int i = 0; i < size; i++){
						arr2[i] = arr[i];
				}
				swap(arr, arr2);
				delete []arr2;
		}
public:
		Vector(int size) : size(size){
				if(size < 0)
						size = 1;
				capicity = size;
				arr = new int[capicity] { };
		}
		~Vector(){
				delete[] arr;
				arr = nullptr;
		}
		void print (){
				for(int i = 0; i < size; i++)
						cout << arr[i] << " ";
				cout << '\n';
		}
		int find(int val){
				for(int i = 0 ; i < size; i++)
						if(arr[i] == val) return i;
				return -1;
		}
		int get(int idx){
				assert(idx >= 0 && idx < size);
				return arr[idx];
		}
		void set(int idx , int val){
				assert(idx >= 0 && idx < size);
				arr[idx] = val;
		}
		int get_front(){
				return arr[0];
		}
		int get_back(){
				return arr[size-1];
		}
		void push_back(int val){
				if(size == capicity)
						extend();
				arr[size++] = val;
		}
		// Homework starts from here
		void right_rotate(){ // HW_1
				int val = arr[size-1];
				for(int i = size - 1 ; i > 0 ; i--){
						arr[i] = arr[i - 1];
				}
				arr[0] = val;
		}
		void left_rotate(){ // HW2
				int val = arr[0];
				for(int i = 0 ; i < size  - 1; i++){
						arr[i] = arr[i + 1];
				}
				arr[size - 1] = val;
		}
		void right_rotate_with_steps(int steps){ // HW3
				int times = steps % size;
				while(times--){
						right_rotate();
				}
		}
		int pop(int idx){ // HW4
				assert(idx >= 0 && idx < size);
				int ret = arr[idx];
				for(int i = idx; i < size; i++){
						arr[i] = arr[i + 1];
				}
				size--;
				return ret;
		}
		int imporoved_search(int val) { //HW5
				for (int i = 0; i < size; i++) {
						if (arr[i] == val) {
								if (!i)
										return 0;
								swap(arr[i], arr[i - 1]);
								return i - 1;
						}
				}
				return -1;
		}
};
int main() {

}
