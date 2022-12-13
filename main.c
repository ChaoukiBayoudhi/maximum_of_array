#include <stdio.h>
//declaration of functions
void input_array(int *tab, int *size);
void print_array(int *tab, int size);
int max_array(int *tab, int size);//returns the maximum index of the array
//main function
int main() {
    int tab[100],size,index;
    input_array(tab,&size);//call to input_array function with tab and size's address as arguments
    print_array(tab,size);//call to print_array function with tab and size's value as arguments
    index=max_array(tab,size);
    printf("The maximum of the array is at the index %d\n",index);
    return 0;
}
//implementation of functions
void input_array(int *tab, int *size){
    int i;
    printf("Enter the size of the array: ");
    scanf("%d", size);
    for(i=0; i<*size; i++){
        printf("Enter the element %d: ", i+1);
        //scanf("%d", &tab[i]);
        scanf("%d", tab+i);
    }
}
void print_array(int *tab, int size){
    int i;
    printf("The array is: \n");
    for(i=0; i<size; i++){
        printf("%d\t", tab[i]);
    }
    printf("\n");
}
int max_array(int *tab, int size){
    int i, index_max=0;//we suppose that the first element is the maximum
    for(i=1; i<size; i++){
        if(tab[i]>tab[index_max]){//test if the current element is greater than the maximum
            index_max=i;//we update the index of the maximum
        }
    }
    return index_max;
}
