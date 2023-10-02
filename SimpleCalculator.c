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
    while (! (keepGoing == 'N')) {
        printf("Enter calculation:\n\n");
        scanf("%f %c %f", &first, &operator, &second);
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
    printf("%.9g%c%.9g = %.6g\n\n", first, operator, second, answer);
    }
    goto exit;
    fail:
        printf("Fail.\n");
    exit:
        return 0;
}