#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("First\n");
    sayHello("Messi", 40);
    sayHello("Ronaldo", 40);
    sayHello("Neymar", 20);
    printf("Last");
    return 0;
}
/*Creates subsection for a function*/
void sayHello (char name[], int age){ /*Need () and {}*/
    printf("Hello %s! You are %d\n", name, age);
}