#include <stdio.h>

struct student{
    char name[64];
    int height;
    float weight;
    long int scholarship;
};

int main()
{
    struct student st;

    printf("データを入力\n");

    printf("名前を入力：");
    scanf("%s",st.name);

    printf("身長を入力：");
    scanf("%d",&st.height);

    printf("体重を入力：");
    scanf("%f",&st.weight);

    printf("奨学金を入力：");
    scanf("%ld",&st.scholarship);

    printf("\n");
    printf("入力したデータを確認\n");

    printf("名前：%s\n",st.name);    
    printf("身長：%d\n",st.height);
    printf("体重：%.1f\n",st.weight);
    printf("奨学金：%ld\n",st.scholarship);


    return 0;
}
