# Sort


Bubble sort


|%time          | cumulative seconds    | self seconds  |    called     |  selfs/call |  totals/call |  name  |
| ------------- |:---------------------:| -----:        | ------------- |:-----------:| ----         | -----  |   
| 99.71      |6.98 |6.98 |    1           |     6.98          |  6.98      |     sortit         |        |
| 0.29       | 7.00      |  0.02  |               |               |             |   main           |        |



Insertion sort


|%time          | cumulative seconds    | self seconds  |    called     |  selfs/call |  totals/call |  name  |
| ------------- |:---------------------:| -----:        | ------------- |:-----------:| ----         | -----  |   
| 99.50      |3.99 |3.99 |    1           |     3.99          |  3.99     |     sortit         |        |
| 0.50       | 4.01      |  0.02  |               |               |             |   main           |        |


Merge sort

|%time          | cumulative seconds    | self seconds  |    called     |  selfs/call |  totals/call |  name  |
| ------------- |:---------------------:| -----:        | ------------- |:-----------:| ----         | -----  |   
| 75.00      |0.03 |0.03 |               |               |        |     main         |        |
| 25.00       | 0.04     |  0.01  |    57772           |      0.00         |     0.00        |    Merge          |        |
| 0.00 | 0.04      |    0.00 |     1          |       0.00        |     10.00        |   sortit           |        |  


Quick sort

|%time          | cumulative seconds    | self seconds  |    called     |  selfs/call |  totals/call |  name  |
| ------------- |:---------------------:| -----:        | ------------- |:-----------:| ----         | -----  |   
| 93.75      |0.15 |0.15 |    1           |     150.00       |  150.00    |     sortit         |        |
| 6.25     | 0.16     |  0.01 |               |               |             |   main           |        |

From the total time, Merge sort ＜Quick sort ＜Insertion sort ＜Bubble sort, From sortit call to the total time to see, Merge sort ＜Quick sort ＜Insertion sort ＜Bubble sort, In summary,compared to the merge sort and quick sort, bubble sort and insertion sort in speed for better performance.
