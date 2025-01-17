#include <stdio.h>
#include "moneyfolio.h"

int main(void){
    Income *i[100];
    Expense *e[100];
    int menu;
    int IE;

    while(1){
        menu = selectMenu();
        if(menu == 0) break;
        if(menu == 1)   sumList(i, e);
        else if(menu == 2){
            IE = selectIE();
            if(IE == 1)
                addIncome(i);
            else if(IE == 2)
                addExpense(e);
        }
        else if(menu == 3){
            IE = selectIE();
            if(IE == 1)
                addfIncome(i);
            else if(IE == 2)
                addfExpense(e);
        }
        else if(menu == 4){
            IE = selectIE();
            if(IE == 1)
                searchIncome(i);
            else if(IE == 2)
                searchExpense(e);
        }
        else if(menu == 5)
            searchCategory(i,e);
        else if(menu == 6){
            IE = selectIE();
            if(IE == 1)
                updateIncome(i);
            else if(IE == 2)
                updateExpense(e);
        }
        else if(menu == 7){
            IE = selectIE();
            if(IE == 1)
                deleteIncome(i);
            else if(IE == 2)
                deleteExpense(e);
        }
        else if(menu == 8)  dayList(i, e);
        else if(menu == 9)  monthList(i, e);
    }
    printf("=> �����!\n");
    return 0;
}