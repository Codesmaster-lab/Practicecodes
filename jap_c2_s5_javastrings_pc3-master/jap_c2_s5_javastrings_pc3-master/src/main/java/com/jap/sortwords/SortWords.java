package com.jap.sortwords;
import java.util.Arrays;
/* Write a Java program to sort all of the words in the list in alphabetical order and display */
public class SortWords {
    public static void main(String[] args) {
        String[] words = {};

        SortWords sortWords = new SortWords();
        // Call method to sort words alphabetically
        String[] sortedWords = sortWords.sort(words);

        // Display the words after sorting alphabetically
    }

    // Function to sort words in an array in alphabetical order
    public String[] sort(String[] words) {
        Arrays.sort(words);
        return words;
    }
}
