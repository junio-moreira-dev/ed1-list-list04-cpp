# ED1 — Static Lists — List 04

Practice exercises for **Data Structures I** — Static (sequential) list operations: in-place deduplication, compaction, interleaving, and parity partitioning.

> Instituto Federal do Triângulo Mineiro — Campus Patrocínio
> Course: Technology in Systems Analysis and Development — 3rd Term
> Instructor: Júnio Moreira
> Date: 03/09/2026

---

## 📁 Project Structure

```
ed1-static-lists-list04-cpp/
└── src/
    ├── Exer01_RemoveDuplicatesFromSortedList.cpp
    ├── Exer02_MoveZeroesToEnd.cpp
    ├── Exer03_ShuffleArray.cpp
    └── Exer04_SortArrayByParity.cpp
├── .gitignore
├── CMakeLists.txt
├── main.cpp
├── README.md
├── External Libraries
└──Scratches and Consoles
```

> `External Libraries` and `Scratches and Consoles` are CLion/IntelliJ-generated project-view entries (not real folders tracked in the repo) — they show up automatically in the IDE sidebar and can be ignored when browsing the source on disk.

Each `.cpp` file is **standalone** (has its own `main()`) and is compiled as an independent executable. All of them follow the same three-block pattern:

| Block | Responsibility |
|---|---|
| **Pure logic** | Implements the algorithm itself, using STL (`vector`, `string`, etc). Does not perform `cin`/`cout`. |
| `onlineJudge()` | Adapter: reads input with `cin`, calls the pure logic, prints with `cout`. |
| `runExer...()` | Runs the examples from the statement locally and compares against the expected output (`[PASSED]` / `[FAILED]`). |

---

## 📝 Exercises

| # | File | Problem | Technique | Complexity |
|---|---|---|---|---|
| 1 | `Exer01_RemoveDuplicatesFromSortedList.cpp` | Remove duplicates from a sorted static list in-place, keeping the relative order of unique elements | Two-pointer in-place deduplication (adapted from LeetCode #26) | O(n) |
| 2 | `Exer02_MoveZeroesToEnd.cpp` | Move all zero-valued elements to the end of the list, preserving the relative order of non-zero elements | Two-pointer in-place compaction (adapted from LeetCode #283) | O(n) |
| 3 | `Exer03_ShuffleArray.cpp` | Interleave two halves of a list `[x1..xn, y1..yn]` into `[x1, y1, x2, y2, ..., xn, yn]` | Two-pointer interleaving into an auxiliary static list | O(n) |
| 4 | `Exer04_SortArrayByParity.cpp` | Rearrange a list so that all even numbers come before all odd numbers | Converging two-pointer swap (adapted from LeetCode #905) | O(n) |

<details>
<summary><strong>Details for each exercise (input, output, and example)</strong></summary>

### 1. Removing Duplicates from a Sorted List
*Source: LeetCode #26 - Remove Duplicates from Sorted Array*

**Input:** N (1 ≤ N ≤ 10⁴) on the first line; the second line contains N integers already sorted in non-decreasing order.
**Output:** first line with K, the number of unique elements after removing consecutive duplicates in-place; second line with the K resulting elements. Relative order of the unique elements must be preserved.

```
Input                        Output
3                            2
1 1 2                        1 2

10                           5
0 0 1 1 1 2 2 3 3 4          0 1 2 3 4
```

### 2. Moving Zeroes to the End
*Source: LeetCode #283 - Move Zeroes*

**Input:** N (1 ≤ N ≤ 10⁴) on the first line; the second line contains N integers.
**Output:** a single line with the N elements reorganized so that every value equal to 0 is moved to the end of the list, while the relative order of all non-zero values is preserved.

```
Input                Output
5                    1 3 12 0 0
0 1 0 3 12

4                    1 0 0 0
0 0 0 1
```

### 3. Shuffling a Sequential List
*Source: LeetCode #1470 - Shuffle the Array*

**Input:** n (1 ≤ n ≤ 500) on the first line; the second line contains the 2n integers of the list in the format `[x1, x2, ..., xn, y1, y2, ..., yn]`.
**Output:** a single line with the 2n elements reorganized into the interleaved format `[x1, y1, x2, y2, ..., xn, yn]`.

```
Input                        Output
3                            2 3 5 4 1 7
2 5 1 3 4 7

4                            1 4 2 3 3 2 4 1
1 2 3 4 4 3 2 1
```

### 4. Parity Separation in a Static List
*Source: LeetCode #905 - Sort Array By Parity*

**Input:** N (1 ≤ N ≤ 10⁴) on the first line; the second line contains N non-negative integers (0 ≤ nums[i] ≤ 10⁹).
**Output:** a single line with the N elements rearranged so that every even number precedes every odd number. Any internal ordering that satisfies this split is accepted (stability is **not** required).

```
Input                Output (one valid answer)
4                    4 2 1 3
3 1 2 4

1                    0
0
```

</details>

---

## 🚀 Running in CLion

1. Open the project and reload CMake (**Reload CMake Project**, the sync icon that appears when you edit `CMakeLists.txt`).
2. In the run target selector (top of the window), choose the desired exercise.
3. Click **Run** (▶) or **Debug** (🐞).

> **Tip:** each file toggles between two modes inside `int main()`:
> - **Local test mode** (default): runs `runExer...()` with the examples from the statement.
> - **Online judge mode**: comment out the `runExer...()` call and uncomment `onlineJudge()` before submitting to the judge.

```cpp
int main() {
    runExer01RemoveDuplicatesFromSortedList();  // <- local test mode (active)
    // onlineJudge();                           // <- online judge mode (commented)
    return 0;
}
```

---

## 💻 Running from the Terminal (without CLion)

If you prefer to compile manually with `g++`:

```bash
g++ -std=c++17 -Wall -Wextra -o exer01 src/Exer01_RemoveDuplicatesFromSortedList.cpp
./exer01
```

To test online judge mode from the terminal, redirect an input file:

```bash
echo "3
1 1 2" | ./exer01
```

---

## ⚠️ Watch Out For

- **Question 1** must remove duplicates **in-place**, using two pointers over the same static array — don't filter into a new vector and call it in-place unless the underlying array is still modified.
- **Question 2** requires the non-zero elements to keep their original relative order; only the zeros are pushed to the end — a plain "count zeros and rebuild" approach must still respect this ordering.
- **Question 3** must produce the interleaved list without altering the logical content of the two halves — using an auxiliary static list of the same size to write the interleaved result is acceptable, since the operation is not naturally in-place.
- **Question 4** only requires the even/odd split, **not** stability — any valid arrangement that satisfies "evens before odds" is accepted, so a converging two-pointer swap (front/back) is the expected O(n), O(1)-extra-space technique.

---

## ✅ Prerequisites

- C++17-compliant compiler or newer (GCC, Clang, or MSVC)
- CMake ≥ 3.20
- CLion (recommended) or any IDE/editor of your choice

---

## 📚 Reference

Original exercise list: *Exercícios de Fixação — Estrutura de Dados I* (03/09/2026).
