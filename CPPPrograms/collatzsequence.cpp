#include <iostream>
#include <unordered_map>

unsigned long long collatzSequenceLength(unsigned long long number, std::unordered_map<unsigned long long, unsigned long long>& sequenceLengths) {
    if (number == 1) {
        return 1;
    }

    if (sequenceLengths.find(number) != sequenceLengths.end()) {
        return sequenceLengths[number];
    }

    unsigned long long length;

    if (number % 2 == 0) {
        length = 1 + collatzSequenceLength(number / 2, sequenceLengths);
    } else {
        length = 1 + collatzSequenceLength(3 * number + 1, sequenceLengths);
    }

    sequenceLengths[number] = length;
    return length;
}

unsigned long long longestCollatzSequence(unsigned long long limit) {
    std::unordered_map<unsigned long long, unsigned long long> sequenceLengths;
    unsigned long long maxLength = 0;
    unsigned long long numberWithMaxLength = 0;

    for (unsigned long long i = 1; i < limit; i++) {
        unsigned long long length = collatzSequenceLength(i, sequenceLengths);
        if (length > maxLength) {
            maxLength = length;
            numberWithMaxLength = i;
        }
    }

    return numberWithMaxLength;
}

int main() {
    unsigned long long limit = 1000000;
    unsigned long long result = longestCollatzSequence(limit);

    std::cout << "The starting number under " << limit << " that produces the longest Collatz sequence is: " << result << std::endl;

    return 0;
}
