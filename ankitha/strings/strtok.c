#include <stdio.h>
#include <string.h>

int main() {
    char buffer[100]="Hi Ankitha! How are you", *p;
    p = strtok(buffer,"?! ");
    while(p)
    {
        printf("%s\n",p);
        p = strtok(NULL,"?! ");
    }
    
}
