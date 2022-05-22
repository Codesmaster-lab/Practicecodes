package com.jap.sortwords;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertArrayEquals;

public class SortWordsTest {

    SortWords sortWords;

    @BeforeEach
    void setUp() {
        sortWords = new SortWords();
    }

    @AfterEach
    void tearDown() {
        sortWords = null;
    }

    // Test sort method by passing array of words as input
    @Test
    public void givenArrayOfWordsReturnItsSortedOrder() {
        // Test scenario: Words starting with different letters
        assertArrayEquals(new String[]{"Ajay", "Gaurav", "Rahul", "Suresh" }, sortWords.sort(new String[]{"Rahul", "Ajay", "Gaurav", "Suresh" }));
        // Test scenario: Words starting with same letter
        assertArrayEquals(new String[]{"Baby", "Beauty", "Bodyguard", "Builder" }, sortWords.sort(new String[]{"Bodyguard", "Beauty", "Baby", "Builder" }));
        // Test scenario: Words starting with same first and second letter
        assertArrayEquals(new String[]{"label", "ladder", "landlord", "language", "laugh" }, sortWords.sort(new String[]{"ladder", "landlord", "label", "laugh", "language" }));
        // Test scenario: Words starting with difference letter case
        assertArrayEquals(new String[]{"Baby", "beauty", "Bodyguard", "builder" }, sortWords.sort(new String[]{"Bodyguard", "beauty", "Baby", "builder" }));
    }
}
