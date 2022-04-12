#include <stdio.h>
#include <stdlib.h>

struct KTP{
    char nama[50];
    int usia;
};

int top=-1;
struct KTP stack[3];

struct KTP peek(){
    struct KTP temp;
    temp=stack[top];
    return temp;
}

struct KTP push(struct KTP data){
    if(top<3){
        top=top+1;
        stack[top]=data;
    }else{
        printf("Stack Sudah Penuh");
    }
};

struct KTP pop(){
    struct KTP data;

    if(top>-1){
        data=stack[top];
        top=top-1;
        return data;
    }else{
        printf("\nStack Sudah Kosong");
    }
};

int main()
{
    struct KTP input[3];
    struct KTP temp;
    int jumlahdata=0;
    for(int i=0;i<3;i++){
        printf("Nama : ");
        scanf(" %[^\n]",&input[i].nama);getchar();
        printf("Usia : ");
        scanf("%d",&input[i].usia);
        push(input[i]);
        jumlahdata++;
    }

    temp=peek();
    printf("\nNama : %s",temp.nama);
    printf("\nUsia : %d",temp.usia);
    printf("\n");

    for(int i=0;i<=3;i++){
        temp=pop();

        if(jumlahdata!=0){
            printf("\nNama : %s",temp.nama);
            printf("\nUsia : %d",temp.usia);
        }
        jumlahdata--;
    }
    return 0;
}
