#include<stdio.h>

int main(){
    int physics,chemistry,mathematics,total_marks,total_maths_physics;

    printf("input the marks obtained in physics:");
    scanf("%d",&physics);
    printf("input the marks obtained in chemistry:");
    scanf("%d",&chemistry);
    printf("input the marks obtained in mathematics:");
    scanf("%d",&mathematics);

    printf("total marks of maths,physics and chemistry:");
    scanf("%d",&total_marks);

    printf("total marks of maths and physics:");
    scanf("%d",&total_maths_physics);

    if(physics>=65&&chemistry>=55&&mathematics>=50&&total_marks>=190){
        printf("the candidate is eligible for admission.\n");
    } else if(total_maths_physics>=140){
        printf("the candidate is eligible for admission.\n");
    } else{
        printf("the candidate is not eligible for admission.\n");
    }

    return 0;
}

