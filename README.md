# StudentPerformance-Predictor
Predict student performance levels (Excellent/Good/Fair/Poor) using C++ project simulating ML classification.

## Overview
This project predicts **student performance levels** based on marks using **C++** 
It implements a **rule-based predictive model**, simulating a **machine learning concept** 
---

## Research Objective
- Explore student performance prediction using simple rules.  
- Demonstrate **data-driven decision making**  
- Introduce the **ML workflow concept**: dataset → model → prediction → output.

---

## Features
- Input student names and marks
- Predict performance level: Excellent / Good / Fair / Poor
- Display predictions
- Console-based interface for experimentation

---

## How ML is Simulated
| ML Concept       | C++ Implementation |
|-----------------|------------------|
| Dataset          | Array of `Student` structs |
| Features         | Marks (integer) |
| Model            | `predictPerformance()` function with thresholds |
| Prediction       | Assign performance level based on marks |
| Evaluation       | Compare predictions with expected output |

---

## Example Input
Enter number of students: 5
Enter name and marks for student 1: Hina 95
Enter name and marks for student 2: Bilal 82
Enter name and marks for student 3: Zara 74
Enter name and marks for student 4: Ali 66
Enter name and marks for student 5: Noor 58


## Example Output
Predicted Performance:
Hina - 95 marks -> Excellent
Bilal - 82 marks -> Good
Zara - 74 marks -> Fair
Ali - 66 marks -> Fair
Noor - 58 marks -> Poor


---

## How to Run
1. Clone the repository
2. Open `main.cpp` in any C++ compiler  
3. Compile and run  
4. Enter student data as prompted  

---

## Future Work
- Add multiple subjects with weighted performance scores  
- Include statistical analysis (mean, median, distribution)  
- Extend prediction model for large datasets with CSV input/output  

---

## Author
Farwa Ch  
BS Computer Science, 4th Semester  
Skills: C++, HTML, CSS, Basic UX/UI Design
