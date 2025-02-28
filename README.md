# Sorting Algorithms in C++ & Python 🔢⚡  

This repository contains **C++ and Python implementations** of various **sorting algorithms**. Each algorithm is optimized for general use, well-documented, and includes time complexity analysis. Perfect for **learning, interviews, and competitive programming**! 🚀

## 📌 Included Sorting Algorithms  

### **1️⃣ Comparison-Based Sorting**  
🔹 **Bubble Sort** – Repeatedly swaps adjacent elements (O(n²)).  
🔹 **Selection Sort** – Selects the smallest element iteratively (O(n²)).  
🔹 **Insertion Sort** – Builds a sorted array one element at a time (O(n²)).  
🔹 **Merge Sort** – A **divide & conquer** sorting algorithm (O(n log n)).  
🔹 **Quick Sort** – Efficient sorting using **pivot selection** (O(n log n) avg).  
🔹 **Heap Sort** – Sorts using a **binary heap** (O(n log n)).  
🔹 **Shell Sort** – Improved **Insertion Sort** with gap sequences (O(n log n) avg).  

### **2️⃣ Non-Comparison Sorting**  
🔹 **Counting Sort** – Works well for **small-range integers** (O(n + k)).  
🔹 **Radix Sort** – Sorts numbers by **digits** (O(nk)).  
🔹 **Bucket Sort** – Distributes elements into **buckets** (O(n) avg).  

## 📂 Folder Structure  
```
📂 Sorting-Algorithms
│── 📜 bubble_sort.cpp
│── 📜 selection_sort.cpp
│── 📜 insertion_sort.cpp
│── 📜 merge_sort.cpp
│── 📜 quick_sort.cpp
│── 📜 heap_sort.cpp
│── 📜 shell_sort.cpp
│── 📜 counting_sort.cpp
│── 📜 radix_sort.cpp
│── 📜 bucket_sort.cpp
│── 📜 bubble_sort.py
│── 📜 selection_sort.py
│── 📜 insertion_sort.py
│── 📜 merge_sort.py
│── 📜 quick_sort.py
│── 📜 heap_sort.py
│── 📜 shell_sort.py
│── 📜 counting_sort.py
│── 📜 radix_sort.py
│── 📜 bucket_sort.py
│── 📜 README.md  
```

## ⏳ Time Complexity Comparison  
| Algorithm       | Best Case | Average Case | Worst Case |
|----------------|----------|-------------|------------|
| **Bubble Sort**   | O(n)      | O(n²)       | O(n²)      |
| **Selection Sort** | O(n²)     | O(n²)       | O(n²)      |
| **Insertion Sort** | O(n)      | O(n²)       | O(n²)      |
| **Merge Sort**    | O(n log n) | O(n log n)  | O(n log n) |
| **Quick Sort**    | O(n log n) | O(n log n)  | O(n²)      |
| **Heap Sort**     | O(n log n) | O(n log n)  | O(n log n) |
| **Shell Sort**    | O(n log n) | O(n log n)  | O(n²)      |
| **Counting Sort** | O(n + k)   | O(n + k)    | O(n + k)   |
| **Radix Sort**    | O(nk)      | O(nk)       | O(nk)      |
| **Bucket Sort**   | O(n)       | O(n)        | O(n²)      |

## 💡 How to Use?  
1️⃣ Clone this repository  
```sh
git clone https://github.com/your-username/Sorting-Algorithms.git
```  
2️⃣ Compile and run any sorting program  
For C++:
```sh
g++ merge_sort.cpp -o merge_sort
./merge_sort
```
For Python:
```sh
python merge_sort.py
```

## 📌 Contributions  
Feel free to **fork this repo**, improve the code, and submit **pull requests**! 🚀  


