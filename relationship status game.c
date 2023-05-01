#include <stdio.h>
#include <string.h>

int main()
{
    char name[20], ans[5], ans1[5], rsn[92], rep[5], fname[20], like[45], ans2[12];
    int age, prd, prd1;
    char like1[45], fname1[20], rep1[10], ans3[10];

    printf("\n\t\t**** MALE VERSION ****\n");
    printf("**** THIS IS MADE FOR ENTERTAINMENT PURPOSE ONLY ****");
    printf("\n\n");
    printf("PLEASE ENTER YOUR EVERY ANSWER IN LOWERCASE (SMALL LETTERS)\n\n");

    printf("enter your name:\n");
    fgets(name,20,stdin);
    printf("enter your age:\n");
    scanf("%d", &age);
    getchar();

    printf("Dear %s do you have a girlfriend ? ( type yes/no )\n", name);
    scanf("%s", ans);
    getchar();

    if (strcmp(ans, "no") == 0)
    {
        printf("would you like to have a girlfriend ? ( type yes/no )\n");
        scanf("%s", ans1);
        getchar();
        if (strcmp(ans1, "no") == 0)
        {
            printf("why ?\n");
            fgets(rsn,92,stdin);

            printf("ok thats fine\n");

            printf("have you ever been in a relationship before ? type (yes/no)\n");
            scanf("%s", ans3);
            getchar();

            if (strcmp(ans3, "yes") == 0)
            {
                printf("would you like to enter your gf's name ? (type yes/no)\n");
                scanf("%s", rep1);
                getchar();

                if (strcmp(rep1, "yes") == 0)
                {
                    printf("Please enter her name:\n");
                    fgets(fname1,20 ,stdin);

                    printf("\nhow long were you guys in a relationship ?\nType no. of months\n");
                    scanf("%d", &prd1);
                    getchar();

                    if (prd1 > 8)
                    {
                        printf("\nthats quite a long time\n");
                        printf("what is the one thing that you liked the most about her?\n");
                        fgets(like1,45 ,stdin);
                        printf("thats nice\n");
                    }
                    else
                    {
                        printf("what is the one thing that you liked the most about her?\n");
                        fgets(like1,45 ,stdin);
                        printf("thats nice\n");
                    }
                }
                else if (strcmp(rep1, "no") == 0)
                {
                    printf("how long were you guys in a relationship ?\nType no. of months\n");
                    scanf("%d", &prd1);
                    getchar();

                    if (prd1 > 8)
                    {
                        printf("\nthats quite a long time\n");
                        printf("what is the one thing that you liked the most about her?\n");
                        fgets(like1,45,stdin);
                        printf("thats nice\n");
                    }
                    else
                    {
                        printf("what is the one thing that you liked the most about her?\n");
                        fgets(like1,45,stdin);
                        printf("thats nice\n");
                    }
                }
            }
            else if (strcmp(ans3, "no") == 0)
            {
                printf("\nOK.THANKS FOR YOUR INFORMATION.\n");
            }
        }
        else if (strcmp(ans1, "yes") == 0)
        {
            printf("\nBUT I DONT THINK YOU WILL GET ANY.\n");
        }
        else
        {
            printf("type either yes or no in LOWERCASE. dont type anything except that.\n");
        }
    }
    else if (strcmp(ans, "yes") == 0)
    {
        printf("would you like to enter her name ? (type yes/no)\n");
        scanf("%s",rep);
        getchar();

        if (strcmp(rep, "yes") == 0)
        {
            printf("Please enter her name:\n");
            fgets(fname,20 , stdin);

            printf("since how long are you guys in a relationship ?\nType no. of months\n");
            scanf("%d", &prd);
            getchar();

            if (prd > 8)
            {
                printf("thats quite a long time\n");
                printf("what is the one thing that you like the most about her?\n");
                fgets(like,45 , stdin);
                printf("thats nice\n");
            }
            else
            {
                printf("what is the one thing that you like the most about her?\n");
                fgets(like,45 ,stdin);
                printf("thats nice\n");
            }
            printf("Do you plan on marrying her in future ? type 'yes', 'no' or 'uncertain'\n");
            scanf("%s",ans2);
            if (strcmp(ans2, "yes") == 0)
            {
                printf("i hope you will have a wonderful married life\n");
            }
            else if (strcmp(ans2, "no") == 0)
            {
                printf("then why are you even with her ?\njust leave her.\npeople like you are nothing but a piece of trash\n");
            }
            else if (strcmp(ans2, "uncertain") == 0)
            {
                printf("this is a common problem\nMost people are in dilemma\n");
            }
            else
            {
                printf("type either yes or no in LOWERCASE. dont type anything except that.\n");
            }
        }
        else if (strcmp(rep, "no") == 0)
        {
            printf("since how long are you guys in a relationship ?\nType no. of months\n");
            scanf("%d", &prd);
            getchar();

            if (prd > 8)
            {
                printf("thats quite a long time\n");
                printf("what is the one thing that you like the most about her?\n");
                fgets(like,45,stdin);
                printf("thats nice\n");
            }
            else
            {
                printf("what is the one thing that you like the most about her?\n");
                fgets(like,45,stdin);
                printf("thats nice\n");
            }
            printf("Do you plan on marrying her in future ? type 'yes', 'no' or 'uncertain'\n");
            scanf("%s",ans2);
            if (strcmp(ans2, "yes") == 0)
            {
                printf("i hope you will have a wonderful married life\n");
            }
            else if (strcmp(ans2, "no") == 0)
            {
                printf("then why are you even with her ?\njust leave her.\npeople like you are nothing but a piece of trash\n");
            }
            else if (strcmp(ans2, "uncertain") == 0)
            {
                printf("this is a common problem\nMost people are in dilemma\n");
            }
        }
    }
    else
    {
        printf("type either yes or no in LOWERCASE. dont type anything except that.\n");
    }
}