
#include <stdio.h>

struct person_details
{
    char surname[100];
    char name[100];
    char id[10];
};

int main() {
  struct person_details person = {0};
  char input[]={"kothapally000ankitha0005536"};
  int i,j=0,part=1;
  for(i=0;input[i]!='\0';i++)
  {
      if(input[i] == '0' && input[i+1] == '0' && input[i+2] == '0')
      {
          part++;
          i=i+2;
          j=0;
      }
      else
      {
        if(part == 1)
        {
            person.surname[j++] = input[i];
        }
        else if(part == 2)
        {
            person.name[j++] = input[i];
        }
        else if(part == 3)
        {
            person.id[j++] = input[i];
        }
      }
  }
  
  printf("{\"surname\": \"%s\", \"name\": \"%s\", \"id\": \"%s\"}\n",person.surname,person.name,person.id);
  
}
