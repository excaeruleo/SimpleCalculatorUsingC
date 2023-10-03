#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float first = 0;
    float second = 0;
    char operator;
    float answer = 0;
    char keepGoing;
    printf("Enter calculation:\n");
    scanf("%f %c %f", &first, &operator, &second);
    while ( (getchar()) != '\n' );
    while (! (keepGoing == 'N')) {
        switch(operator) {
            case '+': answer = first + second;
                break;
            case '-': answer = first - second;
                break;
            case '*': answer = first * second;
                break;
            case '/': answer = first / second;
                break;
            case '^': answer = pow(first, second);
                break;
            case 's':
                answer = sqrt(first);
                break;
            default: goto fail;
        }
        printf("%.9g%c%.9g = %.6g\n", first, operator, second, answer);
        printf("Continue? \n");
        scanf("%c", &keepGoing);
        while ( (getchar()) != '\n' );
        if (keepGoing == 'N') {
            goto fail;
        }
        else if (keepGoing == 'Y') {
            printf("Enter calculation:\n");
            scanf("%f %c %f", &first, &operator, &second);
            while ( (getchar()) != '\n' );
        }
    }
    fail:
        printf("Fail.\n");
    return 1;
}
