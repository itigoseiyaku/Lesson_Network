#include <stdio.h>
#include <string.h>

typedef struct{
    char name[64];
    int height;
    float weight;
    char sexual[2];
    long int scholarship;
}student;

void Update(student* pst)
{
    if (pst->height < (strcmp("M",pst->sexual)==0? 170:158))
    {
        pst->height = (strcmp("M",pst->sexual)==0? 170:158);
    }
    if (pst->weight > (strcmp("M",pst->sexual)==0? 65.4:50.5))
    {
        pst->weight = (strcmp("M",pst->sexual)==0? 65.4:50.5);
    }
}



int main()
{
    student st;

    printf("データを入力\n");

    printf("名前を入力：");
    scanf("%s",st.name);
    
    fflush(stdin);
    printf("性別を入力\n男性なら'M',女性なら'F'：");
    scanf("%s",&st.sexual);

    printf("身長を入力：");
    scanf("%d",&st.height);

    printf("体重を入力：");
    scanf("%f",&st.weight);

    printf("奨学金を入力：");
    scanf("%ld",&st.scholarship);

    printf("\n");

    Update(&st);


    printf("データ更新後\n");

    printf("名前：%s\n",st.name);    
    printf("身長：%d\n",st.height);
    printf("体重：%.1f\n",st.weight);
    printf("奨学金：%ld\n",st.scholarship);


    return 0;
}
