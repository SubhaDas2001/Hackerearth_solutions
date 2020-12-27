#include <stdio.h>
int main()
{


  int t;

    scanf("%d", &t);

    for(int x=0;x<t;x++)

    {

        int greencost,purplecost;   

        scanf("%d %d",&greencost,&purplecost);

        int n; //no of participants

        scanf("%d",&n);

        if(n>=1&&n<=10)

        {

            int way1=0,way2=0;

            for(int i=0;i<n;i++)

            {

                int prob1,prob2;

                scanf("%d %d",&prob1,&prob2);

                way1= prob1*greencost + prob2*purplecost +way1;

                way2= prob1*purplecost + prob2*greencost +way2;

            }

            if(way1<way2)

                printf("%d\n",way1);

            else

                printf("%d\n",way2);    

        }

        else

            printf("participants shouldn't be more than 10");

    }   

}
