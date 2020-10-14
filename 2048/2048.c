#include <stdio.h>
#include <string.h>

void PrintGame(int[4], int[4], int[4], int[4]);
char* GetSpace(int[4]);
void PrintRows(int[4],int[4],int[4],int[4]);

int main(void){
    int column1[4] = {0,4,0,16}, column2[4]= {4,2,16,32}, column3[4]= {32,64,64,4}, column4[4]= {4,2,2,0};

    printf("test");
    printf("%d%s%d%s%d%s%d", column1[0], " asd", column2[0]," asd",column3[0],"asd ",column4[0]);      

    printf("%d%c%d%c%d%c%d", column1[0], GetSpace(column1), column2[0], GetSpace(column2),column3[0], GetSpace(column3),column4[0]);      

    return 0;
}

void PrintGame(int column1[4], int column2[4], int column3[4], int column4[4]){
    PrintRows(column1, column2, column3, column4);
}

void PrintRows(int column1[4], int column2[4], int column3[4], int column4[4]){

    
}

int GetSpace(int column[4]){
    int highNum;
    for (int i = 0; i < 4; i++)
        if(column[i] > highNum)
            highNum = column[i];
    return highNum;
}