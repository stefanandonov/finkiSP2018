int fibonacciAtPosition (int position) {
    if (position ==0 || position==1)
        return 1;
    else
        return fibonacciAtPosition(position-1) + fibonacciAtPosition(position-2);
}

void generateFibonacciOfSize (int size) {
    int i;
    for (i=0;i<size;i++) {
        printf("%d ", fibonacciAtPosition(i));
    }
}

int main () {
    int n;
    scanf("%d", &n);
    generateFibonacciOfSize(n);
    return 0;
}