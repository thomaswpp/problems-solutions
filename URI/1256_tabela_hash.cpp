#include <stdio.h>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

//implemetation hash for tranning
struct NODE
{
	int key;
	NODE *next;

};

typedef struct NODE NODE;

typedef struct
{
	int m, count;
	NODE* node;

} hash_t;

int hashfuction(int key, int m)
{
	return key % m;
}

hash_t* create_hash(int m)
{
	hash_t* ht = ( hash_t* ) malloc( m*sizeof( hash_t ) );
	
	for(int i=0; i < m; i++)
	{
		ht[i].node = NULL;
		ht[i].count = 0;
		ht[i].m = m;
	}

	return ht;
}

NODE* create_node(int key, int m)
{
	NODE* newnode = (NODE*) malloc( sizeof( NODE ) );

	if(newnode == NULL)
		return NULL;

	newnode->key = key;
	newnode->next = NULL;

	return newnode;
}


bool search_hash( hash_t* ht, int key, int m)
{
	if(ht == NULL) return false;

	int i = hashfuction(key, m);
	NODE* aux = ht[i].node;

	while(aux != NULL && aux->key != key )
		aux = aux->next;

	if(aux == NULL) return false;

	return true;
}

bool insert_hash( hash_t* ht, int key, int m)
{
	NODE* newnode = create_node(key, m);

	if(ht == NULL || newnode == NULL) return false;
	
	int i = hashfuction(key, m);

	if(ht[i].node == NULL)
	{
		ht[i].m = m;
		ht[i].count = 1;
		ht[i].node = newnode;
	} 
	else 
	{
		NODE* aux = ht[i].node;
		NODE* prev = aux;
		while(aux != NULL)
		{
			prev = aux;
			aux = aux->next;
		}

		prev->next = newnode;
		ht[i].count++;

	}

	return true;
}

//tranning kkk
bool remove_hash( hash_t* ht, int key, int m)
{
	if(ht == NULL) return false;

	int i = hashfuction(key, m);

	NODE* aux = ht[i].node;
	NODE* prev = aux;

	while( aux->key != key)
	{
		prev = aux;
		aux = aux->next;
	}

	if(aux == ht[i].node) 
		ht[i].node = aux->next;
	else
		prev->next = aux->next;
	
	free(aux);
	ht[i].count--;

	return true;
}

void print_hash(hash_t *ht, int m)
{
	if(ht == NULL) return;

	NODE* aux;
	int n;

	for(int i=0; i < m; i++)
	{
		cout << i;
		aux = ht[i].node;
		n = ht[i].count;
		for(int k = 0; k < n; k++)
		{
			cout << " -> " << aux->key;
			aux = aux->next;
		}

		cout << " -> \\" << endl;
		
	}

}


int main (int argc, char *argv[]) {

	int n, m, c, key;
	hash_t* ht;	

	cin >> n;
	while(n--)
	{
		cin >> m >> c;

		ht = create_hash(m);

		for(int i=0; i < c; i++)
		{
			cin >> key;
			insert_hash(ht, key, m);
		}

		print_hash(ht, m);
		if(n > 0)
			cout << endl;

	}


	return 0;

}