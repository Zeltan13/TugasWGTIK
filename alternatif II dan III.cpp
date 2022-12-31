#include "alternatif II dan III.h"
Queue createQueue_1301213374(Queue &Q){
    Head(Q) = -1;
    Tail(Q) = -1;
    return Q;
};
//Alternatif II
bool isEmptyAlternatifII_1301213374(Queue Q){
    return (Head(Q) == -1 && Tail(Q)== -1);
};
bool isFullAlternatifII_1301213374(Queue Q){
    return (Head(Q) == 0 && Tail(Q)== IDXMAX-1);
};
void enqueueAlternatifII_1301213374(Queue &Q,infotype p){
    int i,j;
    if (isFullAlternatifII_1301213374(Q)){
        cout<<"Queue Penuh"<<endl;
    }else if (isEmptyAlternatifII_1301213374(Q)){
        Head(Q) = 0;
        Tail(Q) = 0;
        Q.T[Tail(Q)] = p;
    }else if (Tail(Q) == IDXMAX-1){
        i = Head(Q);
        j = 0;
        while (i<Tail(Q)){
            Q.T[j] = Q.T[i];
            i++;
            j++;
        }
        infotype temp = Q.T[Tail(Q)];
        Head(Q) = 0;
        Tail(Q) = j;
        Q.T[Tail(Q)] = temp;
        Tail(Q) += 1;
        Q.T[Tail(Q)] = p;
    }else{
        Tail(Q) += 1;
        Q.T[Tail(Q)] = p;
    }
};
void dequeueAlternatifII_1301213374(Queue &Q,infotype p){
    if (isEmptyAlternatifII_1301213374(Q)){
        cout<<"Queue Kosong"<<endl;
    }else{
        p = Q.T[Head(Q)];
        if (Head(Q) == Tail(Q)){
            Head(Q) = -1;
            Tail(Q) = -1;
        }else{
            Head(Q) += 1;
        }
    }
};

//Alternatif III
bool isEmptyAlternatifIII_1301213374(Queue Q){
    return (Head(Q) == -1 && Tail(Q)== -1);

};
bool isFullAlternatifIII_1301213374(Queue Q){
    return ((Head(Q) == 0 && Tail(Q)== IDXMAX-1) || (Head(Q) == (Tail(Q)+1)));
};
void enqueueAlternatifIII_1301213374(Queue &Q,infotype p){
    if(isFullAlternatifIII_1301213374(Q)){
        cout<<"Queue Penuh"<<endl;
    }else if (isEmptyAlternatifIII_1301213374(Q)){
        Head(Q) = 0;
        Tail(Q) = 0;
        Q.T[Tail(Q)] = p;
    }else if (Tail(Q) == IDXMAX-1){
        Tail(Q) = 0;
        Q.T[Tail(Q)] = p;
    }else{
        Tail(Q) += 1;
        Q.T[Tail(Q)] = p;
    }
};
void dequeueAlternatifIII_1301213374(Queue &Q,infotype p){
    if(isEmptyAlternatifIII_1301213374(Q)){
        cout<<"Queue Kosong"<<endl;
    }else if (Head(Q) == Tail(Q)){
        Head(Q) = -1;
        Tail(Q) = -1;
    }else if (Head(Q)== IDXMAX-1){
        Head(Q) = 0;
    }else{
        Head(Q) += 1;
    }
};

//Extras
void showAllData_1301213374(Queue Q){
    if (Head(Q)< Tail(Q)){
        int P = Head(Q);
        while (P <= Tail(Q)){
            cout<<Q.T[P]<<" ";
            P++;
        }
        cout<<endl;
    }else if (Tail(Q)<Head(Q)){
        for (int i=Head(Q); i< IDXMAX; i++){
            cout<<Q.T[i]<<" ";
            //cout<<"Ouptut ke-"<<i;
        }
        for (int i=0; i<= Tail(Q); i++){
            cout<<Q.T[i]<<" ";
            //cout<<"Ouptut ke-"<<i;
        }
        cout<<endl;
    }

};

void checkEmptyFullAltII_1301213374(Queue Q){
    if (isEmptyAlternatifII_1301213374(Q)){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }
    if (isFullAlternatifII_1301213374(Q)){
        cout<<"Queue is full"<<endl;
    }else{
        cout<<"Queue is not full"<<endl;
    }
};

void checkEmptyFullAltIII_1301213374(Queue Q){
    if (isEmptyAlternatifIII_1301213374(Q)){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }
    if (isFullAlternatifIII_1301213374(Q)){
        cout<<"Queue is full"<<endl;
    }else{
        cout<<"Queue is not full"<<endl;
    }
};

