int calPoints(char** operations, int operationsSize) {
    int *record = malloc(sizeof(int) * operationsSize);
    int sum = 0,size = 0; 

    for(int i; i < operationsSize; i++)
    {
        if(strcmp(operations[i],"C") == 0 )
        {
            size--;
            record[size] = 0;
        }

        else if (strcmp(operations[i],"D") == 0 )
        {
            record[size] = record[size - 1] *2;
            size++;
        }

        else if (strcmp(operations[i],"+") == 0 )
        {
            record[size] = record[size - 1] + record[size - 2];
            size++;
        }

        else
        {
            record[size] = atoi(operations[i]); //atoi le só os inteiros de uma string
            size++;
        }
    }

    for(int i = 0; i < size; i++){
        sum = sum + record[i];
    }
    return sum;
}