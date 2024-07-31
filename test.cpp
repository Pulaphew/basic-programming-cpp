#include <iostream>
#include <algorithm>
using namespace std;

int* mostFrequent(int* array, int N, int& resultSize) {
    int maxCount = 0;
    int mostFrq[N];
    int countFrq = 0;

    for(int i = 0; i < N; i++) {
        int count = 0;
        for(int j = 0; j < N; j++) {
            if(array[i] == array[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            countFrq = 0;
            mostFrq[countFrq++] = array[i];
        } else if(count == maxCount) {
            bool exists = false;
            for(int k = 0; k < countFrq; k++) {
                if(mostFrq[k] == array[i]) {
                    exists = true;
                    break;
                }
            }
            if(!exists) {
                mostFrq[countFrq++] = array[i];
            }
        }
    }

    int* result = new int[countFrq];
    for(int i = 0; i < countFrq; i++) {
        result[i] = mostFrq[i];
    }

    resultSize = countFrq;
    sort(result, result + resultSize); // Sorting the result array
    return result;
}

int main() {
    int N;
    cin >> N;
    if(N < 2 || N > 100) {
        return 0;
    }

    int array[N];
    for(int i = 0; i < N; i++) {
        cin >> array[i];
    }

    int resultSize;
    int* result = mostFrequent(array, N, resultSize);

    for(int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    delete[] result;

    return 0;
}
