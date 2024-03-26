//
//  main.cpp
//  E04
//
//  Created by 홍준우 on 2/18/24.
//

#include <iostream>

using namespace std;

namespace forLoop {
// The counter variable can be declared in the init-expression.
void DeclaredInside() {
    for (int i = 0; i < 2; i++)
        cout << i << ' ';
    // Output: 0 1
}

// The counter variable can be declared outside the for loop.
void DeclaredOutside() {
    int i;
    for (i = 0; i < 2; i++)
        cout << i << ' ';
    // Output: 0 1
}

// These for loops are the equivalent of a while loop.
void WhileLoop() {
    int i = 0;
    while (i < 2)
        cout << i++ << ' ';
    // Output: 0 1
}

// init-expression and loop-expression can contain multiple statements separated by commas.
void MultipleStatements() {
    int i, j;
    for (i = 5, j = 10; i + j < 20; i++, j++)
        cout << "i + j = " << (i + j) << ' ';
    // Output: 15 17 19
}

// loop-expression can be incremented or decremented, or modified in other ways.
void ModifiedLoop1() {
    for (int i = 10; i > 0; i--)
        cout << i << ' ';
    // Output: 10 9 8 7 6 5 4 3 2 1
}

void ModifiedLoop2() {
    for (int i = 10; i < 20; i = i + 2) {
        cout << i << ' ';
    }
    // Output: 10 12 14 16 18
}

void Break() {
    for (int i = 1; i < 10; i++) {
        if (i == 4)
            // the break statement causes the program to execute the next statement outside the for statement.
            break;
        cout << i << " ";
    }
    // Output: 1 2 3
    
    cout << endl;
    
    int nums[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i : nums) {
        if (i == 4)
            break;
        cout << i << " ";
    }
    // Output: 1 2 3
}

void Continue() {
    int i = 0;
    do {
        i++;
        printf("Before the continue\n");
        // In a do or while loop, the next iteration starts by reevaluating the controlling expression of the do or while statement.
        continue;
        // printf("After the continue, should NEVER print!\n");
    } while (i < 3);
    printf("After the do loop\n");
}
}

int main() {
    forLoop::DeclaredInside();
    cout << endl;
    forLoop::DeclaredOutside();
    cout << endl;
    forLoop::WhileLoop();
    cout << endl;
    forLoop::MultipleStatements();
    cout << endl;
    forLoop::ModifiedLoop1();
    cout << endl;
    forLoop::ModifiedLoop2();
    cout << endl;
    forLoop::Break();
    cout << endl;
    forLoop::Continue();
    cout << endl;
    return 0;
}
