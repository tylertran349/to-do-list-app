#include <iostream>
#include <queue>
using namespace std;

void printToDoList(queue<string> list) {
	if(list.empty()) {
		cout << "You've finished all your tasks!" << endl << endl;
		return;
	}
	cout << "Your current to-do list (in order):" << endl;
	while(!list.empty()) {
		cout << list.front() << endl;
		list.pop();
	}
	cout << endl;
}

int main() {
	string option, task;
	queue<string> toDoList;
	while(option != "add task" || option != "remove first task" || option != "print to-do list") {
		cout << "Would you like to add a task, remove the first task, or print out your current to-do list in order (enter \"add task\" or \"remove first task\" or \"print to-do list\")? ";
		getline(cin, option);
		for(int i = 0; i < option.length(); i++) {
			option[i] = tolower(option[i]);
		}
		cout << endl;
		if(option == "add task") {
			cout << "Write the task you would like to add: ";
			getline(cin, task);
			toDoList.push(task);
			cout << endl;
		} else if(option == "remove first task") {
			cout << toDoList.front() << " has been removed from your to-do list!" << endl;
			toDoList.pop();
		} else if(option == "print to-do list") {
			printToDoList(toDoList);
		} else {
			cout << "Invalid option! Please enter \"add task\" or \"remove first task\" or \"print to-do list\" to proceed." << endl << endl;
		}
	}
}
