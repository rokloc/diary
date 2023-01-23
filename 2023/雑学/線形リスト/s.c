//東横線の駅をリストに

#include <stdio.h>

//構造体のタグはstation
struct station {
    //まず次の構造体へのポインタを示す
    struct station *next;
    //次に構造体の中身
    char name[60];
    int rapid;//1快速０以外
};



int main()
{
    struct station machida = {NULL, "machida", 1};//仮にNULL
    struct station kobuchi = {&machida, "kobuchi", 0};//
    struct station fuchinobe = {&kobuchi, "fuchinobe", 0};//
    struct station yabe = {&fuchinobe, "yabe", 0};//

    struct station *head = &yabe;//
    struct station *p;//

    p = head;//構造体ポインタの初期値
    while(p != NULL)
    {
        printf("%s", p->name);
        if(p->rapid == 1)
            printf("快速\n");
        else
            printf("各駅停車\n");
        p = p->next;

    }
    return (0);

    // hachioji.next = &katakura;
}