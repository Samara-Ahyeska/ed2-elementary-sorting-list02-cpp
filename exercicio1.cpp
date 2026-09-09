int is_sorted(int array[], int n) {
   
    for (int i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}