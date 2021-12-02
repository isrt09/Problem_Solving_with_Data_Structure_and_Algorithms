// Problem 001

int main()
{
    int num[3],sum, i;

    num[0] = 100;
    num[1] = 300;
    num[2] = 400;

    sum  = num[0] + num[1] + num[2];

    for(i=0; i<3; i++)
    {
        printf("The Index Number is %d\n",num[i]);
    }

    printf("\nTotal Sum is %d\n", sum);
    printf("\nAverage is %.2f\n", (float)sum/3);

    return 0;
}

// Problem Resolved
int main()
{
    int n,i,sum;
    printf("\nPlease Enter Size of Array : ");
    scanf("%d",&n);
    printf("Please Enter the Numbers : ");
    int size[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&size[i]);
        printf("\nThe Index[%d] is %d\n", i, size[i]);
        sum = sum + size[i];
    }
    int max = size[0];
    if(max < size[0])
    {
        max = size[0];
    }
    printf("\nMaximum Number is %d\n", max);
    printf("\nTotal Sum is %d\n", sum);
    printf("\nAverage is %.2f\n", (float)sum/3);

    return 0;
}

// Complete Solution
int main()
{
    int n,i,sum, min, max;
    printf("\nPlease Enter Size of Array : ");
    scanf("%d",&n);
    printf("Please Enter the Numbers : ");
    int size[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&size[i]);
        printf("\nThe Index[%d] is %d\n", i, size[i]);
        sum = sum + size[i];
    }
    max = size[0];
    min = size[0];
    for(i=0; i<n; i++)
    {
        if(max < size[i])
        {
            max = size[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(min > size[i])
        {
            min = size[i];
        }
    }
    printf("\nMaximum Number is %d\n", max);
    printf("\nMinimum Number is %d\n", min);
    printf("\nTotal Sum is %d\n", sum);
    printf("\nAverage is %.2f\n", (float)sum/3);

    return 0;
}

int main()
{
    int numbers[] = {10,11,23,76,34,87,98,35,22,39,26,76,54};
    int i, value, size, pos = -1;
    size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Enter your number search : ");
    scanf("%d",&value);
    for(i=0; i<size; i++)
    {
        if(value == numbers[i])
        {
            pos = i+1;
            break;
        }
    }
    if(pos == -1)
    {
        printf("Not Found!");
    }
    else
    {
        printf("The Number is found and position number is %d",pos);
    }
    return 0;
}

int main()
{
    int old_array[5] = {10,15,18,17,25}, i, new_array[5];
    printf("Array Old: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",old_array[i]);
    }
    for(i=0; i<5; i++)
    {
        new_array[i] = old_array[i];
    }
    printf("\nArray New: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",new_array[i]);
    }
    return 0;
}

int main()
{
    int old_array[] = {10,15,18,17,25,10,15,18,17,25}, i, size;
    size = sizeof(old_array) / sizeof(old_array[0]);
    int new_array[size];

    printf("Array Old: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",old_array[i]);
    }
    for(i=0; i<size; i++)
    {
        new_array[i] = old_array[i];
    }
    printf("\nArray New: ");
    for(i=0; i<size; i++)
    {
        printf("%d ",new_array[i]);
    }
    return 0;
}


int main()
{
    int scores[3][4] = {
        {2,3,4,7},
        {2,3,7,2},
        {2,0,3,1},
    };
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)--
        {
            printf("%d", scores[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int i, j;
    int A[3][4];
    printf("Enter Array 12 Element Values : ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n2D-Array is given by : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
