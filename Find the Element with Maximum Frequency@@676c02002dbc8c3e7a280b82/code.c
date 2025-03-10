#include <stdio.h>
#include <limits.h>

#define MAX_VAL 100001 

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int freq[MAX_VAL] = {0}; 

 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int max_freq = 0;
    int min_element = INT_MAX;

   
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > max_freq) {
            max_freq = freq[arr[i]];
            min_element = arr[i];
        } else if (freq[arr[i]] == max_freq && arr[i] < min_element) {
            min_element = arr[i]; 
        }
    }

    printf("%d\n", min_element);
    return 0;
}
