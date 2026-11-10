# Assignment 2 Report – CO2
**Student:** Jeeva (confirm full name)  
**Register No.:** 1965260079  
**GitHub:** https://github.com/sriramjeeva07/CSA0205-1965260079-Assignment-02

## Q1 – Precedence, associativity and discount bug
The supplied expression evaluates multiplication before addition/subtraction, and operators of the same precedence associate left-to-right. Integer division truncates. The original expression is unsafe because senior flag is multiplied into the discount term and its data type/rounding may not represent currency. The revised program calculates gross, discount, tax, total and threshold rebate as separate named values. This improves auditability; arithmetic remains O(1) time and O(1) space.

## Q2 – Short-circuit evaluation
For A && B, B is skipped when A is false; for A || B, B is skipped when A is true. The sample program compares condition orders over 1,000 synthetic passengers and prints actual verification calls. If verification itself writes an audit log, moving it changes observable behavior; preserve required audit coverage rather than optimizing away calls. Each passenger is O(1), total O(n); auxiliary space O(1).

## Q3 – Bitwise device register
Each device index selects one bit. Set: reg | (1u << dev); clear: reg & ~(1u << dev); toggle: reg ^ (1u << dev); test: (reg & (1u << dev)) != 0. The supplied sequence should produce 00000101 then 00000110, with AC ON and PUMP OFF. A byte uses 1 byte/home versus 8 bytes for an eight-element byte array. Bit operations are O(1); counting ON bits is O(8), or O(1) for fixed byte width.

## Q4 – Grade classification
The implementation rejects marks outside 0..100 before switching on marks/10. Cases 9 and 10 return S; 8=A, 7=B, 6=C, 5=D and default F. Boundary tests include -1, 0, 49, 50, 59, 60, 69, 70, 79, 80, 89, 90, 99, 100, 101. Switch needs break/return to prevent fall-through. Both switch and ladder take O(1) for this fixed set; table lookup is O(1) with O(11) storage.

## Q5 – Prime checking
The improved trial-division loop tests divisors while i <= n/i (avoids i*i overflow), and increments the division counter for each modulo operation. The naive loop tests up to n-1. Trial division is O(sqrt(n)) time and O(1) space; naive is O(n). Sieve alternative: O(N log log N) preprocessing and O(N) memory, then O(1) lookup per number.

## Q6 – Loan schedule
Each month interest is added, then payment is capped at the remaining balance so the final payment does not overpay. The loop terminates when balance reaches zero, or at 360 months. If payment <= monthly interest, the balance cannot decrease and the program stops with a non-amortizing warning. Simulation is O(m) time and O(1) extra space; formula approach is O(1) time but requires careful assumptions and floating-point validation.

## Q7 – Day-4 redesign
Chosen bottleneck: trial division checks even divisors and every integer in the original version. Redesign handles n<2, n=2 and even n separately, then tests only odd divisors up to sqrt(n). Objective: reduce modulo/division checks on primes by approximately half after the first odd divisor. Extra space O(1); same worst-case asymptotic O(sqrt(n)), improved constant factor. Run Q7 and record the printed same-input division counts as experimental evidence.

## Test evidence to append
| Question | Inputs | Expected/actual | Operation counts | Screenshot |
|---|---|---|---|---|
| Q1 | Choose three price/qty/senior cases | Fill after execution | Arithmetic steps | Add |
| Q2 | 1,000 generated passengers | Fill from output | verify calls | Add |
| Q3 | main sequence | 00000101; 00000110 | 5 bit operations in sequence | Add |
| Q4 | boundary set above | Fill from output | comparisons/cases | Add |
| Q5 | 97,100,7919,1000003 | Fill from output | modulo counts | Add |
| Q6 | 10000, 2%, 2000 | Hand-check then run | months | Add |
| Q7 | same four prime inputs | Fill from output | original vs optimized | Add |

**Important:** Actual terminal screenshots, measured results, compiler version and faculty collaboration are not yet included. Add these after running on your own machine; do not submit predictions as execution evidence.
