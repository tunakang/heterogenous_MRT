#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <cassert>

#include <algorithm>
#include <random>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <vector>
#include <unordered_map>
#include <numeric>
#include <string>

class Coord
{
public:
	int x;
	int y;

	constexpr Coord() : x{ -1 }, y{ -1 } {}
	constexpr Coord(int xx, int yy) : x{ xx }, y{ yy } {}

	friend std::ostream& operator<<(std::ostream& o, const Coord& coord)
	{
		o << "{" << coord.x << ", " << coord.y << "}";
		return o;
	}

};


struct Node /*added by dongwon */
{
	unsigned int G, H;
	Coord coord;
	Node *parent;

	Node(Coord coord_, Node *parent_ = nullptr);
	unsigned int getScore();
};

Node::Node(Coord coordinates_, Node *parent_)	/*added by dongwon */
{
    parent = parent_;
    coord = coordinates_;
    G = H = 0;
}

using NodeSet = std::vector<Node*>;

void calculate_idle_action(Node * node_)
{
	
	node_->G = node_->G + 1;
	node_->H = node_->H + 2;
	printf("node.G = %d, node.H = %d\n", node_->G, node_->H);
}

void displayNode(NodeSet& nodes_){ /*added by dongwon */
	//Node* it;

	//for(auto it=nodes_.front(); it != nodes_.end(); it++){}


} 

int main()
{
	NodeSet openSet;
	Node* tempNode;

	openSet.reserve(100);

	tempNode = new Node({6,6});
	openSet.push_back(tempNode);
	tempNode = new Node({7,7});
	openSet.push_back(tempNode);
	tempNode = new Node({8,8});
	openSet.push_back(tempNode);

	
	for(auto it = openSet.begin(); it != openSet.end(); it++)
	{
		
	}
	


	

	Node node_1({5,5});
	calculate_idle_action(&node_1);
	calculate_idle_action(&node_1);
	


}