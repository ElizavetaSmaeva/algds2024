#include <gtest/gtest.h>
#include <stdio.h>
#include "laba2_test_func.h"


TEST (LABA2, KEY) {
    Node *root = NULL;
    int a=0;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    a=root->key;
    ASSERT_EQ(a, 50);	
}
TEST (LABA2, left) {
    Node *root = NULL;
    int a=0;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    Node *rootleft = NULL;
    rootleft =root->left;
    a=rootleft->key;
    ASSERT_EQ(a, 30);	
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}