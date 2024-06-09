#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

    
struct tree{
    char nama[20];
    int umur;
    char kelamin[10];
    struct pekerjaan *karyawan;
    struct tree *left, *right;
};

struct tree *createnode(){
    struct tree *nodebaru;
    nodebaru = (struct tree*)malloc(sizeof(struct tree));
    nodebaru->karyawan = (struct pekerjaan*)malloc(sizeof(struct pekerjaan));
    nodebaru->left = NULL;
    nodebaru->right = NULL;
    
    return nodebaru;
}

struct tree *insertnode(char nama[], int umur,, struct tree *node){
    if(node == NULL){
        node->
    }
}

void insertnode(struct tree *node, char nama[], int umur, char posisi[], char tugas[]){

}

bool searchnode(struct tree *node, char cari[]){
    if(node->biodata->nama != cari){
        return false;
    }
    if(searchnode(node->left, cari) || searchnode(node->right, cari)){
        printf("%s -> ", node->biodata->nama);
        return true;
    }
}

int main(){
    struct tree *node = createnode();
    
    return 0;
}