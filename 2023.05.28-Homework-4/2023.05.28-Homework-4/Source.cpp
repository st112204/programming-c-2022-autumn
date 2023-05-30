#include "BTree.h"

int main(int argc, char* argv[])
{
	BTree tree;
	tree.Add(2);
	tree.Add(4);
	tree.Add(3);
	tree.Add(1);
	tree.Add(5);
	tree.Add(6);
	tree.Add(7);
	tree.Add(9);
	tree.Add(8);
	tree.Add(10);
	tree.Add(7);
	tree.Add(12);
	tree.Add(11);
	tree.Add(13);
	tree.Add(15);

	std::cout << tree << std::endl;

	tree.Remove(12);

	std::cout << tree << std::endl;

	tree.Remove(8);

	std::cout << tree << std::endl;

	tree.Remove(1);

	std::cout << tree << std::endl;
	tree.Remove(14);
	tree.Add(16);
	tree.Add(1);
	std::cout << tree << std::endl;

	return EXIT_SUCCESS;
}