#include <iostream>
#include <limits>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <unordered_map>
#include <iterator>
#include "phylotree.hpp"
#include "phylotree.cpp"

//Map 2. Map for down profiles of type <Node*, set<std::string>>
std::unordered_map<Node*, std::set<std::string>> down;
//Map 3. Map for boolean skip of type <Node*, bool>
std::unordered_map<Node*, std::set<std::string>> up;

std::unordered_map<Node*, bool> skip;

void build_up_profiles(Tree &t) {
	//Function for up profiles
	//Preorder traversal of tree

		//write code here...
	Node* n = t.get_root();
	Node* root;
	Traverse::PreOrder pre = Traverse::PreOrder(n);

	//Start by finding the root of the tree
	//Do so with simple preorder traversal 
	//and if statements.
	for (; pre != pre.end(); ++pre) {
		if (pre.operator*()->is_root()) {
			root = pre.operator*();
			skip[pre.operator*()] = true;
		}
		else if(pre.operator*()->is_leaf()) {
			skip[pre.operator*()] = true;	
		}
		else {
			skip[pre.operator*()] = false;
		}
	}

	std::list<Node*>* children = root->get_children();
	for (auto it = children->begin(); it != children->end(); ++it) {
		up[it.operator*()] = {};
		skip[pre.operator*()] = true;
		for (auto sibling_it = children->begin(); sibling_it != children->end(); ++sibling_it) {
			if (it.operator*() != sibling_it.operator*()) {
				/*
				std::set_union(it.operator*()->up.begin(), it.operator*()->up.end(),sibling_it.operator*()->down.begin(),
				 sibling_it.operator*()->down.end(), std::back_inserter(it.operator*()->up));
				//Would this be better?
				up[it.operator*()].insert(up[it.operator*()].begin(), up[it.operator*()].end());
				up[it.operator*()].insert(down[sibling_it.operator*()].begin(), down[sibling_it.operator*()].end());
                */
			}
		}
	}

	//Calculate the children profiles first then
	//do the rest, just like the examples.

	for (; pre != pre.end(); ++pre) {
		std::string label = pre.operator*()->get_label();
		if (!skip[pre.operator*()] == true) { // node.skip
			Node* parent = pre.operator*()->get_parent();
			//pre.operator* up profile = parent up profile
			std::list<Node*>* children = parent->get_children();
			for (auto it = children->begin(); it != children->end(); ++it) {
				if (pre.operator*() != it.operator*()) {
					//up profile of node is equal to node up U sibl down profile;
				 /*std::set_union(pre.operator*()->up.begin(), pre.operator*()->up.end(),it.operator*()->down.begin(),
				 it.operator*()->down.end(), std::back_inserter(pre.operator*()->up));
				up[it.operator*()].insert(up[pre.operator*()].begin(),up[pre.operator*()].end());
				up[it.operator*()].insert(down[it.operator*()].begin(), down[it.operator*()].end());
                */

				}
			}
		}
	}
}
void print(std::set<std::string> &s)
{
    for (auto const &i: s) {
        std::cout << i << " ";
    }
    std::cout<<"\n------\n";
}
int main() {
    std::string W = "           ";
    std::string L = "((((A,B),C),((A,B),C)),D,E);";
	Tree tree = Tree(L);
    Node* n = tree.get_root();
	build_up_profiles(tree);
    Traverse::PostOrder pre = Traverse::PostOrder(n);
    for(; pre != pre.end(); ++pre){
        print(down[pre.operator*()]);
    }

    
	return 0;
}
