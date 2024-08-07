/*
 *  Binary Search Tree implementation 
 *
 *  Simple integer keys and basic operations BST
 *
 *  * Inorder, Preorder, Postorder printouts
 *  * Stubbed in level order printout
 *
 */

#include <iostream>
#include <cstring>  // strcmp
#include <stdlib.h> // srand, rand
#include <time.h>   // time
#include <math.h>   // pow (for exponents)

#include "BST.h"	//BST implementation

using namespace std;

/*
 * run big test
 */
/*
void run_big_test() {
    cout << " [t] Beginning BIG tree test! " << endl;
    srand ((unsigned int) time(NULL));  // Initialize random seed
    BST<int> bst = BST<int>();
    int tree_size = pow(2.0, 20.0);
    cout << endl << "  [t] Testing tree of size (2^20): " << tree_size << endl;
    cout << "Node # / Of #'s (\% done) : Value Inserted " << endl;
    for( int i = 1; i < tree_size + 1; i++ ) {
        int val = rand() % tree_size + 1;
        cout << "\r" << i << " / " << tree_size << " (" << 100.0*i / tree_size << "%)"  << "  :  " << val;
        bst.add(val);
    }

    cout << endl << endl;
    cout << "Nodes count (" << tree_size << "): " << bst.nodesCount();
    if( bst.nodesCount() == tree_size )
        cout << "\t[PASS]";
    else
        cout << "\t[FAIL]";
    cout << endl;
    cout << "Height: " << bst.height() << endl;
    cout << "Max path:  ";
    bst.printMaxPath();
    cout << endl << endl;

    cout << " [t] BIG tree test done!" << endl;
    return;
}
*/


/*
 * Main function 
 */
int main( int argc, char* argv[] ) {
	bool is_test_mode = false;
	bool is_BIG_test_mode = false;
	for( int i = 0; i < argc; i++ ) {
		if( !strcmp(argv[i], "--test" ) ) {
			cout << " [t] Enabling test mode. " << endl;
			is_test_mode = true;
		} else if ( !strcmp(argv[i], "--bigtest" ) ) {
			cout << " [t] Enabling BIG test mode. " << endl;
			is_BIG_test_mode = true;
        }
	}

	if( is_test_mode || is_BIG_test_mode ) {
		//run_tests();
        if( is_BIG_test_mode )
            {;}
 //           run_big_test();
	}else{
		cout << " [x] Running main program - nothing to do!" << endl;
	}

    return 0;
}
