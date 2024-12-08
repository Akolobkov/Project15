void combSort(int arr[], int n) {
    float shrinkFactor = 1.3;
    int gap = n;
    bool swapped = true;

    while (gap != 1 || swapped) {
        gap = (int)(gap / shrinkFactor);
        if (gap < 1) {
            gap = 1;
        }

        swapped = false;

        for (int i = 0; i < n - gap; i++) {
            if (arr[i] > arr[i + gap]) {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
                swapped = true;
            }
        }
    }
}