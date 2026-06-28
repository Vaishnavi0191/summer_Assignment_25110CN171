#include <stdio.h>
int main()
{
    int answer, score = 0;
    printf(" QUIZ APPLICATION \n");
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 2)
    {
        score++;
    }
    printf("\n2. Which language is used to write C programs?\n");
    printf("1. C\n");
    printf("2. HTML\n");
    printf("3. CSS\n");
    printf("4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 1)
    {
        score++;
    }
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 3)
    {
        score++;
    }
    printf("\n===== RESULT =====\n");
    printf("Your Score = %d out of 3\n", score);
    if(score == 3)
    {
        printf("Excellent!\n");
    }
    else if(score == 2)
    {
        printf("Good Job!\n");
    }
    else if(score == 1)
    {
        printf("Keep Practicing!\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }
    return 0;
}