package com.jap.weightedaveragecalculator;

import java.util.Scanner;

public class WeightedAverageCalculation {

  // Function accepts academic scores as input parameters and outputs the overall
  // weighted average percentage of an individual.
  //Calculate the Overall Percentage

  public float averageCalculation(int assignmentScore, int projectScore, int quizScore, int midTermScore,
      int finalExamScore) {

      float overallPercentage = -1;
      float weightedassig=(float) 0.1*(float)assignmentScore;
      float weightedproj= (float) 0.35*(float)projectScore;
      //System.out.println(weightedproj);
      float weightedquiz= (float)0.1*(float)quizScore;
      float weightedmid=(float) 0.15*midTermScore;
      float weightedfinal= (float)0.3*(float)finalExamScore;

      overallPercentage=(float)(weightedassig+weightedproj+weightedquiz+weightedfinal+weightedmid);
      return overallPercentage;
  }

}
