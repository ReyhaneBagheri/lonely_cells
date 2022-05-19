#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
//:)
FILE*naghshe;
FILE*shomarekhane;
FILE*energykhaneha;
FILE*energycellha;
FILE*matrix1;
FILE*matrixx1;
FILE*structha;
FILE*structha2;
FILE*naghsher;
FILE*shomarekhaner;
FILE*energykhanehar;
FILE*energycellhar;
FILE*matrix1r;
FILE*matrixx1r;
FILE*structhar;
FILE*structha2r;





FILE*naghshe111;
FILE*shomarekhane111;
FILE*energykhaneha111;
FILE*energycellha111;
FILE*matrix1111;
FILE*matrixx1111;
FILE*structha111;
FILE*structha2111;




FILE*naghshe222;
FILE*shomarekhane222;
FILE*energykhaneha222;
FILE*energycellha222;
FILE*matrix1222;
FILE*matrixx1222;
FILE*structha222;
FILE*structha2222;

int m;
int indexx=1;
unsigned int n;
int nob1;
int nob2;
int choice3;
int choicee3;
int k;
int t;
char shomare[10000][10000];
int energikhane[10000][10000];
int energicells[10000][10000];
int matrix[10000][10000];
char matrixx[10000][10000];
//i=4*n+3   j=5*n+1
char map[10000][10000];
struct Node *head = NULL;
struct Node *headd = NULL;




char *rand_string(size_t size);
void show ();
struct Node * newNode(int x , int y ,char c , int energi);
void pushBack(struct Node ** head , int x , int y ,char c , int energi);
int deleteNode (struct Node ** head, int x1 , int y1);
void print();
void harkat(int x , int y );
void init();
void delet(int x, int y);
void halatkhone();
void avalie();
void sanavie();
void show2 ();
void show3 ();
int checkup(int x1, int y1);
void harkatbala(struct Node*head1 , int x1, int y1);
void printNodes(struct Node * head);
int checkdown(int x1, int y1);
void harkatpaiin(struct Node*head1 , int x1, int y1);
int checkshomalsharqi1(int x1, int y1);
void harkatshomalsharqi1(struct Node*head1 , int x1, int y1);
int checkshomalsharqi2(int x1, int y1);
void harkatshomalsharqi2(struct Node*head1 , int x1, int y1);
int checkshomalqarbi1(int x1, int y1);
void harkatshomalqarbi1(struct Node*head1 , int x1, int y1);
int checkshomalqarbi2(int x1, int y1);
void harkatshomalqarbi2(struct Node*head1 , int x1, int y1);
int checkgonobsharqi1(int x1, int y1);
void harkatgonobsharqi1(struct Node*head1 , int x1, int y1);
int checkgonobsharqi2(int x1, int y1);
void harkatgonobsharqi2(struct Node*head1 , int x1, int y1);
int checkgonobqarbi1(int x1, int y1);
void harkatgonobqarbi1(struct Node*head1 , int x1, int y1);
int checkgonobqarbi2(int x1, int y1);
void harkatgonobqarbi2(struct Node*head1 , int x1, int y1);
int checkenergikhane(int x1 , int y1, char c1);
void afzaeshenergi(int x1 ,int y1 , char c1);
void taghirvaziatkhaneha(int x1 , int y1);
void taghirenergynodha(struct Node*head1 , int x1 , int y1 , int energicells);
int checkmitosis(int x1 ,int  y1);
void harkatcellezafi(int x1 , int y1 , char c1);
int kolenergy(struct Node*head);
int tedadcells(struct Node*head);

//int   taiinx1(struct Node*head , int index);
//int   taiiny1(struct Node*head , int index);







struct Node {
    //int index;
    int x;
    int y;
    char name;
    int energi;
    struct Node *next;
};



//int   taiinx1(struct Node*head , int index) {
//   //int x1;
//    if (head == NULL) {
//        return 0;
//
//    }
//
//    if ((head)->index == index) {
//
//        //(*head)->energi++;
//        //printf("salaaam1\n");
//        printf("%d\n",(head)->x);
//
//        return (head)->x;
//    }
//    //struct Node *current = *head;
//    while (head != NULL) {
//
//
//        if (head->index == index) {
//
//            // printf("%d\n",x1);
//            //printf("salaaam2\n");
//            //printf("%d\n",(head)->x);
//            return head->x;
//
//
//            //break;
//
//        }
//        head = head->next;
//
//
//    }
//}
//
//
//
//int  taiiny1(struct Node*head , int index) {
//    //int y1;
//    if (head == NULL) {
//        return 0;
//
//    }
//
//    if ((head)->index == index) {
//
//        //(*head)->energi++;
//
//        //printf("%d\n",x1);
//        return  (head)->y;
//
//
//    }
//
//    while (head != NULL) {
//
//
//        if (head->index == index) {
//
//
//            // printf("%d\n",x1);
//
//            return head->y;
//
//            //break;
//
//        }
//        head = head->next;
//
//
//    }
//}
//




int kolenergy(struct Node*head){
    k=0;
    if(head==NULL){
        return 0;
    }
    //struct Node*current=head;
    while(head!=NULL){
        k+=head->energi;
        head=head->next;

    }
    return k;




}



int tedadcells(struct Node*head){

    if(head==NULL){
        return ;
    }
    while(head!=NULL){
        t++;
        head=head->next;

    }
    return t;



}









int checkenergikhane(int x1 , int y1, char c1){

    if(shomare[x1][y1]!='1' ){
        return -1;
    }
    else {
        return  1;
    }



}

void afzaeshenergi(int x1 ,int y1 , char c1){
    int energycells=energicells[x1][y1];
    int energykhane=energikhane[x1][y1];
    if(energycells<=85){

        if(energykhane>=15){
            energicells[x1][y1]+=15;
            energikhane[x1][y1]-=15;

        }
        else if (energykhane<=15){
            //kol energi khane ra migirad
            energicells[x1][y1]+=energikhane[x1][y1];
            energikhane[x1][y1]=0;

        }



    } else if (energycells>85){
        //kambod energy cell
        int index=100-energicells[x1][y1];

        if(index<=energykhane){

            energicells[x1][y1]+=index;
            energikhane[x1][y1]-=index;

        } else if (index > energykhane){

            energicells[x1][y1]+=energikhane[x1][y1];
            energikhane[x1][y1]=0;

        }


    }




}





void taghirvaziatkhaneha(int x1 , int y1){
    //khane digar energi nadarad
    if(energikhane[x1][y1]==0){
        shomare[x1][y1]='4';

    }
}








void taghirenergynodha(struct Node * head1 , int x1, int y1 , int energicells){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){

        (head1)->energi=energicells;

        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){


        if(head1->x==x1 && head1->y==y1){

            head1->energi=energicells;
            break;

        }
        head1=head1->next;

    }

}


//tabe hay mitosis
int checkmitosis(int x1 , int y1){

    if(shomare[x1][y1]=='2'&& energicells[x1][y1]>=80){
        return 1;

    }

    else if(shomare[x1][y1]!='2'|| energicells[x1][y1]<80){
        return -1;

    }


    //return 0;
}



void harkatcellezafi(int x1 ,int  y1 , char c1){

    int kot=y1%2;
    int bala=checkup(x1 , y1);

    if(bala==1){
        //be khane bala miravad
        deleteNode(&head , x1 , y1);
        pushBack(&head , x1 , y1 ,c1,40 );
        pushBack(&head , x1-1 , y1 ,c1,40 );
        energicells[x1-1][y1]=40;
        energicells[x1][y1]=40;
        matrix[x1-1][y1]=1;
        matrixx[x1-1][y1]=c1;
        harkat(x1-1 , y1);
        print();




    }
    else if(bala==-1){

        int paiiin=checkdown(x1 , y1);
        if(paiiin ==1){
            //be khane paiin miravad
            deleteNode(&head , x1 , y1);
            pushBack(&head , x1 , y1 ,c1,40 );
            pushBack(&head , x1+1 , y1 ,c1,40 );
            energicells[x1+1][y1]=40;
            energicells[x1][y1]=40;
            matrix[x1+1][y1]=1;
            matrixx[x1+1][y1]=c1;
            harkat(x1+1 , y1);
            print();


        }
        else if(paiiin ==-1){

            if(kot==0){
                int shomalsharqii1=checkshomalsharqi1(x1 , y1);
                if(shomalsharqii1==1){
                    //be khane shomal sharqi miravad
                    deleteNode(&head , x1 , y1);
                    pushBack(&head , x1 , y1 ,c1,40 );
                    pushBack(&head , x1-1 , y1+1 ,c1,40 );
                    energicells[x1-1][y1+1]=40;
                    energicells[x1][y1]=40;
                    matrix[x1-1][y1+1]=1;
                    matrixx[x1-1][y1+1]=c1;
                    harkat(x1-1 , y1+1);
                    print();




                }
                else if(shomalsharqii1==-1){
                    int shomalqarbii1=checkshomalqarbi1(x1 , y1);

                    if(shomalqarbii1==1){
                        //be khane shomal qarbi miravad
                        deleteNode(&head , x1 , y1);
                        pushBack(&head , x1 , y1 ,c1,40 );
                        pushBack(&head , x1-1 , y1-1 ,c1,40 );
                        energicells[x1-1][y1-1]=40;
                        energicells[x1][y1]=40;
                        matrix[x1-1][y1-1]=1;
                        matrixx[x1-1][y1-1]=c1;
                        harkat(x1-1 , y1-1);
                        print();

                    }
                    else if(shomalqarbii1==-1){
                        int gonobsharqii1=checkgonobsharqi1(x1 , y1);
                        if(gonobsharqii1==1){
                            //be khane gonobsharqi miravad
                            deleteNode(&head , x1 , y1);
                            pushBack(&head , x1 , y1 ,c1,40 );
                            pushBack(&head , x1 , y1+1 ,c1,40 );
                            energicells[x1][y1+1]=40;
                            energicells[x1][y1]=40;
                            matrix[x1][y1+1]=1;
                            matrixx[x1][y1+1]=c1;
                            harkat(x1 , y1+1);
                            print();

                        }
                        else if(gonobsharqii1==-1){
                            int gonobqarbii1=checkgonobqarbi1(x1 , y1);
                            if(gonobqarbii1==1){
                                //be khane gonob qarbi miravad
                                deleteNode(&head , x1 , y1);
                                pushBack(&head , x1 , y1 ,c1,40 );
                                pushBack(&head , x1 , y1-1 ,c1,40 );
                                energicells[x1][y1-1]=40;
                                energicells[x1][y1]=40;
                                matrix[x1][y1-1]=1;
                                matrixx[x1][y1-1]=c1;
                                harkat(x1 , y1-1);
                                print();

                            }
                            else if(gonobqarbii1==-1){
                                printf("nemitavanad mitosis konad:(\n");

                            }


                        }
                    }



                }

            }
            else if(kot!=0){
                int shomalsharqiii2=checkshomalsharqi2(x1 , y1);
                if(shomalsharqiii2==1){
                    //be khane shomal sharqi miravad
                    deleteNode(&head , x1 , y1);
                    pushBack(&head , x1 , y1 ,c1,40 );
                    pushBack(&head , x1 , y1+1 ,c1,40 );
                    energicells[x1][y1+1]=40;
                    energicells[x1][y1]=40;
                    matrix[x1][y1+1]=1;
                    matrixx[x1][y1+1]=c1;
                    harkat(x1 , y1+1);
                    print();

                }
                else if(shomalsharqiii2==-1){

                    int shomalqarbiii2=checkshomalqarbi2(x1 , y1);
                    if(shomalqarbiii2==1){
                        //be khane shomal qarbi miravad
                        deleteNode(&head , x1 , y1);
                        pushBack(&head , x1 , y1 ,c1,40 );
                        pushBack(&head , x1 , y1-1 ,c1,40 );
                        energicells[x1][y1-1]=40;
                        energicells[x1][y1]=40;
                        matrix[x1][y1-1]=1;
                        matrixx[x1][y1-1]=c1;
                        harkat(x1 , y1-1);
                        print();

                    }
                    else if(shomalqarbiii2==-1){

                        int gonobsharqiii2=checkgonobsharqi2(x1 , y1);
                        if(gonobsharqiii2==1){
                            //be khane gonob sharqi miravad
                            deleteNode(&head , x1 , y1);
                            pushBack(&head , x1 , y1 ,c1,40 );
                            pushBack(&head , x1+1 , y1+1 ,c1,40 );
                            energicells[x1+1][y1+1]=40;
                            energicells[x1][y1]=40;
                            matrix[x1+1][y1+1]=1;
                            matrixx[x1+1][y1+1]=c1;
                            harkat(x1+1 , y1+1);
                            print();

                        }
                        else if(gonobsharqiii2==-1){
                            int gonobqarbiii2=checkgonobqarbi2(x1 , y1);
                            if(gonobqarbiii2==1){
                                //be khane gonob qarbi miravad
                                deleteNode(&head , x1 , y1);
                                pushBack(&head , x1 , y1 ,c1,40 );
                                pushBack(&head , x1+1 , y1-1 ,c1,40 );
                                energicells[x1+1][y1-1]=40;
                                energicells[x1][y1]=40;
                                matrix[x1+1][y1-1]=1;
                                matrixx[x1+1][y1-1]=c1;
                                harkat(x1+1 , y1-1);
                                print();

                            }
                            else if(gonobqarbiii2==-1){
                                printf("nemitavanad mitosis konad:(\n");
                            }
                        }

                    }

                }

            }



        }


    }






}












void harkatbala(struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){

        (head1)->x=x1-1;

        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){


        if(head1->x==x1 && head1->y==y1){

            head1->x=x1-1;
            break;

        }
        head1=head1->next;

    }

}







int checkup(int x1,int y1){

    if(x1==0 || shomare[x1-1][y1]=='3'|| matrix[x1-1][y1]!=0 ){

        return -1;

    }
    else if(x1!=0 && shomare[x1-1][y1]!='3'&& matrix[x1-1][y1]==0 ) {

        return 1;
    }
}








void harkatpaiin(struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){

        (head1)->x=x1+1;

        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){


        if(head1->x==x1 && head1->y==y1){

            head1->x=x1+1;
            break;

        }
        head1=head1->next;

    }

}







int checkdown(int x1,int y1){

    if(x1==n-1 || shomare[x1+1][y1]=='3'|| matrix[x1+1][y1]!=0 ){

        return -1;

    }
    else if(x1!=n-1 && shomare[x1+1][y1]!='3'&& matrix[x1+1][y1]==0 ) {

        return 1;
    }
}






void harkatshomalsharqi1 (struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){

        (head1)->x=x1-1;
        (head1)->y=y1+1;


        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){


        if(head1->x==x1 && head1->y==y1){

            head1->x=x1-1;
            head1->y=y1+1;

            break;

        }
        head1=head1->next;

    }

}







int checkshomalsharqi1(int x1,int y1){

    if(x1==0 || y1==n-1 || shomare[x1-1][y1+1]=='3'|| matrix[x1-1][y1+1]!=0 ){

        return -1;

    }
    else if(x1!=0 &&y1!=n-1 && shomare[x1-1][y1+1]!='3'&& matrix[x1-1][y1+1]==0 ) {

        return 1;
    }
}






void harkatshomalsharqi2 (struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){

        (head1)->y=y1+1;


        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){


        if(head1->x==x1 && head1->y==y1){

            head1->y=y1+1;

            break;

        }
        head1=head1->next;

    }

}







int checkshomalsharqi2(int x1,int y1){

    if( y1==n-1 || shomare[x1][y1+1]=='3'|| matrix[x1][y1+1]!=0 ){

        return -1;

    }
    else if(y1!=n-1 && shomare[x1][y1+1]!='3'&& matrix[x1][y1+1]==0 ) {

        return 1;
    }
}









void harkatshomalqarbi1 (struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){

        (head1)->x=x1-1;
        (head1)->y=y1-1;


        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){



        if(head1->x==x1 && head1->y==y1){

            head1->x=x1-1;
            head1->y=y1-1;

            break;

        }
        head1=head1->next;

    }

}







int checkshomalqarbi1(int x1,int y1){

    if(x1==0 || y1==0 || shomare[x1-1][y1-1]=='3'|| matrix[x1-1][y1-1]!=0 ){

        return -1;

    }
    else if(x1!=0 &&y1!=0 && shomare[x1-1][y1-1]!='3'&& matrix[x1-1][y1-1]==0 ) {

        return 1;
    }
}




void harkatshomalqarbi2 (struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){

        (head1)->y=y1-1;


        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){



        if(head1->x==x1 && head1->y==y1){


            head1->y=y1-1;

            break;

        }
        head1=head1->next;

    }

}







int checkshomalqarbi2(int x1,int y1){

    if( y1==0 || shomare[x1][y1-1]=='3'|| matrix[x1][y1-1]!=0 ){

        return -1;

    }
    else if(y1!=0 && shomare[x1][y1-1]!='3'&& matrix[x1][y1-1]==0 ) {

        return 1;
    }
}





void harkatgonobsharqi1 (struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){

        (head1)->y=y1+1;


        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){


        if(head1->x==x1 && head1->y==y1){

            head1->y=y1+1;

            break;

        }
        head1=head1->next;

    }

}







int checkgonobsharqi1(int x1,int y1){

    if( y1==n-1 || shomare[x1][y1+1]=='3'|| matrix[x1][y1+1]!=0 ){

        return -1;

    }
    else if(y1!=n-1 && shomare[x1][y1+1]!='3'&& matrix[x1][y1+1]==0 ) {

        return 1;
    }
}


void harkatgonobsharqi2 (struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){
        (head1)->x=x1+1;

        (head1)->y=y1+1;


        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){


        if(head1->x==x1 && head1->y==y1){

            head1->x=x1+1;
            head1->y=y1+1;

            break;

        }
        head1=head1->next;

    }

}







int checkgonobsharqi2(int x1,int y1){

    if( x1==n-1 || y1==n-1 || shomare[x1+1][y1+1]=='3'|| matrix[x1+1][y1+1]!=0 ){

        return -1;

    }
    else if( x1!=n-1 && y1!=n-1 && shomare[x1+1][y1+1]!='3'&& matrix[x1+1][y1+1]==0 ) {

        return 1;
    }
}






void harkatgonobqarbi1 (struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){

        (head1)->y=y1-1;


        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){


        if(head1->x==x1 && head1->y==y1){

            head1->y=y1-1;

            break;

        }
        head1=head1->next;

    }

}







int checkgonobqarbi1(int x1,int y1){

    if(y1==0 || shomare[x1][y1-1]=='3'|| matrix[x1][y1-1]!=0 ){

        return -1;

    }
    else if(y1!=0 && shomare[x1][y1-1]!='3'&& matrix[x1][y1-1]==0 ) {

        return 1;
    }
}





void harkatgonobqarbi2 (struct Node * head1 , int x1, int y1){

    if(head1==NULL){
        return;

    }

    if((head1)->x==x1 && (head1)->y==y1 ){
        (head1)->x=x1+1;

        (head1)->y=y1-1;


        return;

    }
    //struct Node *current=*head1;
    while(head1!=NULL){


        if(head1->x==x1 && head1->y==y1){

            head1->x=x1+1;
            head1->y=y1-1;

            break;

        }
        head1=head1->next;

    }

}







int checkgonobqarbi2(int x1,int y1){

    if(x1==n-1 || y1==0 || shomare[x1+1][y1-1]=='3'|| matrix[x1+1][y1-1]!=0 ){

        return -1;

    }
    else if(x1!=n-1 && y1!=0 && shomare[x1+1][y1-1]!='3'&& matrix[x1+1][y1-1]==0 ) {

        return 1;
    }
}





void avalie(){

    for (int a = 0; a < nob1; a++) {
        //char *str = rand_string(1);
        char c = 'x';
        int x = rand() % (n);
        int y = rand() % (n);
        if (matrix[x][y] != 0 || shomare[x][y] == '3') {
            while (matrix[x][y] != 0 || shomare[x][y] == '3') {
                x = (rand()) % (n);
                y = (rand()) % (n);
            }
        }
        matrix[x][y] = 1;
        matrixx[x][y] = 'x';
        init();
        harkat(x, y);
        halatkhone();
        //print();
        pushBack(&head, x, y, c, 0);

    }
    //print();

}



void sanavie(){

    for (int a = 0; a < nob2; a++) {
        //char *str = rand_string(1);
        char c = 'y';
        int x = rand() % (n);
        int y = rand() % (n);
        if (matrix[x][y] != 0 || shomare[x][y] == '3') {
            while (matrix[x][y] != 0 || shomare[x][y] == '3') {
                x = (rand()) % (n);
                y = (rand()) % (n);
            }
        }
        matrix[x][y] = 1;
        matrixx[x][y] = 'y';
        init();
        harkat(x, y);
        halatkhone();
        //print();
        pushBack(&headd, x, y, c, 0);

    }
    //print();

}







void halatkhone(){

    for(int x=0;x<n;x++){

        for(int y=0;y<n;y++){

            int i=4*x+2;
            int j=5*y+2+1;

            if(y%2!=0){
                i+=2;
            }

            if(shomare[x][y]=='1'){

                map[i][j]='+';

            }
            else if(shomare[x][y]=='2'){

                map[i][j]='&';

            }
            else if(shomare[x][y]=='3'){

                map[i][j]='!';

            }

            else if(shomare[x][y]=='4'){

                map[i][j]='~';

            }





        }
    }



}




void harkat(int x , int y ){
    int i ;
    int j;

    i=4*x+2;
    j=5*y+2;

    if(y%2!=0){
        i+=2;
    }


    map[i][j]=matrixx[x][y];


}

void delet(int x, int y){
    int i ;
    int j;

    i=4*x+2;
    j=5*y+2;

    if(y%2!=0){
        i+=2;
    }


    map[i][j]=' ';





}




void init(){

    for(int i=0;i<4*n+3;i++){

        for(int j=0;j<5*n+1;j++){



            if(i%4==0  && j%10<=5){

                map[i][j]='*';

            }
            else if(i%4==2 && j%10>5){

                map[i][j]='*';

            }
            else if(j==0 && i<4*n){

                map[i][j]='*';

            }

            else if(j%5==0){

                if(n%2==0){

                    map[i][j]='*';

                }
                else if(n%2!=0 && i<4*n){
                    map[i][j]='*';


                }





            }




        }

    }



}





void print(){

    for(int i=0;i<4*n+3;i++){

        for(int j=0;j<5*n+1;j++){

            if(n%2==0 && j==0 && i>4*n){

                map[i][j]=' ';

            }

            else if(n%2==0 && j==5*n && i<2){
                map[i][j]=' ';

            }

            if(n%2!=0 && i>4*n && j!=0 && j!=5*n && j%5==0){

                map[i][j]='*';



            }



            printf("%C",map[i][j]);
        }
        printf("\n");
    }




}
















//char *rand_string(size_t size) {
//    // reserves a place for NULL
//    char *str = malloc((size + 1) * sizeof(char));
//    const char charset[] ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    for (size_t i = 0; i < size; i++) {
//        int key = rand() % (sizeof(charset) / sizeof(char) - 1);
//        str[i] = charset[key];
//    }
//    str[size] = '\0';
//    return str;
//}





void show (){

    printf("[1]Load\n");
    printf("[2]New single player game\n");
    printf("[3]New Multiplayer game\n");
    printf("[4]Exit\n");

}





void show2 (){

    printf("[1] Move\n");
    printf("[2] Split a cell\n");
    printf("[3] Boost energy\n");
    printf("[4] Save\n");
    printf("[5] Exit\n");

}




void show3 (){
    printf("[1] North\n");
    printf("[2] South\n");
    printf("[3] Northeast\n");
    printf("[4] Northwest\n");
    printf("[5] Southeast\n");
    printf("[6] Southwest\n");


}











enum blocks {
    ENERGY = 1,
    MITOSIS,
    FORBIDDEN,
    NORMAL
};








struct Node * newNode(int x , int y ,char c , int energi)
{
    struct Node * new_Node = (struct Node *) malloc(sizeof(struct Node));

    // new_Node->index = indexx;
    new_Node->x = x;
    new_Node->y = y;
    new_Node->name = c;
    new_Node->energi = energi;
    new_Node->next = NULL;
    //indexx++;
    return new_Node;
}




void pushBack(struct Node ** head , int x , int y ,char c , int energi)
{
    if(*head == NULL)
    {
        *head = newNode(x , y , c , energi);
        return;
    }
    struct Node * curr = *head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode(x , y , c , energi);
}





int deleteNode(struct Node ** head, int x1 , int y1)
{
    if(*head==NULL){
        return 0;
    }
    if((*head)->x==x1 && (*head)->y==y1){
        struct Node* temp=*head;
        *head=(*head)->next;
        free(temp);
        return 1;
    }
    struct Node* current=*head;
    struct Node* last = NULL;
    while(current!=NULL)
    {
        if (current->x == x1 && current->y == y1)
        {
            last->next = current->next;
            free(current);
            return 1;
            break;
        }
        last = current;
        current = current->next;
    }
    return 0;
}


void printNodes(struct Node * head)
{
    struct Node * curr = head;
    //long long int index=1;
    while (curr!=NULL)
    {
        //No: 9231058
        //Phone: 09390909540
        //printf("%d)\n",index);

        //printf("index: %d\n",curr->index);
        printf("name: %c ",curr->name);
        printf("i: %d ",curr->x);
        printf("j: %d ",curr->y);
        printf("energy: %d\n",curr->energi);

        curr = curr->next;
        //index++;
    }
    printf("\n");
}







int main() {

    srand(time(NULL));
    FILE *fp;

    fp = fopen("D:\\map.bin", "rb");
    if (fp == NULL) {
        printf("Cannot read from file\n");
        return -1;
    }
    fread(&n, sizeof(int), 1, fp);

    //char shomare[n][n];

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            fread(&shomare[i][j], sizeof(char), 1, fp);
            if (shomare[i][j] == '1') {
                energikhane[i][j] = 100;
                //printf("%d\n",energikhane[i][j]);
            } else if (shomare[i][j] != '1') {
                energikhane[i][j] = -3;
            }

        }


    }

    fclose(fp);

    show();
    int choice;
    scanf("%d", &choice);

    if(choice==1){
        //load kardan




        //structha
        structhar=fopen("D:\\strucktha.bin.bin","rb");
        if(structhar==NULL){
            printf("can not open file\n");
            return -1;
        }
        fread(&(nob1) ,sizeof(int),1,structhar);
        int x11;
        int y11;
        int energy11;
        for(int i=0 ;i<nob1;i++){
            fread(&(x11) ,sizeof(int),1,structhar);
            fread(&(y11) ,sizeof(int),1, structhar);
            fread(&(energy11) ,sizeof(int),1, structhar);
            pushBack(&head , x11 ,y11,'x',energy11);

        }

        fclose(structhar);
        //printNodes(head);










        //naghshe
        naghsher=fopen( "D:\\naghshe.bin.bin","rb");
        if(naghsher==NULL){
            printf("can not open file\n");
            return -1;
        }
        for(int i=0;i<4*n+3;i++){

            for(int j=0;j<5*n+1;j++){


                fread(&map[i][j] , sizeof(char),1,naghsher);

            }

        }


        fclose(naghsher);
        //shomarekhaneha
        shomarekhaner=fopen( "D:\\shomarekhaneha.bin.bin","rb");
        if(shomarekhaner==NULL){
            printf("can not open file\n");
            return -1;
        }
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){


                fread(&shomare[i][j] , sizeof(char),1,shomarekhaner);

            }

        }


        fclose(shomarekhaner);

        //matrixx
        matrixx1r=fopen( "D:\\matrixx.bin.bin","rb");
        if(matrixx1r==NULL){
            printf("can not open file\n");
            return -1;
        }
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){


                fread(&matrixx[i][j] , sizeof(char),1,matrixx1r);

            }

        }


        fclose(matrixx1r);
        //matrix

        matrix1r=fopen( "D:\\matrix.bin.bin","rb");
        if(matrix1r==NULL){
            printf("can not open file\n");
            return -1;
        }
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){


                fread(&matrix[i][j] , sizeof(int),1,matrix1r);

            }

        }


        fclose(matrix1r);
        //energykhane
        energykhanehar=fopen( "D:\\energykhane.bin.bin","rb");
        if(energykhanehar==NULL){
            printf("can not open file\n");
            return -1;
        }
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){


                fread(&energikhane[i][j] , sizeof(int),1,energykhanehar);

            }

        }


        fclose(energykhanehar);
        //energycells
        energycellhar=fopen( "D:\\energycells.bin.bin","rb");
        if(energycellhar==NULL){
            printf("can not open file\n");
            return -1;
        }
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){


                fread(&energicells[i][j] , sizeof(int),1,energycellhar);

            }

        }


        fclose(energycellhar);
        printf("1)bazi 1 nafare bod? ya 2)2 nafare bod?\n");
        scanf("%d",&m);
        if(m==2){


            //structha2
            structha2r=fopen("D:\\structha2.bin.bin","rb");
            if(structha2r==NULL){
                printf("can not open file\n");
                return -1;
            }
            fread(&(nob2) ,sizeof(int),1,structha2r);
            int x22;
            int y22;
            int energy22;
            for(int i=0 ; i<nob2;i++){
                fread(&(x22) ,sizeof(int),1,structha2r);
                fread(&(y22) ,sizeof(int),1, structha2r);
                fread(&(energy22) ,sizeof(int),1, structha2r);
                pushBack(&head , x22 , y22 ,'y',energy22);

            }

            fclose(structha2r);

        }












    }

    if(choice==2 ||  m==1) {

        if (choice == 2) {
            printf("please enter the number of your cells:\n");
            scanf("%d", &nob1);
            avalie();
            print();
            printNodes(head);
        }
        if (choice == 2 || m == 1) {
            while (1) {
                printf("Please choose one of your cells:\n");
                //printNodes(head);
                print();
                char c1 = 'x';
                //printf("%c\n",c1);

                int index1;
                int x1;
                int y1;
                scanf("%d%d", &x1, &y1);
                //x1 = taiinx1(head, index1);
                //y1 = taiiny1(head, index1);
                //printf("%d%d\n", x1, y1);
                //x1=1;
                //y1=2;
                show2();
                int choice2;
                scanf("%d", &choice2);
                //printf("cccxxx");
                //printf("cccxxx2222");
                //agar harkat ra entekhab konad
                if (choice2 == 1) {
                    //printf("cccxxx2222333");
                    show3();
                    //printf("cccxxx22224444");
                    // int choice3;
                    scanf("%d", &choice3);
                    //baray harkat cell
                    //harkat be bala
                    if (choice3 == 1) {
                        //harkat be bala
                        int check1 = checkup(x1, y1);
                        if (check1 == 1) {
                            harkatbala(head, x1, y1);
                            delet(x1, y1);
                            matrix[x1][y1] = 0;
                            matrix[x1 - 1][y1] = 1;
                            matrixx[x1][y1] = ' ';
                            matrixx[x1 - 1][y1] = c1;
                            energicells[x1 - 1][y1] = energicells[x1][y1];
                            energicells[x1][y1] = 0;
                            harkat(x1 - 1, y1);
                            print();
                            //continue;
                        } else if (check1 == -1) {
                            printf("nemitavanad be bala beravad\n");
                            print();
                            //continue;
                        }
                        //harkat be paiin
                    } else if (choice3 == 2) {
                        //be paiin beravad
                        int check2 = checkdown(x1, y1);
                        if (check2 == 1) {
                            harkatpaiin(head, x1, y1);
                            delet(x1, y1);
                            matrix[x1][y1] = 0;
                            matrix[x1 + 1][y1] = 1;
                            matrixx[x1][y1] = ' ';
                            matrixx[x1 + 1][y1] = c1;
                            energicells[x1 + 1][y1] = energicells[x1][y1];
                            energicells[x1][y1] = 0;
                            harkat(x1 + 1, y1);
                            print();
                            //continue;

                        } else if (check2 == -1) {
                            printf("nemitavanad be paiin beravad\n");
                            print();
                            //continue;

                        }


                    } else if (choice3 == 3) {
                        //shomal sharqi
                        int natige1 = y1 % 2;
                        if (natige1 == 0) {
                            int check3 = checkshomalsharqi1(x1, y1);
                            if (check3 == 1) {
                                harkatshomalsharqi1(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1 - 1][y1 + 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1 - 1][y1 + 1] = c1;
                                energicells[x1 - 1][y1 + 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1 - 1, y1 + 1);
                                print();
                                //continue;

                            } else if (check3 == -1) {
                                printf("nemitavanad be shomalsharqi beravad\n");
                                print();
                                //continue;

                            }
                        } else if (natige1 != 0) {
                            int check4 = checkshomalsharqi2(x1, y1);
                            if (check4 == 1) {
                                harkatshomalsharqi2(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1][y1 + 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1][y1 + 1] = c1;
                                energicells[x1][y1 + 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1, y1 + 1);
                                print();
                                //continue;

                            } else if (check4 == -1) {
                                printf("nemitavanad be shomalsharqi beravad\n");
                                print();
                                //continue;

                            }


                        }


                    } else if (choice3 == 4) {
                        //shomalqarbi
                        int natige2 = y1 % 2;
                        if (natige2 == 0) {
                            int check5 = checkshomalqarbi1(x1, y1);
                            if (check5 == 1) {
                                harkatshomalqarbi1(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1 - 1][y1 - 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1 - 1][y1 - 1] = c1;
                                energicells[x1 - 1][y1 - 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1 - 1, y1 - 1);
                                print();
                                //continue;

                            } else if (check5 == -1) {
                                printf("nemitavanad be shomalqarbi beravad\n");
                                print();
                                //continue;

                            }
                        } else if (natige2 != 0) {
                            int check6 = checkshomalqarbi2(x1, y1);
                            if (check6 == 1) {
                                harkatshomalqarbi2(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1][y1 - 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1][y1 - 1] = c1;
                                energicells[x1][y1 - 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1, y1 - 1);
                                print();
                                //continue;

                            } else if (check6 == -1) {
                                printf("nemitavanad be shomalqarbi beravad\n");
                                print();
                                //continue;

                            }
                        }


                    } else if (choice3 == 5) {
                        //gonobsharqi
                        int natige3 = y1 % 2;
                        if (natige3 == 0) {
                            int check7 = checkgonobsharqi1(x1, y1);
                            if (check7 == 1) {
                                harkatgonobsharqi1(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1][y1 + 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1][y1 + 1] = c1;
                                energicells[x1][y1 + 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1, y1 + 1);
                                print();
                                //continue;

                            } else if (check7 == -1) {
                                printf("nemitavanad be gonobsharqi beravad\n");
                                print();
                                //continue;

                            }
                        }
                        if (natige3 != 0) {
                            int check8 = checkgonobsharqi2(x1, y1);
                            if (check8 == 1) {
                                harkatgonobsharqi2(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1 + 1][y1 + 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1 + 1][y1 + 1] = c1;
                                energicells[x1 + 1][y1 + 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1 + 1, y1 + 1);
                                print();
                                //continue;

                            } else if (check8 == -1) {
                                printf("nemitavanad be gonobsharqi beravad\n");
                                print();
                                //continue;

                            }
                        }


                    } else if (choice3 == 6) {
                        //gonobqarbi
                        int natige4 = y1 % 2;
                        if (natige4 == 0) {
                            int check9 = checkgonobqarbi1(x1, y1);
                            if (check9 == 1) {
                                harkatgonobqarbi1(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1][y1 - 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1][y1 - 1] = c1;
                                energicells[x1][y1 - 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1, y1 - 1);
                                print();
                                //continue;

                            } else if (check9 == -1) {
                                printf("nemitavanad be gonobqarbi  beravad\n");
                                print();
                                //continue;

                            }
                        } else if (natige4 != 0) {
                            int check10 = checkgonobqarbi2(x1, y1);
                            if (check10 == 1) {
                                harkatgonobqarbi2(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1 + 1][y1 - 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1 + 1][y1 - 1] = c1;
                                energicells[x1 + 1][y1 - 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1 + 1, y1 - 1);
                                print();
                                //continue;

                            } else if (check10 == -1) {
                                printf("nemitavanad be gonobqarbi  beravad\n");
                                print();
                                // continue;

                            }
                        }


                    }


                } else if (choice2 == 2) {
                    //taghsim cell
                    //tabeii ke energy cell va khane mitosis ra check mikonad
                    int checkm = checkmitosis(x1, y1);

                    if (checkm == -1) {

                        printf("nemitavanad mitosis shavad\n");
                        print();
                    } else if (checkm == 1) {

                        harkatcellezafi(x1, y1, c1);


                    }


                } else if (choice2 == 3) {
                    // energi
                    //tabeii baraye check kardan dar khane energi

                    if (energicells[x1][y1] == 100) {
                        printf("energy cell kamel ast\n");
                        print();

                    } else if (energicells[x1][y1] < 100) {
                        int checkenergy = checkenergikhane(x1, y1, c1);
                        if (checkenergy == -1) {
                            printf("dar khaneye energi nist\n");
                            print();
                            //continue;

                        } else if (checkenergy == 1) {
                            afzaeshenergi(x1, y1, c1);
                            taghirvaziatkhaneha(x1, y1);
                            taghirenergynodha(head, x1, y1, energicells[x1][y1]);
                            printNodes(head);
                            printf("energy cell: %d\n", energicells[x1][y1]);
                            printf("energy khane: %d\n", energikhane[x1][y1]);
                            halatkhone();
                            print();
                            //continue;


                        }
                    }


                } else if (choice2 == 4) {
                    //save kardan game

                    //structha
                    structha=fopen("D:\\strucktha.bin.bin","wb");
                    if(structha==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    fwrite(&nob1 ,sizeof(int),1,structha);
                    struct Node*ccur=head;
                    while(ccur!=NULL){
                        fwrite(&(ccur->x) ,sizeof(int),1,structha);
                        fwrite(&(ccur->y) ,sizeof(int),1, structha);
                        fwrite(&(ccur->energi) ,sizeof(int),1, structha);
                        ccur=ccur->next;

                    }
                    //printNodes(head);

                    fclose(structha);

                    //naghshe
                    naghshe=fopen( "D:\\naghshe.bin.bin","wb");
                    if(naghshe==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<4*n+3;i++){

                        for(int j=0;j<5*n+1;j++){


                            fwrite(&map[i][j] , sizeof(char),1,naghshe);

                        }

                    }


                    fclose(naghshe);
                    //shomarekhaneha
                    shomarekhane=fopen( "D:\\shomarekhaneha.bin.bin","wb");
                    if(shomarekhane==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&shomare[i][j] , sizeof(char),1,shomarekhane);

                        }

                    }


                    fclose(shomarekhane);

                    //matrixx
                    matrixx1=fopen( "D:\\matrixx.bin.bin","wb");
                    if(matrixx1==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&matrixx[i][j] , sizeof(char),1,matrixx1);

                        }

                    }


                    fclose(matrixx1);
                    //matrix

                    matrix1=fopen( "D:\\matrix.bin.bin","wb");
                    if(matrix1==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&matrix[i][j] , sizeof(int),1,matrix1);

                        }

                    }


                    fclose(matrix1);
                    //energykhane
                    energykhaneha=fopen( "D:\\energykhane.bin.bin","wb");
                    if(energykhaneha==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&energikhane[i][j] , sizeof(int),1,energykhaneha);

                        }

                    }


                    fclose(energykhaneha);
                    //energycells
                    energycellha=fopen( "D:\\energycells.bin.bin","wb");
                    if(energycellha==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&energicells[i][j] , sizeof(int),1,energycellha);

                        }

                    }


                    fclose(energycellha);







                } else if (choice2 == 5) {
                    printNodes(head);
                    int e3=kolenergy(head);
                    printf("kol energy cells: %d\n",e3 );
                    printf("exit game:)\n");
                    exit(0);

                }


            }//payan while
        } //payan if m


    }
    //payan single
    if(choice==3 ||  m==2) {
        if (choice == 3) {
            printf("player 1:please enter the number of your cells\n");
            scanf("%d", &nob1);
            printf("player 2:please enter the number of your cells\n");
            scanf("%d", &nob2);
            avalie();
            sanavie();
            print();
            printf("cells1:\n");
            printf("\n");
            printNodes(head);
            printf("\n");
            printf("cells2:\n");
            printf("\n");
            printNodes(headd);
            //printf("please enter the number of your cells\n");
            //scanf("%d", &nob1);
            //avalie();
            //print();
            //printNodes(head);
        }
        if (choice == 3 ||  m == 2) {
            while (1) {
                printf("\nplayer1:Please choose one of your cells:\n ");
                print();
                printNodes(head);
                char c1 = 'x';
                //printf("%c\n",c1);

                int index1;
                int x1;
                int y1;
                scanf("%d%d", &x1, &y1);
                //x1 = taiinx1(head, index1);
                //y1 = taiiny1(head, index1);
                //printf("%d%d\n", x1, y1);
                //x1=1;
                //y1=2;
                show2();
                int choice2;
                scanf("%d", &choice2);
                //printf("cccxxx");
                //printf("cccxxx2222");
                //agar harkat ra entekhab konad
                if (choice2 == 1) {
                    //printf("cccxxx2222333");
                    show3();
                    //printf("cccxxx22224444");
                    // int choice3;
                    scanf("%d", &choice3);
                    //baray harkat cell
                    //harkat be bala
                    if (choice3 == 1) {
                        //harkat be bala
                        int check1 = checkup(x1, y1);
                        if (check1 == 1) {
                            harkatbala(head, x1, y1);
                            delet(x1, y1);
                            matrix[x1][y1] = 0;
                            matrix[x1 - 1][y1] = 1;
                            matrixx[x1][y1] = ' ';
                            matrixx[x1 - 1][y1] = c1;
                            energicells[x1 - 1][y1] = energicells[x1][y1];
                            energicells[x1][y1] = 0;
                            harkat(x1 - 1, y1);
                            print();
                            //continue;
                        } else if (check1 == -1) {
                            printf("nemitavanad be bala beravad\n");
                            print();
                            //continue;
                        }
                        //harkat be paiin
                    } else if (choice3 == 2) {
                        //be paiin beravad
                        int check2 = checkdown(x1, y1);
                        if (check2 == 1) {
                            harkatpaiin(head, x1, y1);
                            delet(x1, y1);
                            matrix[x1][y1] = 0;
                            matrix[x1 + 1][y1] = 1;
                            matrixx[x1][y1] = ' ';
                            matrixx[x1 + 1][y1] = c1;
                            energicells[x1 + 1][y1] = energicells[x1][y1];
                            energicells[x1][y1] = 0;
                            harkat(x1 + 1, y1);
                            print();
                            //continue;

                        } else if (check2 == -1) {
                            printf("nemitavanad be paiin beravad\n");
                            print();
                            //continue;

                        }


                    } else if (choice3 == 3) {
                        //shomal sharqi
                        int natige1 = y1 % 2;
                        if (natige1 == 0) {
                            int check3 = checkshomalsharqi1(x1, y1);
                            if (check3 == 1) {
                                harkatshomalsharqi1(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1 - 1][y1 + 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1 - 1][y1 + 1] = c1;
                                energicells[x1 - 1][y1 + 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1 - 1, y1 + 1);
                                print();
                                //continue;

                            } else if (check3 == -1) {
                                printf("nemitavanad be shomalsharqi beravad\n");
                                print();
                                //continue;

                            }
                        } else if (natige1 != 0) {
                            int check4 = checkshomalsharqi2(x1, y1);
                            if (check4 == 1) {
                                harkatshomalsharqi2(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1][y1 + 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1][y1 + 1] = c1;
                                energicells[x1][y1 + 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1, y1 + 1);
                                print();
                                //continue;

                            } else if (check4 == -1) {
                                printf("nemitavanad be shomalsharqi beravad\n");
                                print();
                                //continue;

                            }


                        }


                    } else if (choice3 == 4) {
                        //shomalqarbi
                        int natige2 = y1 % 2;
                        if (natige2 == 0) {
                            int check5 = checkshomalqarbi1(x1, y1);
                            if (check5 == 1) {
                                harkatshomalqarbi1(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1 - 1][y1 - 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1 - 1][y1 - 1] = c1;
                                energicells[x1 - 1][y1 - 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1 - 1, y1 - 1);
                                print();
                                //continue;

                            } else if (check5 == -1) {
                                printf("nemitavanad be shomalqarbi beravad\n");
                                print();
                                //continue;

                            }
                        } else if (natige2 != 0) {
                            int check6 = checkshomalqarbi2(x1, y1);
                            if (check6 == 1) {
                                harkatshomalqarbi2(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1][y1 - 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1][y1 - 1] = c1;
                                energicells[x1][y1 - 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1, y1 - 1);
                                print();
                                //continue;

                            } else if (check6 == -1) {
                                printf("nemitavanad be shomalqarbi beravad\n");
                                print();
                                //continue;

                            }
                        }


                    } else if (choice3 == 5) {
                        //gonobsharqi
                        int natige3 = y1 % 2;
                        if (natige3 == 0) {
                            int check7 = checkgonobsharqi1(x1, y1);
                            if (check7 == 1) {
                                harkatgonobsharqi1(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1][y1 + 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1][y1 + 1] = c1;
                                energicells[x1][y1 + 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1, y1 + 1);
                                print();
                                //continue;

                            } else if (check7 == -1) {
                                printf("nemitavanad be gonobsharqi beravad\n");
                                print();
                                //continue;

                            }
                        }
                        if (natige3 != 0) {
                            int check8 = checkgonobsharqi2(x1, y1);
                            if (check8 == 1) {
                                harkatgonobsharqi2(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1 + 1][y1 + 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1 + 1][y1 + 1] = c1;
                                energicells[x1 + 1][y1 + 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1 + 1, y1 + 1);
                                print();
                                //continue;

                            } else if (check8 == -1) {
                                printf("nemitavanad be gonobsharqi beravad\n");
                                print();
                                //continue;

                            }
                        }


                    } else if (choice3 == 6) {
                        //gonobqarbi
                        int natige4 = y1 % 2;
                        if (natige4 == 0) {
                            int check9 = checkgonobqarbi1(x1, y1);
                            if (check9 == 1) {
                                harkatgonobqarbi1(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1][y1 - 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1][y1 - 1] = c1;
                                energicells[x1][y1 - 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1, y1 - 1);
                                print();
                                //continue;

                            } else if (check9 == -1) {
                                printf("nemitavanad be gonobqarbi  beravad\n");
                                print();
                                //continue;

                            }
                        } else if (natige4 != 0) {
                            int check10 = checkgonobqarbi2(x1, y1);
                            if (check10 == 1) {
                                harkatgonobqarbi2(head, x1, y1);
                                delet(x1, y1);
                                matrix[x1][y1] = 0;
                                matrix[x1 + 1][y1 - 1] = 1;
                                matrixx[x1][y1] = ' ';
                                matrixx[x1 + 1][y1 - 1] = c1;
                                energicells[x1 + 1][y1 - 1] = energicells[x1][y1];
                                energicells[x1][y1] = 0;
                                harkat(x1 + 1, y1 - 1);
                                print();
                                //continue;

                            } else if (check10 == -1) {
                                printf("nemitavanad be gonobqarbi  beravad\n");
                                print();
                                // continue;

                            }
                        }


                    }


                } else if (choice2 == 2) {
                    //taghsim cell
                    //tabeii ke energy cell va khane mitosis ra check mikonad
                    int checkm = checkmitosis(x1, y1);

                    if (checkm == -1) {

                        printf("nemitavanad mitosis shavad\n");
                        print();
                    } else if (checkm == 1) {

                        harkatcellezafi(x1, y1, c1);


                    }


                } else if (choice2 == 3) {
                    // energi
                    //tabeii baraye check kardan dar khane energi

                    if (energicells[x1][y1] == 100) {
                        printf("energy cell kamel ast\n");
                        print();

                    } else if (energicells[x1][y1] < 100) {
                        int checkenergy = checkenergikhane(x1, y1, c1);
                        if (checkenergy == -1) {
                            printf("dar khaneye energi nist\n");
                            print();
                            //continue;

                        } else if (checkenergy == 1) {
                            afzaeshenergi(x1, y1, c1);
                            taghirvaziatkhaneha(x1, y1);
                            taghirenergynodha(head, x1, y1, energicells[x1][y1]);
                            printNodes(head);
                            printf("energy cell: %d\n", energicells[x1][y1]);
                            printf("energy khane: %d\n", energikhane[x1][y1]);
                            halatkhone();
                            print();
                            //continue;


                        }
                    }


                } else if (choice2 == 4) {

//                    FILE*naghshe111;
//                    FILE*shomarekhane111;
//                    FILE*energykhaneha111;
//                    FILE*energycellha111;
//                    FILE*matrix1111;
//                    FILE*matrixx1111;
//                    FILE*structha111;
//                    FILE*structha2111;



                    //structha
                    structha111=fopen("D:\\strucktha.bin.bin","wb");
                    if(structha111==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    fwrite(&nob1 ,sizeof(int),1,structha111);
                    struct Node *cur1=head;
                    while(cur1!=NULL){
                        fwrite(&(cur1->x) ,sizeof(int),1,structha111);
                        fwrite(&(cur1->y) ,sizeof(int),1, structha111);
                        fwrite(&(cur1->energi) ,sizeof(int),1, structha111);
                        cur1=cur1->next;

                    }

                    fclose(structha111);





                    //structha2
                    structha2111=fopen("D:\\structha2.bin.bin","wb");
                    if(structha2111==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    fwrite(&nob2 ,sizeof(int),1,structha2111);
                    struct Node*cur2=headd;
                    while(cur2!=NULL){
                        fwrite(&(cur2->x) ,sizeof(int),1,structha2111);
                        fwrite(&(cur2->y) ,sizeof(int),1, structha2111);
                        fwrite(&(cur2->energi) ,sizeof(int),1, structha2111);
                        cur2=cur2->next;

                    }

                    fclose(structha2111);







                    //naghshe
                    naghshe111=fopen( "D:\\naghshe.bin.bin","wb");
                    if(naghshe111==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<4*n+3;i++){

                        for(int j=0;j<5*n+1;j++){


                            fwrite(&map[i][j] , sizeof(char),1,naghshe111);

                        }

                    }


                    fclose(naghshe111);
                    //shomarekhaneha
                    shomarekhane111=fopen( "D:\\shomarekhaneha.bin.bin","wb");
                    if(shomarekhane111==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&shomare[i][j] , sizeof(char),1,shomarekhane111);

                        }

                    }


                    fclose(shomarekhane111);

                    //matrixx
                    matrixx1111=fopen( "D:\\matrixx.bin.bin","wb");
                    if(matrixx1111==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&matrixx[i][j] , sizeof(char),1,matrixx1111);

                        }

                    }


                    fclose(matrixx1111);
                    //matrix

                    matrix1111=fopen( "D:\\matrix.bin.bin","wb");
                    if(matrix1111==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&matrix[i][j] , sizeof(int),1,matrix1111);

                        }

                    }


                    fclose(matrix1111);
                    //energykhane
                    energykhaneha111=fopen( "D:\\energykhane.bin.bin","wb");
                    if(energykhaneha111==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&energikhane[i][j] , sizeof(int),1,energykhaneha111);

                        }

                    }


                    fclose(energykhaneha111);
                    //energycells
                    energycellha111=fopen( "D:\\energycells.bin.bin","wb");
                    if(energycellha111==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&energicells[i][j] , sizeof(int),1,energycellha111);

                        }

                    }


                    fclose(energycellha111);


                } else if (choice2 == 5) {
                    printNodes(head);
                    int e11=kolenergy(head);
                    int e22=kolenergy(headd);
                    printf("player 1:kol energy cells: %d\n", e11);
                    printNodes(headd);
                    printf("player 2:kol energy cells: %d\n",e22 );
                    printf("exit game:)\n");
                    exit(0);

                }//bazikon1


                printf("player2:Please choose one of your cells:\n ");
                printNodes(headd);
                char c2 = 'y';
                //printf("%c\n",c1);

                //int index1;
                int x2;
                int y2;
                scanf("%d%d", &x2, &y2);
                //x1 = taiinx1(head, index1);
                //y1 = taiiny1(head, index1);
                //printf("%d%d\n", x1, y1);
                //x1=1;
                //y1=2;
                show2();
                int choicee2;
                scanf("%d", &choicee2);
                //printf("cccxxx");
                //printf("cccxxx2222");
                //agar harkat ra entekhab konad
                if (choicee2 == 1) {
                    //printf("cccxxx2222333");
                    show3();
                    //printf("cccxxx22224444");
                    // int choice3;
                    scanf("%d", &choicee3);
                    //baray harkat cell
                    //harkat be bala
                    if (choicee3 == 1) {
                        //harkat be bala
                        int check11 = checkup(x2, y2);
                        if (check11 == 1) {
                            harkatbala(headd, x2, y2);
                            delet(x2, y2);
                            matrix[x2][y2] = 0;
                            matrix[x2 - 1][y2] = 1;
                            matrixx[x2][y2] = ' ';
                            matrixx[x2 - 1][y2] = c2;
                            energicells[x2 - 1][y2] = energicells[x2][y2];
                            energicells[x2][y2] = 0;
                            harkat(x2 - 1, y2);
                            print();
                            //continue;
                        } else if (check11 == -1) {
                            printf("nemitavanad be bala beravad\n");
                            print();
                            //continue;
                        }
                        //harkat be paiin
                    } else if (choicee3 == 2) {
                        //be paiin beravad
                        int check22 = checkdown(x2, y2);
                        if (check22 == 1) {
                            harkatpaiin(headd, x2, y2);
                            delet(x2, y2);
                            matrix[x2][y2] = 0;
                            matrix[x2 + 1][y2] = 1;
                            matrixx[x2][y2] = ' ';
                            matrixx[x2 + 1][y2] = c2;
                            energicells[x2 + 1][y2] = energicells[x2][y2];
                            energicells[x2][y2] = 0;
                            harkat(x2 + 1, y2);
                            print();
                            //continue;

                        } else if (check22 == -1) {
                            printf("nemitavanad be paiin beravad\n");
                            print();
                            //continue;

                        }


                    } else if (choicee3 == 3) {
                        //shomal sharqi
                        int natige11 = y2 % 2;
                        if (natige11 == 0) {
                            int check33 = checkshomalsharqi1(x2, y2);
                            if (check33 == 1) {
                                harkatshomalsharqi1(headd, x2, y2);
                                delet(x2, y2);
                                matrix[x2][y2] = 0;
                                matrix[x2 - 1][y2 + 1] = 1;
                                matrixx[x2][y2] = ' ';
                                matrixx[x2 - 1][y2 + 1] = c2;
                                energicells[x2 - 1][y2 + 1] = energicells[x2][y2];
                                energicells[x2][y2] = 0;
                                harkat(x2 - 1, y2 + 1);
                                print();
                                //continue;

                            } else if (check33 == -1) {
                                printf("nemitavanad be shomalsharqi beravad\n");
                                print();
                                //continue;

                            }
                        } else if (natige11 != 0) {
                            int check44 = checkshomalsharqi2(x2, y2);
                            if (check44 == 1) {
                                harkatshomalsharqi2(headd, x2, y2);
                                delet(x2, y2);
                                matrix[x2][y2] = 0;
                                matrix[x2][y2 + 1] = 1;
                                matrixx[x2][y2] = ' ';
                                matrixx[x2][y2 + 1] = c2;
                                energicells[x2][y2 + 1] = energicells[x2][y2];
                                energicells[x2][y2] = 0;
                                harkat(x2, y2 + 1);
                                print();
                                //continue;

                            } else if (check44 == -1) {
                                printf("nemitavanad be shomalsharqi beravad\n");
                                print();
                                //continue;

                            }


                        }


                    } else if (choicee3 == 4) {
                        //shomalqarbi
                        int natige22 = y2 % 2;
                        if (natige22 == 0) {
                            int check55 = checkshomalqarbi1(x2, y2);
                            if (check55 == 1) {
                                harkatshomalqarbi1(headd, x2, y2);
                                delet(x2, y2);
                                matrix[x2][y2] = 0;
                                matrix[x2 - 1][y2 - 1] = 1;
                                matrixx[x2][y2] = ' ';
                                matrixx[x2 - 1][y2 - 1] = c2;
                                energicells[x2 - 1][y2 - 1] = energicells[x2][y2];
                                energicells[x2][y2] = 0;
                                harkat(x2 - 1, y2 - 1);
                                print();
                                //continue;

                            } else if (check55 == -1) {
                                printf("nemitavanad be shomalqarbi beravad\n");
                                print();
                                //continue;

                            }
                        } else if (natige22 != 0) {
                            int check66 = checkshomalqarbi2(x2, y2);
                            if (check66 == 1) {
                                harkatshomalqarbi2(headd, x2, y2);
                                delet(x2, y2);
                                matrix[x2][y2] = 0;
                                matrix[x2][y2 - 1] = 1;
                                matrixx[x2][y2] = ' ';
                                matrixx[x2][y2 - 1] = c2;
                                energicells[x2][y2 - 1] = energicells[x2][y2];
                                energicells[x2][y2] = 0;
                                harkat(x2, y2 - 1);
                                print();
                                //continue;

                            } else if (check66 == -1) {
                                printf("nemitavanad be shomalqarbi beravad\n");
                                print();
                                //continue;

                            }
                        }


                    } else if (choicee3 == 5) {
                        //gonobsharqi
                        int natige33 = y2 % 2;
                        if (natige33 == 0) {
                            int check77 = checkgonobsharqi1(x2, y2);
                            if (check77 == 1) {
                                harkatgonobsharqi1(headd, x2, y2);
                                delet(x2, y2);
                                matrix[x2][y2] = 0;
                                matrix[x2][y2 + 1] = 1;
                                matrixx[x2][y2] = ' ';
                                matrixx[x2][y2 + 1] = c2;
                                energicells[x2][y2 + 1] = energicells[x2][y2];
                                energicells[x2][y2] = 0;
                                harkat(x2, y2 + 1);
                                print();
                                //continue;

                            } else if (check77 == -1) {
                                printf("nemitavanad be gonobsharqi beravad\n");
                                print();
                                //continue;

                            }
                        }
                        if (natige33 != 0) {
                            int check88 = checkgonobsharqi2(x2, y2);
                            if (check88 == 1) {
                                harkatgonobsharqi2(headd, x2, y2);
                                delet(x2, y2);
                                matrix[x2][y2] = 0;
                                matrix[x2 + 1][y2 + 1] = 1;
                                matrixx[x2][y2] = ' ';
                                matrixx[x2 + 1][y2 + 1] = c2;
                                energicells[x2 + 1][y2 + 1] = energicells[x2][y2];
                                energicells[x2][y2] = 0;
                                harkat(x2 + 1, y2 + 1);
                                print();
                                //continue;

                            } else if (check88 == -1) {
                                printf("nemitavanad be gonobsharqi beravad\n");
                                print();
                                //continue;

                            }
                        }


                    } else if (choicee3 == 6) {
                        //gonobqarbi
                        int natige44 = y2 % 2;
                        if (natige44 == 0) {
                            int check99 = checkgonobqarbi1(x2, y2);
                            if (check99 == 1) {
                                harkatgonobqarbi1(headd, x2, y2);
                                delet(x2, y2);
                                matrix[x2][y2] = 0;
                                matrix[x2][y2 - 1] = 1;
                                matrixx[x2][y2] = ' ';
                                matrixx[x2][y2 - 1] = c2;
                                energicells[x2][y2 - 1] = energicells[x2][y2];
                                energicells[x2][y2] = 0;
                                harkat(x2, y2 - 1);
                                print();
                                //continue;

                            } else if (check99 == -1) {
                                printf("nemitavanad be gonobqarbi  beravad\n");
                                print();
                                //continue;

                            }
                        } else if (natige44 != 0) {
                            int check100 = checkgonobqarbi2(x2, y2);
                            if (check100 == 1) {
                                harkatgonobqarbi2(headd, x2, y2);
                                delet(x2, y2);
                                matrix[x2][y2] = 0;
                                matrix[x2 + 1][y2 - 1] = 1;
                                matrixx[x2][y2] = ' ';
                                matrixx[x2 + 1][y2 - 1] = c2;
                                energicells[x2 + 1][y2 - 1] = energicells[x2][y2];
                                energicells[x2][y2] = 0;
                                harkat(x2 + 1, y2 - 1);
                                print();
                                //continue;

                            } else if (check100 == -1) {
                                printf("nemitavanad be gonobqarbi  beravad\n");
                                print();
                                // continue;

                            }
                        }


                    }


                } else if (choicee2 == 2) {
                    //taghsim cell
                    //tabeii ke energy cell va khane mitosis ra check mikonad
                    int checkmm = checkmitosis(x2, y2);

                    if (checkmm == -1) {

                        printf("nemitavanad mitosis shavad\n");
                        print();
                    } else if (checkmm == 1) {

                        harkatcellezafi(x2, y2, c2);


                    }


                } else if (choicee2 == 3) {
                    // energi
                    //tabeii baraye check kardan dar khane energi

                    if (energicells[x2][y2] == 100) {
                        printf("energy cell kamel ast\n");
                        print();

                    } else if (energicells[x2][y2] < 100) {
                        int checkenergyy = checkenergikhane(x2, y2, c2);
                        if (checkenergyy == -1) {
                            printf("dar khaneye energi nist\n");
                            print();
                            //continue;

                        } else if (checkenergyy == 1) {
                            afzaeshenergi(x2, y2, c2);
                            taghirvaziatkhaneha(x2, y2);
                            taghirenergynodha(headd, x2, y2, energicells[x2][y2]);
                            printNodes(headd);
                            printf("energy cell: %d\n", energicells[x2][y2]);
                            printf("energy khane: %d\n", energikhane[x2][y2]);
                            halatkhone();
                            print();
                            //continue;


                        }
                    }


                } else if (choicee2 == 4) {




                    //structha
                    structha222=fopen("D:\\strucktha.bin.bin","wb");
                    if(structha222==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    fwrite(&nob1 ,sizeof(int),1,structha222);
                    struct Node*cur=head;
                    while(cur!=NULL){
                        fwrite(&(cur->x) ,sizeof(int),1,structha222);
                        fwrite(&(cur->y) ,sizeof(int),1, structha222);
                        fwrite(&(cur->energi) ,sizeof(int),1, structha222);
                        cur=cur->next;

                    }

                    fclose(structha222);





                    //structha2
                    structha2222=fopen("D:\\structha2.bin.bin","wb");
                    if(structha2222==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    fwrite(&nob2 ,sizeof(int),1,structha2222);
                    struct Node *curr=headd;
                    while(curr!=NULL){
                        fwrite(&(curr->x) ,sizeof(int),1,structha2222);
                        fwrite(&(curr->y) ,sizeof(int),1, structha2222);
                        fwrite(&(curr->energi) ,sizeof(int),1, structha2222);
                        curr=curr->next;

                    }

                    fclose(structha2222);







                    //naghshe
                    naghshe222=fopen( "D:\\naghshe.bin.bin","wb");
                    if(naghshe222==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<4*n+3;i++){

                        for(int j=0;j<5*n+1;j++){


                            fwrite(&map[i][j] , sizeof(char),1,naghshe222);

                        }

                    }


                    fclose(naghshe222);
                    //shomarekhaneha
                    shomarekhane222=fopen( "D:\\shomarekhaneha.bin.bin","wb");
                    if(shomarekhane222==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&shomare[i][j] , sizeof(char),1,shomarekhane222);

                        }

                    }


                    fclose(shomarekhane222);

                    //matrixx
                    matrixx1222=fopen( "D:\\matrixx.bin.bin","wb");
                    if(matrixx1222==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&matrixx[i][j] , sizeof(char),1,matrixx1222);

                        }

                    }


                    fclose(matrixx1222);
                    //matrix

                    matrix1222=fopen( "D:\\matrix.bin.bin","wb");
                    if(matrix1222==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&matrix[i][j] , sizeof(int),1,matrix1222);

                        }

                    }


                    fclose(matrix1222);
                    //energykhane
                    energykhaneha222=fopen( "D:\\energykhane.bin.bin","wb");
                    if(energykhaneha222==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&energikhane[i][j] , sizeof(int),1,energykhaneha222);

                        }

                    }


                    fclose(energykhaneha222);
                    //energycells
                    energycellha222=fopen( "D:\\energycells.bin.bin","wb");
                    if(energycellha222==NULL){
                        printf("can not open file\n");
                        return -1;
                    }
                    for(int i=0;i<n;i++){

                        for(int j=0;j<n;j++){


                            fwrite(&energicells[i][j] , sizeof(int),1,energycellha222);

                        }

                    }


                    fclose(energycellha222);






                } else if (choicee2 == 5) {
                    //printf("salllaaaaammm\n");
                    printNodes(head);
                    int e1=kolenergy(head);
                    int e2=kolenergy(headd);
                    printf("player 1:kol energy cells: %d\n", e1);
                    printf("\n");
                    printNodes(headd);
                    printf("player 2:kol energy cells: %d\n", e2);
                    printf("exit game:)\n");
                    return 0;

                }


            }
            //payan while
        }


//payan 2 nafare
    }

    if(choice==4){
        printf("payannnnn:((((((");
    }
}
//payan main