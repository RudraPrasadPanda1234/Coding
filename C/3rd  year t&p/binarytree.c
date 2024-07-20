// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// int height(struct Node* root) {
//     if (root == NULL) {
//         return 0;
//     } else {
//         int l = 1 + height(root->left);
//         int r = 1 + height(root->right);
//         return (l > r) ? l : r;
//     }
// }

// void levelhelper(struct Node* root, int level) {
//     if (root == NULL) {
//         return;
//     }
//     if (level == 1) {
//         printf("%d ", root->data);
//     } else if (level > 1) {
//         levelhelper(root->left, level - 1);
//         levelhelper(root->right, level - 1);
//     }
// }

// void levelprint(struct Node* root) {
//     int h = height(root);
//     for (int i = 1; i <= h; i++) {
//         for (int j = i; j <= h; j++) {
//             printf(" ");
//         }
//         levelhelper(root, i);
//         printf("\n");
//     }
// }

// struct Node* insert(struct Node* root, int data) {
//     if (root == NULL) {
//         struct Node* newnode = malloc(sizeof(struct Node));
//         newnode->data = data;
//         newnode->left = NULL;
//         newnode->right = NULL;
//         return newnode;
//     } else if (data < root->data) {
//         root->left = insert(root->left, data);
//     } else if (data > root->data) {
//         root->right = insert(root->right, data);
//     }
//     return root;
// }

// int main() {
//     struct Node* root = NULL;
//     root = insert(root, 5);
//     root = insert(root, 3);
//     root = insert(root, 4);
//     root = insert(root, 7);
//     root = insert(root, 6);
//     root = insert(root, 8);
//     root = insert(root, 2);
//     levelprint(root);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int height(struct Node* root) {
    if (root == NULL) {
        return 0;
    } else {
        int l = 1 + height(root->left);
        int r = 1 + height(root->right);
        return (l > r) ? l : r;
    }
}

void levelhelper(struct Node* root, int level) {
    if (root == NULL) {
        return;
    }
    if (level == 1) {
        printf("%d ", root->data);
    } else if (level > 1) {
        levelhelper(root->left, level - 1);
        levelhelper(root->right, level - 1);
    }
}

void levelprint(struct Node* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++) {
        for (int j = i; j <= h; j++) {
            printf(" ");
        }
        levelhelper(root, i);
        printf("\n");
    }
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        struct Node* newnode = malloc(sizeof(struct Node));
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    } else if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}
int main(){
    struct Node* root=NULL;
    root=insert(root,5);
    root=insert(root)
    
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 6);
    root = insert(root, 8);
    root = insert(root, 2);
    levelprint(root);
    return 0;
}