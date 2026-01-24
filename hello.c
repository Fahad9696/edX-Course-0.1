//a simple C program to print multiplication table of a given number 

/*#include <stdio.h>
int main(void){
    int table;
    int i;
    printf("Enter the multiplication table you want: "); 
    scanf("%d", &table);
    for( i = 1; i<9; i++){
        printf("%d * %d = %d\n", table, i, i*table);
        

    }
    return 0;
}   */


/*#include <stdio.h>
int main(void){
    int input=0;
    int enginePower=0;
    int resistance=0;
    int weight=0;
    int height=0;
    int sum=0;
    printf("Enter the Number of Robots: ");
    scanf("%d", &input);
    for(int i=0 ; i<input; i++){
        
        printf("Enter the engine power: ");
        scanf("%d", &enginePower);
        printf("Enter the resistance: ");
        scanf("%d", &resistance);
        printf("Enter the weight: ");
        scanf("%d", &weight);  
        printf("Enter the height: ");
        scanf("%d", &height);
        sum = sum +(enginePower + resistance) * (weight - height);
        printf("The performance index of Robot %d is: %d\n", input, (enginePower + resistance) * (weight - height) );
        
       
        }
        printf("%d", sum);
        return 0;
    }*/
  /* #include <stdio.h>

    int main(void) {
    int n;
    scanf("%d", &n);

    int height, weight, enginePower, resistance;
    int totalPower = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        totalPower += (enginePower + resistance) * (weight - height);
    }

    printf("%d", totalPower);
    return 0;
}*/
/*#include <stdio.h>

int main() {
    char ch;
    
    // Read input character
    scanf(" %c", &ch);
    
    // Print pyramid pattern
    printf("++++%c++++\n", ch);
    printf("+++%c%c%c+++\n", ch, ch, ch);
    printf("++%c%c%c%c%c++\n", ch, ch, ch, ch, ch);
    printf("+%c%c%c%c%c%c%c+\n", ch, ch, ch, ch, ch, ch, ch);
    printf("%c%c%c%c%c%c%c%c%c\n", ch, ch, ch, ch, ch, ch, ch, ch, ch);
    
    return 0;
}*/

/*#include <stdio.h>//college exam program to find the largest of three numbers
int main(void){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b){
        printf("%d\n", a);
        if (a>c){
            printf("the number is a %d\n", a);
        }
        else{
            printf("the number is c %d\n", c); 
        }
   
        }
    else{
        printf("%d\n", b);  
        if (b>c){
            printf("the number is b %d\n", b);
        }
        else{
            printf("the number is c %d\n", c); 
        }
       
    }
    return 0;
}    */
#include <stdio.h>//college exam program to find the largest of three numbers
