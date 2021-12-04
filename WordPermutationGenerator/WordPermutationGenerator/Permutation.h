#pragma once
#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	Node() {}
	string GetData() { return Data; }
	Node* GetNext() { return next; }
	void SetData(string Data) { this->Data = Data; }
	void SetNode(Node* next) { this->next = next; }
private:
	string Data;
	Node* next;
};
class List
{
public:

	Node* CurrentLocation;
	List() { CurrentLocation = NULL; }
	void compare() {
		Node* i = CurrentLocation;
		Node* j = CurrentLocation;
		Node* previous = new Node();
		int found;
		while (i != NULL)
		{
			found = 0;
			j = CurrentLocation;
			while (j != NULL)
			{
				if (i->GetData() == j->GetData() && j->GetNext() != NULL) {
					found++;
					if (found > 1)
					{
						previous->SetNode(j->GetNext());


					}
				}
				else if (i->GetData() == j->GetData() && j->GetNext() == NULL)
				{
					previous->SetNode(NULL);
				}
				previous = j;
				j = j->GetNext();
			}
			i = i->GetNext();
		}
	}
	void Insert(string data) {
		Node* newNode = new Node();			 //   ---- ------
		newNode->SetData(data);				 //  | 10 | NULL |
		newNode->SetNode(NULL);				 //   ---- ------
		Node* tempNode = CurrentLocation;	 //	 | 10 | NULL |
		if (tempNode != NULL)				 //   ---- ------
		{
			while (tempNode->GetNext() != NULL)
			{
				tempNode = tempNode->GetNext();
			}
			tempNode->SetNode(newNode);
		}
		else
		{
			CurrentLocation = newNode;
		}
	}

	int CountList() {
		Node* tempNode = CurrentLocation;
		int count = 0;
		while (tempNode != NULL)
		{
			count++;
			tempNode = tempNode->GetNext();
		}
		return count;
	}
};


List wordlist;
int Factorial(int num) {
	if (num > 1)
		return num * Factorial(num - 1);
	else
		return 1;
}
string swap(string a) {
	return a = a.substr(1) + a[0];
}
void permute(string word, string output = "")
{
	if (word.size() == 0)
	{
		wordlist.Insert(output);
		return;
	}
	for (int i = 0; i < word.size(); i++)
	{
		permute(word.substr(1), output + word[0]);
		word = swap(word);
	}
}

bool SyncPerm(string str) {
	permute(str, "");
	return true;
}
