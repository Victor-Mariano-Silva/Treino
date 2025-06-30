int maximumGain(char* s, int x, int y)
{
int score = 0, max_value, min_value;
char max[3], min[3];

    if( y > x)
    {
        strcpy(max,"ba");
        max_value = y;
        strcpy(min, "ab");
        min_value = x;
    } else
    {
        strcpy(max,"ab");
        max_value = x;
        strcpy(min, "ba");
        min_value = y;
    }

    char stack[strlen(s) + 1];
    int capacity = 0;
   for(int i = 0; s[i] != '\0'; i++)
   {
     char current = s[i];
     if (current == max[1] && capacity > 0 && stack[capacity - 1] == max[0])
     {
        score += max_value;
        capacity--;

     } else
     {
        stack[capacity++] = current;
     }
   }

   char stack_2[strlen(s) + 1];
    int capacity_2 = 0;
   for(int i = 0; i < capacity; i++)
   {
     char current = stack[i];
     if (current == min[1] && capacity_2 > 0 && stack_2[capacity_2 - 1] == min[0])
     {
        score += min_value;
        capacity_2--;

     } else
     {
        stack_2[capacity_2++] = current;
     }
   }

   return score;    
}