package com.jap.hourlywagescalculator;

import com.jap.hourlywagescalculator.CalculateTotalPay;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class CalculateTotalPayTest {

    CalculateTotalPay calculateTotalPay;

    @BeforeEach
    void init() {
        calculateTotalPay = new CalculateTotalPay();
    }

    // Test calculateOnHourlyBasis method by passing positive values as hours worked
    @Test
    public void givenHoursWorkedEstimateOvertime() {
        assertTrue(calculateTotalPay.calculateOnHourlyBasis(50));
        assertFalse(calculateTotalPay.calculateOnHourlyBasis(40));
        assertTrue(calculateTotalPay.calculateOnHourlyBasis(60));
        assertTrue(calculateTotalPay.calculateOnHourlyBasis(73));
        assertFalse(calculateTotalPay.calculateOnHourlyBasis(25));
    }

    // Test calculateOnHourlyBasis method by passing negative value and zero as hours worked
    @Test
    public void givenHoursWorkedAsNegativeValueOrZeroEstimateOvertime() {
        assertFalse(calculateTotalPay.calculateOnHourlyBasis(0));
        assertFalse(calculateTotalPay.calculateOnHourlyBasis(-45));
    }

    // Test checkBasePay method by passing positive values as base pay
    @Test
    public void givenBasePayEstimateIfItsMoreThanMinimumWage() {
        assertFalse(calculateTotalPay.checkBasePay(11));
        assertTrue(calculateTotalPay.checkBasePay(80));
    }

    // Test checkBasePay method by passing negative value or zero as base pay
    @Test
    public void givenBasePayAsNegativeValueOrZeroEstimateIfItsMoreThanMinimumWage() {
        assertFalse(calculateTotalPay.checkBasePay(0));
        assertFalse(calculateTotalPay.checkBasePay(-17));
    }

    // Test calculateHourlyWages method by passing positive values as base pay and hours worked
    @Test
    public void givenBasePayAndHoursWorkedEstimateSalary() {
        assertEquals(0, calculateTotalPay.calculateHourlyWages(7.50, 35));
        assertEquals(0, calculateTotalPay.calculateHourlyWages(8.20, 47));
        assertEquals(1272, calculateTotalPay.calculateHourlyWages(12.00, 73)); // here changed
        assertEquals(525, calculateTotalPay.calculateHourlyWages(15.00, 35));
        assertEquals(982.8, calculateTotalPay.calculateHourlyWages(18.20, 47));
    }

    // Test calculateHourlyWages method by passing negative values and zero as base pay and hours worked
    @Test
    public void givenBasePayOrHoursWorkedAsNegativeOrZeroEstimateSalary() {
        assertEquals(0, calculateTotalPay.calculateHourlyWages(15.00, 0));
        assertEquals(0, calculateTotalPay.calculateHourlyWages(0, 45));
        assertEquals(0, calculateTotalPay.calculateHourlyWages(0, 0));
        assertEquals(0, calculateTotalPay.calculateHourlyWages(-15.00, 35));
        assertEquals(0, calculateTotalPay.calculateHourlyWages(18.20, -47));
        assertEquals(0, calculateTotalPay.calculateHourlyWages(-12.00, -73));

    }
}
