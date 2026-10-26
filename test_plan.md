# Test Plan — C++ Combat Simulator

Run each test manually and record the observed result before submission.

| Test | Steps | Expected result |
|---|---|---|
| Player attack | Start the program and choose 1 | Enemy health decreases by 10–25 |
| Healing | Choose 2 when player health is below 100 | Health increases by up to 20 |
| Health cap | Choose 2 when player health is 100 | Health remains at 100 |
| Invalid menu choice | Enter 9 | Invalid-choice message appears |
| Invalid input | Enter a letter | Input is handled and menu is shown again |
| Quit | Choose 3 | Program exits cleanly |
| Victory/defeat | Continue playing until either health reaches zero | Correct end message appears |

Do not mark a test as passed until you have run it and observed the result.
